#ifdef __cplusplus
extern "C"
{
#endif

extern int	rtmidi_get_num_devs(void);
extern void	rtmidi_get_dev_name(int num, char *s);
extern int	rtmidi_in_get_num_devs(void);
extern void	rtmidi_in_get_dev_name(int num, char *s);

#ifdef __cplusplus
}
#endif