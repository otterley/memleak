FROM busybox
ADD ./shared/leak /bin/
RUN chmod +x /bin/leak
ENTRYPOINT /bin/leak
