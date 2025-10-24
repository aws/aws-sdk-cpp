﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class HlsDefault { NOT_SET, NO, OMIT, YES };

namespace HlsDefaultMapper {
AWS_MEDIALIVE_API HlsDefault GetHlsDefaultForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsDefault(HlsDefault value);
}  // namespace HlsDefaultMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
