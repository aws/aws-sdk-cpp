package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;

import java.util.HashMap;
import java.util.Map;

public class CppCborViewHelper extends CppViewHelper {
    private static final Map<String, String> CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING = new HashMap<>();

    static {
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("long", "long long");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("integer", "int64_t");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("string", "Aws::String");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("timestamp", "Aws::Utils::DateTime");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("boolean", "bool");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_boolean", "bool");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("double", "double");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("float", "double");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("blob", "Aws::Utils::ByteBuffer");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_blob", "Aws::Utils::CryptoBuffer");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_long", "long long");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_integer", "int64_t");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_float", "double");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_double", "double");
        CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING.put("sensitive_timestamp", "Aws::Utils::DateTime");
    }

    public static String computeCppType(Shape shape) {
        return computeCppTypeInternal(shape, CORAL_TYPE_TO_CBOR_CPP_TYPE_MAPPING);
    }

    public static String computeCppType(Shape parent, String member) {
        if (!parent.getMembers().containsKey(member)) {
            throw new RuntimeException("Parent shape " + parent.getName() +
                    " does not contain member key " + member);
        }
        ShapeMember shapeMember = parent.getMembers().get(member);
        Shape childShape = shapeMember.getShape();

        if (parent.getPayload() != null && parent.getPayload().equals(member) && parent.isResult()) {
            if (shapeMember.isStreaming() || childShape.isBlob() || childShape.isString()) {
                return "Aws::Utils::Stream::ResponseStream";
            }
        }
        return computeCppType(childShape);
    }
}
