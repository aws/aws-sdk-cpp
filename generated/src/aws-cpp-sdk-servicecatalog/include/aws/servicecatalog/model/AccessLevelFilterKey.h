/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class AccessLevelFilterKey
  {
    NOT_SET,
    Account,
    Role,
    User
  };

namespace AccessLevelFilterKeyMapper
{
AWS_SERVICECATALOG_API AccessLevelFilterKey GetAccessLevelFilterKeyForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForAccessLevelFilterKey(AccessLevelFilterKey value);
} // namespace AccessLevelFilterKeyMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
