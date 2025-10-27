/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class CmafTimedMetadataPassthrough { NOT_SET, DISABLED, ENABLED };

namespace CmafTimedMetadataPassthroughMapper {
AWS_MEDIALIVE_API CmafTimedMetadataPassthrough GetCmafTimedMetadataPassthroughForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafTimedMetadataPassthrough(CmafTimedMetadataPassthrough value);
}  // namespace CmafTimedMetadataPassthroughMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
