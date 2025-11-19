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
enum class MediaLiveTransitEncryptionKeyType { NOT_SET, SECRETS_MANAGER, AUTOMATIC };

namespace MediaLiveTransitEncryptionKeyTypeMapper {
AWS_MEDIACONNECT_API MediaLiveTransitEncryptionKeyType GetMediaLiveTransitEncryptionKeyTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMediaLiveTransitEncryptionKeyType(MediaLiveTransitEncryptionKeyType value);
}  // namespace MediaLiveTransitEncryptionKeyTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
