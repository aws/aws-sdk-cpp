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
  enum class KmsKeyStatus
  {
    NOT_SET,
    UPDATING,
    ENABLED,
    UPDATE_FAILED
  };

namespace KmsKeyStatusMapper
{
AWS_SSOADMIN_API KmsKeyStatus GetKmsKeyStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForKmsKeyStatus(KmsKeyStatus value);
} // namespace KmsKeyStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
