/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class IdentityFilterKey { NOT_SET, IDENTITY_NAME_CONTAINS, IDENTITY_TYPE, VERIFICATION_STATUS };

namespace IdentityFilterKeyMapper {
AWS_SESV2_API IdentityFilterKey GetIdentityFilterKeyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForIdentityFilterKey(IdentityFilterKey value);
}  // namespace IdentityFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
