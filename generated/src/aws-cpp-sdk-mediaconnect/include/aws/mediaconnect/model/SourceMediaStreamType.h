/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class SourceMediaStreamType { NOT_SET, VIDEO, AUDIO, DATA, UNKNOWN };

namespace SourceMediaStreamTypeMapper {
AWS_MEDIACONNECT_API SourceMediaStreamType GetSourceMediaStreamTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceMediaStreamType(SourceMediaStreamType value);
}  // namespace SourceMediaStreamTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
