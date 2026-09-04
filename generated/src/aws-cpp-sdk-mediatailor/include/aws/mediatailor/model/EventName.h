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
enum class EventName { NOT_SET, PRE_SESSION_INITIALIZATION, PRE_ADS_REQUEST, POST_ADS_RESPONSE, PRE_MANIFEST_INSERTION };

namespace EventNameMapper {
AWS_MEDIATAILOR_API EventName GetEventNameForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForEventName(EventName value);
}  // namespace EventNameMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
