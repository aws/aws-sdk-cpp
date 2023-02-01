/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.HashSet;
import java.util.Optional;
import java.util.stream.Collectors;

@Data
public class Shape {
    private String name;
    private String type;
    private List<String> enumValues;
    private HashSet<String> referencedBy;
    private Map<String, ShapeMember> members;
    private ShapeMember listMember;
    private ShapeMember mapKey;
    private ShapeMember mapValue;
    private ShapeMember customizedQuery;
    private String max;
    private String min;
    private String documentation;
    private String locationName;
    private String payload;
    private XmlNamespace xmlNamespace;
    private boolean isRequest;
    private boolean isResult;
    private boolean isReferenced;
    private boolean flattened;
    private boolean computeContentMd5;
    private boolean supportsPresigning;
    private boolean signBody;
    private String signerName;
    private String timestampFormat;
    private boolean eventStream;
    private boolean event;
    private String eventPayloadMemberName;
    private String eventPayloadType;
    private boolean isOutgoingEventStream;
    private boolean exception;
    private boolean sensitive;
    private boolean hasPreSignedUrl;
    private boolean document;
    private boolean hasEmbeddedErrors = false;

    public boolean isMap() {
        return "map".equals(type.toLowerCase());
    }

    public boolean isList() {
        return "list".equals(type.toLowerCase());
    }

    public boolean isStructure() {
        return "structure".equals(type.toLowerCase());
    }

    public boolean isDouble() { return "double".equals(type.toLowerCase()); }

    public boolean isString() {
        return "string".equals(type.toLowerCase()) && !isEnum();
    }

    public boolean isTimeStamp() {
        return "timestamp".equals(type.toLowerCase()) || "sensitive_timestamp".equals(type.toLowerCase());
    }

    public boolean isEnum() {
        return enumValues != null && enumValues.size() > 0;
    }

    public boolean isBlob() {
        return "blob".equals(type.toLowerCase());
    }

    public boolean isBoolean() {
        return "boolean".equals(type.toLowerCase());
    }

    public boolean isDocument() {
        return "structure".equals(type.toLowerCase()) && document;
    }

    public boolean hasEmbeddedErrors() {
        return this.hasEmbeddedErrors;
    }

    public void setEmbeddedErrors(boolean hasEmbeddedErrors) {
        this.hasEmbeddedErrors = hasEmbeddedErrors;
    }

    public boolean isPrimitive() {
        return !isMap() && !isList() && !isStructure() && !isString() && !isEnum() && !isBlob() && !isTimeStamp();
    }

    public boolean isXmlModeledException() {
        if (!exception) return false;
        return members.keySet().parallelStream().anyMatch(key -> !key.equals("Message") && !key.equals("message") && !key.equals("Code") && !key.equals("code"));
    }

    public boolean isJsonModeledException() {
        if (!exception) return false;
        return members.keySet().parallelStream().anyMatch(key -> !key.equals("Message") && !key.equals("message"));
    }

    public boolean isMemberRequired(String member) {
        ShapeMember shapeMember = members.get(member);
        return shapeMember != null && members.get(member).isRequired();
    }

    public boolean hasHeaderMembers() {
      if (members == null) return false;
      return members.values().parallelStream().anyMatch(member -> member.isUsedForHeader());
    }

    public boolean hasStatusCodeMembers() {
      if (members == null) return false;
      return members.values().parallelStream().anyMatch(member -> member.isUsedForHttpStatusCode());
    }

    public boolean hasStreamMembers() {
      if (members == null) return false;
      return members.values().parallelStream()
              .anyMatch(member -> member.isStreaming()) || (payload != null && members.get(payload) != null && !members.get(payload).getShape().isStructure() && !members.get(payload).getShape().isList());
    }

    public boolean hasPayloadMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> !member.isUsedForHttpStatusCode() && !member.isUsedForHeader()
               && !member.isStreaming() && !member.isUsedForUri() && !member.isUsedForQueryString());
    }

    public boolean hasQueryStringMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getLocation() != null && member.getLocation().equalsIgnoreCase("querystring"));
    }

    public boolean hasBlobMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().isBlob());
    }

    public boolean hasEventStreamMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().isEventStream());
    }

    public boolean hasEventPayloadMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.isEventPayload());
    }

    public boolean hasMember(String member) {
        return members.keySet().stream().anyMatch(key -> key.equals(member));
    }

    public ShapeMember getMemberByLocationName(String locationName) {
        Optional<ShapeMember> found =
                members.values().parallelStream().filter(member -> member.getLocationName() != null && locationName.equals(member.getLocationName())).findFirst();

        if(found.isPresent()) {
            return found.get();
        }

        return null;

    }

    public String getMemberNameByLocationName(String locationName) {
        Optional<Map.Entry<String, ShapeMember>> found =
                members.entrySet().parallelStream().filter(member ->
                        locationName.equals(member.getValue().getLocationName())).findFirst();

        if(found.isPresent()) {
            return found.get().getKey();
        }

        return null;
    }

    public Map<String, ShapeMember> getQueryStringMembers() {
        Map<String, ShapeMember> queryStringMembers = new LinkedHashMap<>();
        for(Map.Entry<String, ShapeMember> entry : members.entrySet()) {
            if(entry.getValue().getLocation() != null && entry.getValue().getLocation().equalsIgnoreCase("querystring")){
               queryStringMembers.put(entry.getKey(), entry.getValue());
            }
        }

        return queryStringMembers;
    }

    public void RemoveMember(String memberName) {
        members.remove(memberName);
    }

    @Override
    public String toString() {
      if(name != null && type != null) {
        return String.format("Shape: Name %s Type %s, flattened %b", name, type, flattened);
      }

      return "null";
    }

    // Some shapes are mutually referenced with each other, e.g. Statement and NotStatement in wafv2.
    public boolean isMutuallyReferencedWith(Shape otherShape) {
        if (otherShape == null || otherShape.members == null || members == null || !isStructure() || !otherShape.isStructure() || name.equals(otherShape.getName())) return false;

        // Get this and other member type names, if member is a list then get underlying type in this list
        Set<String> thisMemberShapeNames = members.values().parallelStream()
                .map(value -> value.getShape())
                .map(memberShape -> memberShape.isList() ? memberShape.getListMember().getShape() : memberShape) //if references through a list container
                .map(memberShape -> memberShape.getName())
                .collect(Collectors.toSet());
        Set<String> otherMemberShapeNames = otherShape.getMembers().values().parallelStream()
                .map(value -> value.getShape())
                .map(memberShape -> memberShape.isList() ? memberShape.getListMember().getShape() : memberShape)
                .map(memberShape -> memberShape.getName())
                .collect(Collectors.toSet());

        return thisMemberShapeNames.contains(otherShape.getName()) && otherMemberShapeNames.contains(this.getName());
    }

    public boolean hasContextParam() {
        if(listMember != null && listMember.getContextParam() != null) {
            return true;
        }
        if(mapKey != null && mapKey.getContextParam() != null) {
            return true;
        }
        if(mapValue != null && mapValue.getContextParam() != null) {
            return true;
        }
        if(customizedQuery != null && customizedQuery.getContextParam() != null) {
            return true;
        }
        for(Map.Entry<String, ShapeMember> entry : members.entrySet()) {
            if(entry.getValue().getContextParam() != null){
                return true;
            }
        }

        return false;
    }
}
