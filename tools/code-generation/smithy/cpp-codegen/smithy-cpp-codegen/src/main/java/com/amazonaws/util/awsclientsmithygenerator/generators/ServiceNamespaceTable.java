/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.node.StringNode;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/**
 * Static, checked-in table preserving the C++ SDK service namespaces released before Revision 2
 * of the Service ID SEP (seps/accepted/shared/service-id.md) that diverge from the namespace
 * derived from the service's codegen id ("serviceId" == Smithy sdkId).
 *
 * <p>This loads the SAME shared data file as the C2J generator
 * ({@code tools/code-generation/shared/service-namespace-table.json}), the single source of truth.
 * The file is keyed by the exact, untransformed serviceId per the SEP. Because the Smithy
 * generator queries with a sanitized, lower-cased serviceId, this class builds a lookup index
 * keyed by {@code sanitizeServiceAbbreviation(serviceId).toLowerCase()} (the same normalization
 * {@link ServiceNameUtil#getServiceName} applies). The stored values are frozen literals, never
 * derived from a docgen id, endpoint prefix, or model file name.
 */
public final class ServiceNamespaceTable {

    private static final String RESOURCE = "/service-namespace-table.json";
    private static final Map<String, String> BY_NORMALIZED_KEY = load();

    private ServiceNamespaceTable() {
    }

    private static Map<String, String> load() {
        try (InputStream in = ServiceNamespaceTable.class.getResourceAsStream(RESOURCE)) {
            if (in == null) {
                throw new IllegalStateException("Missing classpath resource " + RESOURCE);
            }
            String json = new String(in.readAllBytes(), StandardCharsets.UTF_8);
            ObjectNode obj = Node.parse(json).expectObjectNode();
            Map<String, String> map = new HashMap<>();
            for (Map.Entry<StringNode, Node> entry : obj.getMembers().entrySet()) {
                String serviceId = entry.getKey().getValue();
                String namespace = entry.getValue().expectStringNode().getValue();
                String key = normalize(serviceId);
                String prev = map.put(key, namespace);
                if (prev != null && !prev.equals(namespace)) {
                    throw new IllegalStateException(String.format(
                            "Normalized serviceId collision '%s' in %s: '%s' vs '%s'",
                            key, RESOURCE, prev, namespace));
                }
            }
            return Collections.unmodifiableMap(map);
        } catch (IOException e) {
            throw new IllegalStateException("Failed to load " + RESOURCE, e);
        }
    }

    /** Normalize a serviceId to the lookup key the Smithy generator queries with. */
    static String normalize(String serviceId) {
        return ServiceNameUtil.sanitizeServiceAbbreviation(serviceId).toLowerCase();
    }

    /**
     * @param normalizedKey {@code sanitizeServiceAbbreviation(serviceId).toLowerCase()}
     * @return the frozen namespace preserved for this serviceId, or {@code null} if not tabled.
     */
    public static String getByNormalizedKey(String normalizedKey) {
        return BY_NORMALIZED_KEY.get(normalizedKey);
    }

    /**
     * @return {@code true} if the namespace is already reserved by a preserved (tabled) service.
     * Used to fail generation if a serviceId-derived name would collide with a preserved one.
     */
    public static boolean isReservedNamespace(String namespace) {
        return BY_NORMALIZED_KEY.containsValue(namespace);
    }
}
