#ifndef rpi_shader_H
#define rpi_shader_H

extern unsigned int rpi_shader[];

#define mc_setup_c (rpi_shader + 0)
#define mc_filter_uv (rpi_shader + 194)
#define mc_filter_uv_b0 (rpi_shader + 356)
#define mc_filter_uv_b (rpi_shader + 536)
#define mc_exit (rpi_shader + 678)
#define mc_exit_c (rpi_shader + 678)
#define mc_setup (rpi_shader + 694)
#define mc_filter (rpi_shader + 978)
#define mc_filter_b (rpi_shader + 1098)
#define mc_interrupt_exit8c (rpi_shader + 1218)
#define mc_interrupt_exit12 (rpi_shader + 1246)
#define mc_exit1 (rpi_shader + 1282)
#define mc_end (rpi_shader + 1298)

#endif
