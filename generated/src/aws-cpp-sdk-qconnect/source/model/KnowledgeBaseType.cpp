﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/KnowledgeBaseType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace KnowledgeBaseTypeMapper {

static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int QUICK_RESPONSES_HASH = HashingUtils::HashString("QUICK_RESPONSES");
static const int MESSAGE_TEMPLATES_HASH = HashingUtils::HashString("MESSAGE_TEMPLATES");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXTERNAL_HASH) {
    return KnowledgeBaseType::EXTERNAL;
  } else if (hashCode == CUSTOM_HASH) {
    return KnowledgeBaseType::CUSTOM;
  } else if (hashCode == QUICK_RESPONSES_HASH) {
    return KnowledgeBaseType::QUICK_RESPONSES;
  } else if (hashCode == MESSAGE_TEMPLATES_HASH) {
    return KnowledgeBaseType::MESSAGE_TEMPLATES;
  } else if (hashCode == MANAGED_HASH) {
    return KnowledgeBaseType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KnowledgeBaseType>(hashCode);
  }

  return KnowledgeBaseType::NOT_SET;
}

Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType enumValue) {
  switch (enumValue) {
    case KnowledgeBaseType::NOT_SET:
      return {};
    case KnowledgeBaseType::EXTERNAL:
      return "EXTERNAL";
    case KnowledgeBaseType::CUSTOM:
      return "CUSTOM";
    case KnowledgeBaseType::QUICK_RESPONSES:
      return "QUICK_RESPONSES";
    case KnowledgeBaseType::MESSAGE_TEMPLATES:
      return "MESSAGE_TEMPLATES";
    case KnowledgeBaseType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KnowledgeBaseTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
