/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import java.util.HashSet;
import java.util.Set;

public class ShapeUtil {
    
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
        
        String opName = operation.getId().getName();
        
        // Get the operation's output shape to exclude from collision check
        ShapeId outputShapeId = operation.getOutputShape();
        
        // Try Result first, then SdkResult if collision
        String[] suffixes = {"Result", "SdkResult", "CppSdkResult"};
        
        for (String suffix : suffixes) {
            String candidateName = opName + suffix;
            if (!hasNamingConflict(model, candidateName, outputShapeId)) {
                return suffix;
            }
        }
        
        // Fallback to CppSdkResult if all else fails
        return "CppSdkResult";
    }
    
    /**
     * Checks if a candidate name conflicts with existing shapes.
     * Implements C2J collision detection: direct name match OR Get/Set accessor conflict.
     * Excludes the operation's own output shape from collision check.
     */
    private static boolean hasNamingConflict(Model model, String candidateName, ShapeId excludeShapeId) {
        Set<Shape> allShapes = model.toSet();
        
        return allShapes.stream()
            .anyMatch(shape -> {
                String shapeName = shape.getId().getName();
                
                // Skip the operation's own output shape by comparing names
                if (excludeShapeId != null && shapeName.equals(excludeShapeId.getName())) {
                    return false;
                }
                
                // Direct collision: candidateName equals existing shapeName
                if (candidateName.equals(shapeName)) {
                    return true;
                }
                
                // Get/Set accessor collision: candidateName equals "Get" + shapeName or "Set" + shapeName
                if (candidateName.equals("Get" + shapeName) || candidateName.equals("Set" + shapeName)) {
                    return true;
                }
                
                return false;
            });
    }
}