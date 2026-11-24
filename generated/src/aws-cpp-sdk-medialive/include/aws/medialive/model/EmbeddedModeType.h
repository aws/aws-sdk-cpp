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
enum class EmbeddedModeType { NOT_SET, EMBEDDED_608_AND_708, EMBEDDED_608_ONLY, EMBEDDED_708_ONLY };

namespace EmbeddedModeTypeMapper {
AWS_MEDIALIVE_API EmbeddedModeType GetEmbeddedModeTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEmbeddedModeType(EmbeddedModeType value);
}  // namespace EmbeddedModeTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
