/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/ManifestServicePublishOptInEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace ManifestServicePublishOptInEventTypeMapper {

static const int PRE_SESSION_INIT_HOOK_SUMMARY_HASH = HashingUtils::HashString("PRE_SESSION_INIT_HOOK_SUMMARY");
static const int PRE_SESSION_INIT_FUNCTION_COMPLETED_HASH = HashingUtils::HashString("PRE_SESSION_INIT_FUNCTION_COMPLETED");
static const int POST_ORIGIN_RESPONSE_HOOK_SUMMARY_HASH = HashingUtils::HashString("POST_ORIGIN_RESPONSE_HOOK_SUMMARY");
static const int POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED_HASH = HashingUtils::HashString("POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED");

ManifestServicePublishOptInEventType GetManifestServicePublishOptInEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_SESSION_INIT_HOOK_SUMMARY_HASH) {
    return ManifestServicePublishOptInEventType::PRE_SESSION_INIT_HOOK_SUMMARY;
  } else if (hashCode == PRE_SESSION_INIT_FUNCTION_COMPLETED_HASH) {
    return ManifestServicePublishOptInEventType::PRE_SESSION_INIT_FUNCTION_COMPLETED;
  } else if (hashCode == POST_ORIGIN_RESPONSE_HOOK_SUMMARY_HASH) {
    return ManifestServicePublishOptInEventType::POST_ORIGIN_RESPONSE_HOOK_SUMMARY;
  } else if (hashCode == POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED_HASH) {
    return ManifestServicePublishOptInEventType::POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManifestServicePublishOptInEventType>(hashCode);
  }

  return ManifestServicePublishOptInEventType::NOT_SET;
}

Aws::String GetNameForManifestServicePublishOptInEventType(ManifestServicePublishOptInEventType enumValue) {
  switch (enumValue) {
    case ManifestServicePublishOptInEventType::NOT_SET:
      return {};
    case ManifestServicePublishOptInEventType::PRE_SESSION_INIT_HOOK_SUMMARY:
      return "PRE_SESSION_INIT_HOOK_SUMMARY";
    case ManifestServicePublishOptInEventType::PRE_SESSION_INIT_FUNCTION_COMPLETED:
      return "PRE_SESSION_INIT_FUNCTION_COMPLETED";
    case ManifestServicePublishOptInEventType::POST_ORIGIN_RESPONSE_HOOK_SUMMARY:
      return "POST_ORIGIN_RESPONSE_HOOK_SUMMARY";
    case ManifestServicePublishOptInEventType::POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED:
      return "POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManifestServicePublishOptInEventTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
