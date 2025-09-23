/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class KmsKeyType
  {
    NOT_SET,
    AWS_OWNED_KMS_KEY,
    CUSTOMER_MANAGED_KEY
  };

namespace KmsKeyTypeMapper
{
AWS_SSOADMIN_API KmsKeyType GetKmsKeyTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForKmsKeyType(KmsKeyType value);
} // namespace KmsKeyTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
