/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ReferenceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ReferenceTypeMapper {

static const int WEB_CRAWLER_HASH = HashingUtils::HashString("WEB_CRAWLER");
static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
static const int BEDROCK_KB_S3_HASH = HashingUtils::HashString("BEDROCK_KB_S3");
static const int BEDROCK_KB_WEB_HASH = HashingUtils::HashString("BEDROCK_KB_WEB");
static const int BEDROCK_KB_CONFLUENCE_HASH = HashingUtils::HashString("BEDROCK_KB_CONFLUENCE");
static const int BEDROCK_KB_SALESFORCE_HASH = HashingUtils::HashString("BEDROCK_KB_SALESFORCE");
static const int BEDROCK_KB_SHAREPOINT_HASH = HashingUtils::HashString("BEDROCK_KB_SHAREPOINT");
static const int BEDROCK_KB_KENDRA_HASH = HashingUtils::HashString("BEDROCK_KB_KENDRA");
static const int BEDROCK_KB_CUSTOM_DOCUMENT_HASH = HashingUtils::HashString("BEDROCK_KB_CUSTOM_DOCUMENT");
static const int BEDROCK_KB_SQL_HASH = HashingUtils::HashString("BEDROCK_KB_SQL");

ReferenceType GetReferenceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WEB_CRAWLER_HASH) {
    return ReferenceType::WEB_CRAWLER;
  } else if (hashCode == KNOWLEDGE_BASE_HASH) {
    return ReferenceType::KNOWLEDGE_BASE;
  } else if (hashCode == BEDROCK_KB_S3_HASH) {
    return ReferenceType::BEDROCK_KB_S3;
  } else if (hashCode == BEDROCK_KB_WEB_HASH) {
    return ReferenceType::BEDROCK_KB_WEB;
  } else if (hashCode == BEDROCK_KB_CONFLUENCE_HASH) {
    return ReferenceType::BEDROCK_KB_CONFLUENCE;
  } else if (hashCode == BEDROCK_KB_SALESFORCE_HASH) {
    return ReferenceType::BEDROCK_KB_SALESFORCE;
  } else if (hashCode == BEDROCK_KB_SHAREPOINT_HASH) {
    return ReferenceType::BEDROCK_KB_SHAREPOINT;
  } else if (hashCode == BEDROCK_KB_KENDRA_HASH) {
    return ReferenceType::BEDROCK_KB_KENDRA;
  } else if (hashCode == BEDROCK_KB_CUSTOM_DOCUMENT_HASH) {
    return ReferenceType::BEDROCK_KB_CUSTOM_DOCUMENT;
  } else if (hashCode == BEDROCK_KB_SQL_HASH) {
    return ReferenceType::BEDROCK_KB_SQL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReferenceType>(hashCode);
  }

  return ReferenceType::NOT_SET;
}

Aws::String GetNameForReferenceType(ReferenceType enumValue) {
  switch (enumValue) {
    case ReferenceType::NOT_SET:
      return {};
    case ReferenceType::WEB_CRAWLER:
      return "WEB_CRAWLER";
    case ReferenceType::KNOWLEDGE_BASE:
      return "KNOWLEDGE_BASE";
    case ReferenceType::BEDROCK_KB_S3:
      return "BEDROCK_KB_S3";
    case ReferenceType::BEDROCK_KB_WEB:
      return "BEDROCK_KB_WEB";
    case ReferenceType::BEDROCK_KB_CONFLUENCE:
      return "BEDROCK_KB_CONFLUENCE";
    case ReferenceType::BEDROCK_KB_SALESFORCE:
      return "BEDROCK_KB_SALESFORCE";
    case ReferenceType::BEDROCK_KB_SHAREPOINT:
      return "BEDROCK_KB_SHAREPOINT";
    case ReferenceType::BEDROCK_KB_KENDRA:
      return "BEDROCK_KB_KENDRA";
    case ReferenceType::BEDROCK_KB_CUSTOM_DOCUMENT:
      return "BEDROCK_KB_CUSTOM_DOCUMENT";
    case ReferenceType::BEDROCK_KB_SQL:
      return "BEDROCK_KB_SQL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReferenceTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
