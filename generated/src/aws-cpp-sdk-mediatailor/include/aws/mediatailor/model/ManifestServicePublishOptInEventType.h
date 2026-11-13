/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class ManifestServicePublishOptInEventType {
  NOT_SET,
  PRE_SESSION_INIT_HOOK_SUMMARY,
  PRE_SESSION_INIT_FUNCTION_COMPLETED,
  POST_ORIGIN_RESPONSE_HOOK_SUMMARY,
  POST_ORIGIN_RESPONSE_FUNCTION_COMPLETED
};

namespace ManifestServicePublishOptInEventTypeMapper {
AWS_MEDIATAILOR_API ManifestServicePublishOptInEventType GetManifestServicePublishOptInEventTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForManifestServicePublishOptInEventType(ManifestServicePublishOptInEventType value);
}  // namespace ManifestServicePublishOptInEventTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
