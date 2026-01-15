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
}