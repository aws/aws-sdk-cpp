/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.Trait;
import java.util.*;

public class ShapeUtil {
    
    private static final List<String> RESULT_SUFFIXES = List.of("Result", "SdkResult", "CppSdkResult");
    
    /**
     * Backward compatibility map for operations that must use "SdkResult" suffix.
     * 
     * Background:
     * The C2J code generator's renameShape() tries suffixes in order: Result -> SdkResult -> CppSdkResult.
     * It picks the first suffix that doesn't collide with existing shape names in the model.
     * 
     * Problem:
     * Some legacy C2J models (e.g., medialive-2017-10-14.normal.json) defined shapes like:
     *   - ListNodesResult (a domain shape)
     *   - ListNodesResponse (the operation output shape)
     * 
     * When the C2J generator tried to create the SDK wrapper for ListNodes operation:
     *   1. Tried "ListNodesResult" -> COLLISION with existing shape
     *   2. Fell back to "ListNodesSdkResult" -> No collision, used this
     * 
     * The Smithy models are cleaner and don't have these collisions, but we must preserve
     * the "SdkResult" suffix for these operations to maintain backward compatibility with
     * existing C2J-generated code.
     * 
     * Map format: service-name -> Set of operation names requiring "SdkResult"
     * 
     * Example:
     * medialive C2J model had both ListNodesResult and ListNodesResponse shapes,
     * forcing ListNodesSdkResult. Smithy model only has ListNodesResponse, but we
     * preserve SdkResult to avoid breaking changes.
     *
     */
    private static final Map<String, Set<String>> LEGACY_SDK_RESULT_OPERATIONS = Map.of(
        "medialive", Set.of("ListChannelPlacementGroups", "ListClusters", "ListNetworks", "ListNodes")
    );
    
    /**
     * Legacy operation name version suffixes required for backwards compatibility.
     * The legacy C2J code generator appended API version suffixes to operation names for certain services.
     * This maintains compatibility with existing generated code that depends on these versioned method names.
     * 
     * CloudFront: Uses "2020_05_31" suffix (the API version when C++ SDK generation was standardized)
     * - Example: "ListDistributions" becomes "ListDistributions2020_05_31"
     * - Required because existing C++ code expects these versioned method names
     * - CloudFront has had multiple API versions, and the C2J generator historically used version suffixes
     */
    private static final Map<String, String> OPERATION_VERSION_SUFFIXES = Map.of(
        "cloudfront", "2020_05_31"
    );
    
    /**
     * C2J/Smithy model mismatches: tokens that are integers in C2J but strings in Smithy.
     * 
     * Background:
     * Some services have tokens that were modeled as integers in C2J but changed to
     * strings in Smithy models. The C2J-generated code uses int types, so traits must
     * use `!= 0` checks instead of `.empty()` checks.
     * 
     * Map format: service-name -> Map of operation-name -> token-name
     * 
     * Example:
     * S3's ListParts operation has NextPartNumberMarker as integer in C2J but string in Smithy.
     */
    private static final Map<String, Map<String, Set<String>>> NUMERIC_TOKEN_OVERRIDES = Map.of(
        "s3", Map.of("ListParts", Set.of("NextPartNumberMarker")),
        "s3-crt", Map.of("ListParts", Set.of("NextPartNumberMarker"))
    );
    
    /**
     * Gets the operation method name with legacy version suffix if required.
     * 
     * Some services require version suffixes appended to operation names for backwards compatibility
     * with the legacy C2J code generator. This ensures existing C++ code continues to work with
     * the expected method names.
     * 
     * @param opName The base operation name from the Smithy model
     * @param smithyServiceName The Smithy service name (e.g., "cloudfront")
     * @return The operation name with version suffix if needed (e.g., "ListDistributions2020_05_31")
     */
    public static String getOperationMethodName(String opName, String smithyServiceName) {
        String versionSuffix = OPERATION_VERSION_SUFFIXES.get(smithyServiceName);
        return versionSuffix != null ? opName + versionSuffix : opName;
    }
    
    /**
     * Checks if a token is numeric (integer or long type).
     * First checks for C2J/Smithy model mismatch overrides, then inspects the actual shape type.
     * 
     * @param model The Smithy model
     * @param op The operation shape
     * @param smithyServiceName The Smithy service name
     * @param wrapperMember The wrapper member name (null if token is at top level)
     * @param tokenName The token name
     * @return true if the token is numeric
     */
    public static boolean isNumericToken(Model model, OperationShape op, String smithyServiceName, String wrapperMember, String tokenName) {
        // Check for C2J/Smithy model mismatch overrides first
        Map<String, Set<String>> serviceOverrides = NUMERIC_TOKEN_OVERRIDES.get(smithyServiceName);
        if (serviceOverrides != null) {
            Set<String> tokens = serviceOverrides.get(op.getId().getName());
            if (tokens != null && tokens.contains(tokenName)) {
                return true;
            }
        }
        
        Optional<Shape> tokenShape = getOutputStructure(model, op)
            .flatMap(out -> {
                if (wrapperMember == null) {
                    return out.getMember(tokenName);
                }
                return out.getMember(wrapperMember)
                          .flatMap(m -> model.getShape(m.getTarget()))
                          .flatMap(t -> t.asStructureShape())
                          .flatMap(w -> w.getMember(tokenName));
            })
            .flatMap(member -> model.getShape(member.getTarget()));

        return tokenShape.map(ts -> ts instanceof IntegerShape || ts instanceof LongShape).orElse(false);
    }
    
    /**
     * Determines the result suffix for an operation based on protocol and naming conflicts.
     * Replicates C2J renameShape conflict detection logic.
     * 
     * C2J logic:
     * 1. Try "Result" first
     * 2. If collision exists (direct name match OR Get/Set accessor conflict), try "SdkResult"
     * 3. If still collision, try "CppSdkResult"
     * 
     * @param model The Smithy model
     * @param operation The operation shape
     * @param smithyServiceName The Smithy service name
     * @return "Response" for EC2 protocol, "SdkResult" if naming conflict exists, otherwise "Result"
     */
    public static String getResultSuffix(Model model, OperationShape operation, String smithyServiceName) {
        // EC2 protocol services rename all Result shapes to Response
        if ("ec2".equals(smithyServiceName)) {
            return "Response";
        }
        
        // C2J backward compatibility: preserve SdkResult for operations that had collisions in legacy models
        Set<String> legacyOps = LEGACY_SDK_RESULT_OPERATIONS.get(smithyServiceName);
        if (legacyOps != null && legacyOps.contains(operation.getId().getName())) {
            return "SdkResult";
        }
        
        String baseName = operation.getId().getName();
        Set<String> allShapeNames = new HashSet<>();
        model.shapes().forEach(s -> allShapeNames.add(s.getId().getName()));
        
        // Output shape name (used for legacy early-accept behavior)
        String outputShapeName = operation.getOutput().isPresent()
                ? operation.getOutputShape().getName()
                : null;
        
        // For closer parity with the legacy Get/Set collision rule
        Set<String> outputMemberNames = getOutputStructure(model, operation)
            .map(struct -> new HashSet<>(struct.getAllMembers().keySet()))
            .orElse(new HashSet<>());
        
        for (String suffix : RESULT_SUFFIXES) {
            String candidate = baseName + suffix;
            
            // Legacy parity: if the operation's output shape is already named exactly candidate,
            // then legacy renameShape() would return immediately (no conflict handling).
            if (outputShapeName != null && candidate.equals(outputShapeName)) {
                return suffix;
            }
            
            // Legacy: otherwise, direct collision with any existing shape name is a conflict
            if (allShapeNames.contains(candidate)) {
                continue;
            }
            
            // Closer parity with legacy intent (member-gated Get/Set collisions)
            if (!outputMemberNames.isEmpty()) {
                boolean hasCollision = false;
                for (String shapeName : allShapeNames) {
                    if (outputMemberNames.contains(shapeName) && 
                        (candidate.equals("Get" + shapeName) || candidate.equals("Set" + shapeName))) {
                        hasCollision = true;
                        break;
                    }
                }
                if (hasCollision) {
                    continue;
                }
            }
            
            return suffix;
        }
        
        // Legacy would throw if no suffix is available; returning CppSdkResult silently can hide bugs
        throw new IllegalStateException("Unhandled result shape name conflict for operation: " + baseName);
    }
    
    /**
     * Gets the output structure shape for an operation, or null if not present or not a structure.
     */
    private static Optional<StructureShape> getOutputStructure(Model model, OperationShape op) {
        return op.getOutput()
            .flatMap(outputId -> model.getShape(outputId))
            .flatMap(shape -> shape.asStructureShape());
    }
    
    /**
     * Finds the wrapper member in an operation's output that contains the specified token.
     * Used for token resolution when tokens are nested in wrapper structures.
     * 
     * @param model The Smithy model
     * @param op The operation shape
     * @param tokenName The token name to find
     * @return The wrapper member name, or null if not found
     */
    public static String findWrapperMemberContainingToken(Model model, OperationShape op, String tokenName) {
        return getOutputStructure(model, op)
            .flatMap(outputShape ->
                outputShape.getAllMembers().entrySet().stream()
                    .filter(entry -> model.getShape(entry.getValue().getTarget())
                        .flatMap(t -> t.asStructureShape())
                        .map(s -> s.getAllMembers().containsKey(tokenName))
                        .orElse(false))
                    .map(Map.Entry::getKey)
                    .findFirst()
            )
            .orElse(null);
    }
    
    /**
     * Checks if an operation's output has a top-level member with the specified name.
     * 
     * @param model The Smithy model
     * @param op The operation shape
     * @param memberName The member name to check
     * @return true if the member exists at the top level
     */
    public static boolean hasTopLevelMember(Model model, OperationShape op, String memberName) {
        return getOutputStructure(model, op)
            .map(outputShape -> outputShape.getAllMembers().containsKey(memberName))
            .orElse(false);
    }
    
    /**
     * Gets service-level token when operation-level traits are missing.
     * 
     * @param service The service shape
     * @param traitClass The trait class to look for
     * @param tokenExtractor Function to extract the token from the trait
     * @return The service-level token, or null if not defined
     */
    public static <T extends Trait> String getServiceLevelToken(ServiceShape service, Class<T> traitClass, java.util.function.Function<T, Optional<String>> tokenExtractor) {
        return service.getTrait(traitClass)
                .map(trait -> tokenExtractor.apply(trait).orElse(null))
                .orElse(null);
    }
}