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
enum class AcceptHeader { NOT_SET, image_jpeg };

namespace AcceptHeaderMapper {
AWS_MEDIALIVE_API AcceptHeader GetAcceptHeaderForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAcceptHeader(AcceptHeader value);
}  // namespace AcceptHeaderMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
