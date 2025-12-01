/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class ReferenceType {
  NOT_SET,
  WEB_CRAWLER,
  KNOWLEDGE_BASE,
  BEDROCK_KB_S3,
  BEDROCK_KB_WEB,
  BEDROCK_KB_CONFLUENCE,
  BEDROCK_KB_SALESFORCE,
  BEDROCK_KB_SHAREPOINT,
  BEDROCK_KB_KENDRA,
  BEDROCK_KB_CUSTOM_DOCUMENT,
  BEDROCK_KB_SQL
};

namespace ReferenceTypeMapper {
AWS_QCONNECT_API ReferenceType GetReferenceTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForReferenceType(ReferenceType value);
}  // namespace ReferenceTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
