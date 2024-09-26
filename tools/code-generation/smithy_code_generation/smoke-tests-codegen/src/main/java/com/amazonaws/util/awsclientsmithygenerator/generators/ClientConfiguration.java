package com.amazonaws.util.awsclientsmithygenerator.generators;
import lombok.Data;
import java.util.List;
@Data
public final class ClientConfiguration {
    public String region;
    public List<String> sigv4aRegionSet;
    public boolean useFips;
    public boolean useDualstack;
};