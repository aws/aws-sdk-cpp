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
enum class RouterInputTransitEncryptionKeyType { NOT_SET, SECRETS_MANAGER, AUTOMATIC };

namespace RouterInputTransitEncryptionKeyTypeMapper {
AWS_MEDIACONNECT_API RouterInputTransitEncryptionKeyType GetRouterInputTransitEncryptionKeyTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterInputTransitEncryptionKeyType(RouterInputTransitEncryptionKeyType value);
}  // namespace RouterInputTransitEncryptionKeyTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
