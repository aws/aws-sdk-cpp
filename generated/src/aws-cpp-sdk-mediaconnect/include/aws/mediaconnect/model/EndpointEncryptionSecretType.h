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
enum class EndpointEncryptionSecretType { NOT_SET, AES_128_KEY, AES_192_KEY, AES_256_KEY, SRT_PASSPHRASE };

namespace EndpointEncryptionSecretTypeMapper {
AWS_MEDIACONNECT_API EndpointEncryptionSecretType GetEndpointEncryptionSecretTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEndpointEncryptionSecretType(EndpointEncryptionSecretType value);
}  // namespace EndpointEncryptionSecretTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
