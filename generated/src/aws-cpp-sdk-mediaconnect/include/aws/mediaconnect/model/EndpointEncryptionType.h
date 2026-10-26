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
enum class EndpointEncryptionType { NOT_SET, SECRETS_MANAGER, AUTOMATIC };

namespace EndpointEncryptionTypeMapper {
AWS_MEDIACONNECT_API EndpointEncryptionType GetEndpointEncryptionTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEndpointEncryptionType(EndpointEncryptionType value);
}  // namespace EndpointEncryptionTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
