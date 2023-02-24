/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class AssociationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AssociationStatusMapper
{
AWS_SECURITYHUB_API AssociationStatus GetAssociationStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAssociationStatus(AssociationStatus value);
} // namespace AssociationStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
