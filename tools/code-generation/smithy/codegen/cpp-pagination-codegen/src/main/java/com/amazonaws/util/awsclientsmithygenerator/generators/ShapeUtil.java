/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
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
     * C2J/Smithy model mismatches: pagination tokens that are integers in C2J but strings in Smithy.
     * 
     * Background:
     * Some services have pagination tokens that were modeled as integers in C2J but changed to
     * strings in Smithy models. The C2J-generated code uses int types, so pagination traits must
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
     * Returns all shapes referenced by a root shape, recursively.
     */
    public static Set<Shape> getReferences(Model model, Shape root) {
        Set<Shape> refs = new HashSet<>();
        refs.add(root);
        for (var member : root.members()) {
            refs.addAll(getReferences(model, model.expectShape(member.getTarget())));
        }
        return refs;
    }
    
    /**
     * Checks if a pagination token should be treated as numeric due to C2J/Smithy model mismatch.
     * 
     * @param c2jServiceName The C2J service name
     * @param operationName The operation name
     * @param tokenName The pagination token name
     * @return true if token is numeric in C2J but string in Smithy
     */
    public static boolean isNumericTokenOverride(String c2jServiceName, String operationName, String tokenName) {
        Map<String, Set<String>> serviceOverrides = NUMERIC_TOKEN_OVERRIDES.get(c2jServiceName);
        if (serviceOverrides == null) {
            return false;
        }
        Set<String> tokens = serviceOverrides.get(operationName);
        return tokens != null && tokens.contains(tokenName);
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
     * @param c2jServiceName The C2J service name
     * @return "Response" for EC2 protocol, "SdkResult" if naming conflict exists, otherwise "Result"
     */
    public static String getResultSuffix(Model model, OperationShape operation, String c2jServiceName) {
        // EC2 protocol services rename all Result shapes to Response
        if ("ec2".equals(c2jServiceName)) {
            return "Response";
        }
        
        // C2J backward compatibility: preserve SdkResult for operations that had collisions in legacy models
        Set<String> legacyOps = LEGACY_SDK_RESULT_OPERATIONS.get(c2jServiceName);
        if (legacyOps != null && legacyOps.contains(operation.getId().getName())) {
            return "SdkResult";
        }
        
        String baseName = operation.getId().getName();
        Set<String> allShapeNames = getAllShapeNames(model);
        
        // Output shape name (used for legacy early-accept behavior)
        String outputShapeName = operation.getOutput().isPresent()
                ? operation.getOutputShape().getName()
                : null;
        
        // For closer parity with the legacy Get/Set collision rule
        Set<String> outputMemberNames = getOutputMemberNames(model, operation);
        
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
            if (hasGetSetCollision(candidate, allShapeNames, outputMemberNames)) {
                continue;
            }
            
            return suffix;
        }
        
        // Legacy would throw if no suffix is available; returning CppSdkResult silently can hide bugs
        throw new IllegalStateException("Unhandled result shape name conflict for operation: " + baseName);
    }
    
    private static Set<String> getAllShapeNames(Model model) {
        Set<String> names = new HashSet<>();
        model.shapes().forEach(s -> names.add(s.getId().getName()));
        return names;
    }
    
    private static Set<String> getOutputMemberNames(Model model, OperationShape op) {
        // If no output or not a structure, return empty
        if (!op.getOutput().isPresent()) {
            return Collections.emptySet();
        }
        ShapeId outputId = op.getOutputShape();
        Shape output = model.expectShape(outputId);
        if (!output.isStructureShape()) {
            return Collections.emptySet();
        }
        StructureShape struct = output.asStructureShape().get();
        return new HashSet<>(struct.getAllMembers().keySet());
    }
    
    private static boolean hasGetSetCollision(String candidate,
                                             Set<String> allShapeNames,
                                             Set<String> outputMemberNames) {
        if (outputMemberNames.isEmpty()) {
            return false;
        }
        
        // Legacy logic: only treat GetX/SetX as conflict if X is both a known shape name and a member name
        for (String shapeName : allShapeNames) {
            if (!outputMemberNames.contains(shapeName)) {
                continue;
            }
            if (candidate.equals("Get" + shapeName) || candidate.equals("Set" + shapeName)) {
                return true;
            }
        }
        return false;
    }
}