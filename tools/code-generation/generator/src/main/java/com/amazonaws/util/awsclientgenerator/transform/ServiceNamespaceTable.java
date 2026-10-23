/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.reflect.Type;
import java.nio.charset.StandardCharsets;
import java.util.Collections;
import java.util.Map;

/**
 * Static, checked-in table that preserves the C++ SDK service namespaces that diverge from the
 * namespace derived from the service's {@code "serviceId"} (so previously released names stay
 * stable).
 *
 * <p>The table is keyed by the exact, untransformed {@code "serviceId"} and is loaded from the
 * shared data file {@code service-namespace-table.json}, which is the single source of truth
 * shared with the Smithy generator. Identifiers are derived from {@code "serviceId"} only, never
 * from the display-name fields ({@code serviceAbbreviation}/{@code serviceFullName}), the endpoint
 * prefix, or the model file name; the values here are frozen literals, not computed from model
 * metadata at generation time.
 */
public final class ServiceNamespaceTable {

    private static final String RESOURCE = "/service-namespace-table.json";
    private static final Map<String, String> TABLE = load();

    private ServiceNamespaceTable() {
    }

    private static Map<String, String> load() {
        try (InputStream in = ServiceNamespaceTable.class.getResourceAsStream(RESOURCE)) {
            if (in == null) {
                throw new IllegalStateException("Missing classpath resource " + RESOURCE);
            }
            Type mapType = new TypeToken<Map<String, String>>() {
            }.getType();
            Map<String, String> parsed = new Gson().fromJson(
                    new InputStreamReader(in, StandardCharsets.UTF_8), mapType);
            if (parsed == null) {
                throw new IllegalStateException("Empty or invalid " + RESOURCE);
            }
            return Collections.unmodifiableMap(parsed);
        } catch (Exception e) {
            throw new IllegalStateException("Failed to load " + RESOURCE, e);
        }
    }

    /**
     * @return the frozen namespace preserved for this serviceId, or {@code null} if the service
     * is not in the table (in which case the caller derives the namespace from the serviceId).
     */
    public static String getNamespace(String serviceId) {
        return TABLE.get(serviceId);
    }

    /**
     * @return {@code true} if the given namespace is already reserved by a preserved (tabled)
     * service. Used to fail generation when a serviceId-derived name would collide with one.
     */
    public static boolean isReservedNamespace(String namespace) {
        return TABLE.containsValue(namespace);
    }
}
