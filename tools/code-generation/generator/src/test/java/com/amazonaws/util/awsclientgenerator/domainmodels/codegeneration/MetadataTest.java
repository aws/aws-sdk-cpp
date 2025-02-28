package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.google.common.collect.ImmutableList;
import org.junit.Assert;
import org.junit.Test;

public class MetadataTest {
    @Test
    public void shouldPreferProtocolOverProtocolsForApiGateway() {
        Metadata metadata = new Metadata();
        metadata.setProtocol("application-json");
        metadata.setProtocols(ImmutableList.of("json"));
        Assert.assertEquals("application-json", metadata.findFirstSupportedProtocol());
    }

    @Test
    public void shouldPreferProtocolsOverProtocol() {
        Metadata metadata = new Metadata();
        metadata.setProtocol("rest-json");
        metadata.setProtocols(ImmutableList.of("json"));
        Assert.assertEquals("json", metadata.findFirstSupportedProtocol());
    }

    @Test
    public void shouldPreferBestFitProtocol() {
        Metadata metadata = new Metadata();
        metadata.setProtocol("rest-json");
        metadata.setProtocols(ImmutableList.of("rest-json", "json"));
        Assert.assertEquals("json", metadata.findFirstSupportedProtocol());
    }

    @Test
    public void shouldUseProtocolWhenProtocolsIsMissing() {
        Metadata metadata = new Metadata();
        metadata.setProtocol("rest-json");
        metadata.setProtocols(ImmutableList.of());
        Assert.assertEquals("rest-json", metadata.findFirstSupportedProtocol());
    }

    @Test
    public void shouldThrowExeceptionWhenUnsupportedProtocol() {
        Metadata metadata = new Metadata();
        metadata.setServiceFullName("ServiceName");
        metadata.setProtocols(ImmutableList.of("grpc"));
        Assert.assertThrows("No supported protocol found for ServiceName", RuntimeException.class, metadata::findFirstSupportedProtocol);
    }
}