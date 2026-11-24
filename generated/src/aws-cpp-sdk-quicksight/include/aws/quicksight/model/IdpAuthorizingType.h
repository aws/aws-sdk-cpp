/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class IdpAuthorizingType {
  NOT_SET,
  EXTERNAL_IDP_PUBLIC_AUTH_CODE,
  EXTERNAL_IDP_CONFIDENTIAL_AUTH_CODE,
  QUICK_MANAGED_AUTH_CODE,
  IDC_AUTH_CODE
};

namespace IdpAuthorizingTypeMapper {
AWS_QUICKSIGHT_API IdpAuthorizingType GetIdpAuthorizingTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIdpAuthorizingType(IdpAuthorizingType value);
}  // namespace IdpAuthorizingTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
