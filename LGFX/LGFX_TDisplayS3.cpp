#include "LGFX_TDisplayS3.h"

LGFX lcd;

LGFX::LGFX()
{
    auto cfg = _bus.config();

cfg.spi_host = SPI2_HOST;
cfg.spi_mode = 0;
cfg.freq_write = 40000000;
cfg.freq_read = 16000000;
cfg.spi_3wire = false;
cfg.use_lock = true;
cfg.dma_channel = SPI_DMA_CH_AUTO;

cfg.pin_sclk = 18;
cfg.pin_mosi = 17;
cfg.pin_miso = -1;
cfg.pin_dc   = 16;

_bus.config(cfg);
_panel.setBus(&_bus);
auto pcfg = _panel.config();

pcfg.pin_cs = 39;
pcfg.pin_rst = 47;
pcfg.pin_busy = -1;

pcfg.memory_width = 170;
pcfg.memory_height = 320;

pcfg.panel_width = 170;
pcfg.panel_height = 320;

pcfg.offset_x = 0;
pcfg.offset_y = 0;

pcfg.offset_rotation = 0;

pcfg.readable = false;
pcfg.invert = false;
pcfg.rgb_order = false;
pcfg.dlen_16bit = false;
pcfg.bus_shared = true;

_panel.config(pcfg);

setPanel(&_panel);    
}
