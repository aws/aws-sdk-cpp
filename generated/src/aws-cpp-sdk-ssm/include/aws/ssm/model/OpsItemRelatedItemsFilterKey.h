/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class OpsItemRelatedItemsFilterKey
  {
    NOT_SET,
    ResourceType,
    AssociationId,
    ResourceUri
  };

namespace OpsItemRelatedItemsFilterKeyMapper
{
AWS_SSM_API OpsItemRelatedItemsFilterKey GetOpsItemRelatedItemsFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemRelatedItemsFilterKey(OpsItemRelatedItemsFilterKey value);
} // namespace OpsItemRelatedItemsFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
