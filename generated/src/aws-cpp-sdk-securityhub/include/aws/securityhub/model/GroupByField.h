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
  enum class GroupByField
  {
    NOT_SET,
    activity_name,
    cloud_account_uid,
    cloud_provider,
    cloud_region,
    compliance_assessments_name,
    compliance_status,
    compliance_control,
    finding_info_title,
    finding_info_types,
    metadata_product_name,
    metadata_product_uid,
    resources_type,
    resources_uid,
    severity,
    status,
    vulnerabilities_fix_coverage,
    class_name
  };

namespace GroupByFieldMapper
{
AWS_SECURITYHUB_API GroupByField GetGroupByFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForGroupByField(GroupByField value);
} // namespace GroupByFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
