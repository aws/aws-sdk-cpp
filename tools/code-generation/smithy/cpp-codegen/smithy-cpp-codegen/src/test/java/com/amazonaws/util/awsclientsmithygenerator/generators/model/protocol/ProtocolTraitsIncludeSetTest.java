/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

class ProtocolTraitsIncludeSetTest {

    @Test
    void json_resultSource_includesMatchOldResultHook() {
        ProtocolTraits json = new JsonProtocolTraits(Protocol.JSON);
        List<String> inc = json.serdeIncludes(FileKind.RESULT_SOURCE);
        assertTrue(inc.contains("aws/core/utils/json/JsonSerializer.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/UnreferencedParam.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/memory/stl/AWSStringStream.h"), inc.toString());
    }

    @Test
    void queryXml_requestSource_usesStringStreamNotXmlSerializer() {
        ProtocolTraits q = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
        List<String> inc = q.serdeIncludes(FileKind.REQUEST_SOURCE);
        assertTrue(inc.contains("aws/core/utils/StringUtils.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/memory/stl/AWSStringStream.h"), inc.toString());
    }

    @Test
    void queryXml_resultSource_usingsIncludeLogging() {
        ProtocolTraits q = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
        List<String> usings = q.serdeUsings(FileKind.RESULT_SOURCE);
        assertEquals(List.of("Aws::Utils::Xml", "Aws::Utils::Logging", "Aws::Utils"), usings);
    }

    @Test
    void queryXml_subobjectHeader_hasStreamFwd() {
        ProtocolTraits q = new QueryXmlProtocolTraits(Protocol.QUERY_XML);
        assertTrue(q.serdeIncludes(FileKind.SUBOBJECT_HEADER)
            .contains("aws/core/utils/memory/stl/AWSStreamFwd.h"),
            q.serdeIncludes(FileKind.SUBOBJECT_HEADER).toString());
    }

    @Test
    void requestSource_everyProtocolIncludesNumericForListHeaderAccumulate() {
        // RequestHeaderSerializer emits std::accumulate for list-typed @httpHeader members and is
        // protocol-agnostic, so every protocol's REQUEST_SOURCE must declare <numeric>. Guards the
        // JSON/QueryXml regression where only RestXml carried it (relying on transitive includes).
        for (ProtocolTraits t : List.of(
                new JsonProtocolTraits(Protocol.JSON),
                new JsonProtocolTraits(Protocol.REST_JSON),
                new QueryXmlProtocolTraits(Protocol.QUERY_XML),
                new QueryXmlProtocolTraits(Protocol.EC2),
                new RestXmlProtocolTraits())) {
            List<String> inc = t.serdeIncludes(FileKind.REQUEST_SOURCE);
            assertTrue(inc.contains("numeric"), t.protocol() + " REQUEST_SOURCE: " + inc);
        }
    }

    @Test
    void restXml_requestSource_hasUtilityAndXmlSerializer() {
        ProtocolTraits x = new RestXmlProtocolTraits();
        List<String> inc = x.serdeIncludes(FileKind.REQUEST_SOURCE);
        assertTrue(inc.contains("aws/core/utils/xml/XmlSerializer.h"), inc.toString());
        assertTrue(inc.contains("utility"), inc.toString());
    }

    @Test
    void cbor_resultSource_hasCborAndUnreferencedAndStringStream() {
        ProtocolTraits c = new CborProtocolTraits();
        List<String> inc = c.serdeIncludes(FileKind.RESULT_SOURCE);
        assertTrue(inc.contains("aws/crt/cbor/Cbor.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/cbor/CborValue.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/UnreferencedParam.h"), inc.toString());
        assertTrue(inc.contains("aws/core/utils/memory/stl/AWSStringStream.h"), inc.toString());
    }

    @Test
    void eventHandler_usings_isSerdeNamespaceOnly() {
        assertEquals(List.of("Aws::Utils::Json"),
            new JsonProtocolTraits(Protocol.JSON).serdeUsings(FileKind.EVENT_HANDLER_SOURCE));
        assertEquals(List.of("Aws::Utils::Cbor"),
            new CborProtocolTraits().serdeUsings(FileKind.EVENT_HANDLER_SOURCE));
    }

    @Test
    void initialResponseSource_hasExpectedSerdeIncludes() {
        List<String> json = new JsonProtocolTraits(Protocol.JSON).serdeIncludes(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(json.contains("aws/core/utils/json/JsonSerializer.h"), json.toString());
        assertTrue(json.contains("aws/core/utils/UnreferencedParam.h"), json.toString());

        List<String> cbor = new CborProtocolTraits().serdeIncludes(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(cbor.contains("aws/crt/cbor/Cbor.h"), cbor.toString());
        assertTrue(cbor.contains("aws/core/utils/cbor/CborValue.h"), cbor.toString());
        assertTrue(cbor.contains("aws/core/utils/UnreferencedParam.h"), cbor.toString());
    }

    @Test
    void xmlInitialResponseSource_hasExpectedIncludesAndUsingsExcludeLogging() {
        List<String> restXml = new RestXmlProtocolTraits().serdeIncludes(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(restXml.contains("aws/core/utils/xml/XmlSerializer.h"), restXml.toString());
        assertTrue(restXml.contains("aws/core/utils/UnreferencedParam.h"), restXml.toString());

        List<String> queryXml =
            new QueryXmlProtocolTraits(Protocol.QUERY_XML).serdeIncludes(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(queryXml.contains("aws/core/utils/UnreferencedParam.h"), queryXml.toString());

        // Usings are held exact: the initial-response source must not open the Logging namespace.
        List<String> restXmlUsings = new RestXmlProtocolTraits().serdeUsings(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(restXmlUsings.stream().noneMatch(s -> s.equals("Aws::Utils::Logging")), restXmlUsings.toString());

        List<String> queryXmlUsings =
            new QueryXmlProtocolTraits(Protocol.QUERY_XML).serdeUsings(FileKind.INITIAL_RESPONSE_SOURCE);
        assertTrue(queryXmlUsings.stream().noneMatch(s -> s.equals("Aws::Utils::Logging")), queryXmlUsings.toString());
    }

    @Test
    void streamingResult_serdeIncludes_returnsSourceUnion() {
        // STREAMING_RESULT_SOURCE is a source kind, so it now returns the per-protocol source union.
        List<String> inc = new RestXmlProtocolTraits().serdeIncludes(FileKind.STREAMING_RESULT_SOURCE);
        assertTrue(inc.contains("aws/core/utils/xml/XmlSerializer.h"), inc.toString());
    }

    @Test
    void subObjectHeader_hasNoSerializerInclude() {
        List<String> json = new JsonProtocolTraits(Protocol.JSON).serdeIncludes(FileKind.SUBOBJECT_HEADER);
        assertTrue(json.isEmpty(), json.toString());
        assertTrue(json.stream().noneMatch(s -> s.equals("aws/core/utils/json/JsonSerializer.h")), json.toString());

        List<String> restXml = new RestXmlProtocolTraits().serdeIncludes(FileKind.SUBOBJECT_HEADER);
        assertTrue(restXml.stream().noneMatch(s -> s.equals("aws/core/utils/xml/XmlSerializer.h")), restXml.toString());

        // CBOR is the exception: its sub-object header signatures reference Aws::Crt::Cbor::CborDecoder
        // / CborEncoder directly, so CborSubObjectHeader.vm hard-includes <aws/crt/cbor/Cbor.h>.
        List<String> cbor = new CborProtocolTraits().serdeIncludes(FileKind.SUBOBJECT_HEADER);
        assertTrue(cbor.contains("aws/crt/cbor/Cbor.h"), cbor.toString());

        List<String> queryXml =
            new QueryXmlProtocolTraits(Protocol.QUERY_XML).serdeIncludes(FileKind.SUBOBJECT_HEADER);
        assertTrue(queryXml.contains("aws/core/utils/memory/stl/AWSStreamFwd.h"), queryXml.toString());
    }

    @Test
    void resultHeader_onlyCborHardIncludesCborHeader() {
        // CborResultHeader.vm hard-includes <aws/crt/cbor/Cbor.h>; JSON/XML/Query result headers
        // forward-declare their payload type and add no serde include.
        assertTrue(new CborProtocolTraits().serdeIncludes(FileKind.RESULT_HEADER)
            .contains("aws/crt/cbor/Cbor.h"),
            new CborProtocolTraits().serdeIncludes(FileKind.RESULT_HEADER).toString());
        assertTrue(new JsonProtocolTraits(Protocol.JSON).serdeIncludes(FileKind.RESULT_HEADER).isEmpty());
        assertTrue(new RestXmlProtocolTraits().serdeIncludes(FileKind.RESULT_HEADER).isEmpty());
        assertTrue(new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .serdeIncludes(FileKind.RESULT_HEADER).isEmpty());
    }

    @Test
    void serdeSwitches_throwOnUnhandledFileKind() {
        // FileKinds never passed to serdeUsings must fail fast rather than default silently.
        assertThrows(UnsupportedOperationException.class,
            () -> new JsonProtocolTraits(Protocol.JSON).serdeUsings(FileKind.SUBOBJECT_HEADER));
        assertThrows(UnsupportedOperationException.class,
            () -> new JsonProtocolTraits(Protocol.JSON).serdeUsings(FileKind.STREAMING_RESULT_SOURCE));
        assertThrows(UnsupportedOperationException.class,
            () -> new RestXmlProtocolTraits().serdeUsings(FileKind.SUBOBJECT_HEADER));
        assertThrows(UnsupportedOperationException.class,
            () -> new CborProtocolTraits().serdeUsings(FileKind.STREAMING_RESULT_SOURCE));
        assertThrows(UnsupportedOperationException.class,
            () -> new QueryXmlProtocolTraits(Protocol.QUERY_XML).serdeUsings(FileKind.SUBOBJECT_HEADER));
    }
}
