/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class Hdr10PlusPresence { NOT_SET, PRESENT };

namespace Hdr10PlusPresenceMapper {
AWS_MEDIACONVERT_API Hdr10PlusPresence GetHdr10PlusPresenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHdr10PlusPresence(Hdr10PlusPresence value);
}  // namespace Hdr10PlusPresenceMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
