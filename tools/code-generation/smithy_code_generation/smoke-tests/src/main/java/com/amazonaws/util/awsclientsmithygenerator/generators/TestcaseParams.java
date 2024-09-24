package com.amazonaws.util.awsclientsmithygenerator.generators;
import lombok.Data;
import java.util.List;
import java.util.Optional;
@Data
public final class TestcaseParams {
    public String testcaseName;
    public String clientName;
    public ClientConfiguration config;
    public String operationName;
    public String inputShapeName;
    public String outputShapeName;
    public List<String> getterCodeBlock;
    public String functionBlock;
    boolean expectSuccess;
    Optional<String> errorShapeId;
    //capture auth scheme as that decides the client constructor
    String auth;
};
