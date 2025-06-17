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
  enum class OcsfStringField
  {
    NOT_SET,
    metadata_uid,
    activity_name,
    cloud_account_uid,
    cloud_provider,
    cloud_region,
    compliance_assessments_category,
    compliance_assessments_name,
    compliance_control,
    compliance_status,
    compliance_standards,
    finding_info_desc,
    finding_info_src_url,
    finding_info_title,
    finding_info_types,
    finding_info_uid,
    finding_info_related_events_uid,
    finding_info_related_events_product_uid,
    finding_info_related_events_title,
    metadata_product_name,
    metadata_product_uid,
    metadata_product_vendor_name,
    remediation_desc,
    remediation_references,
    resources_cloud_partition,
    resources_region,
    resources_type,
    resources_uid,
    severity,
    status,
    comment,
    vulnerabilities_fix_coverage,
    class_name
  };

namespace OcsfStringFieldMapper
{
AWS_SECURITYHUB_API OcsfStringField GetOcsfStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfStringField(OcsfStringField value);
} // namespace OcsfStringFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
