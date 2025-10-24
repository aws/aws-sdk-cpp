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
enum class TtmlDestinationStyleControl { NOT_SET, PASSTHROUGH, USE_CONFIGURED };

namespace TtmlDestinationStyleControlMapper {
AWS_MEDIALIVE_API TtmlDestinationStyleControl GetTtmlDestinationStyleControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTtmlDestinationStyleControl(TtmlDestinationStyleControl value);
}  // namespace TtmlDestinationStyleControlMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
