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
  enum class AssociationType
  {
    NOT_SET,
    INHERITED,
    APPLIED
  };

namespace AssociationTypeMapper
{
AWS_SECURITYHUB_API AssociationType GetAssociationTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAssociationType(AssociationType value);
} // namespace AssociationTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
