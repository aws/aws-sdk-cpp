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
enum class RouterEncryptionType { NOT_SET, AUTOMATIC, SECRETS_MANAGER };

namespace RouterEncryptionTypeMapper {
AWS_MEDIALIVE_API RouterEncryptionType GetRouterEncryptionTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRouterEncryptionType(RouterEncryptionType value);
}  // namespace RouterEncryptionTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
