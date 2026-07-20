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
}
