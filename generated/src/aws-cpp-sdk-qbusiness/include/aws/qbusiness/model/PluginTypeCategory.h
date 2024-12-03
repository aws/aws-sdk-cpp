/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class PluginTypeCategory
  {
    NOT_SET,
    Customer_relationship_management_CRM,
    Project_management,
    Communication,
    Productivity,
    Ticketing_and_incident_management
  };

namespace PluginTypeCategoryMapper
{
AWS_QBUSINESS_API PluginTypeCategory GetPluginTypeCategoryForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPluginTypeCategory(PluginTypeCategory value);
} // namespace PluginTypeCategoryMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
