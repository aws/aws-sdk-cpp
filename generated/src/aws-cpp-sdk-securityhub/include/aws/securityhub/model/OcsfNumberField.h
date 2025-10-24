﻿/**
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
  enum class OcsfNumberField
  {
    NOT_SET,
    activity_id,
    compliance_status_id,
    confidence_score,
    severity_id,
    status_id,
    finding_info_related_events_count,
    evidences_api_response_code,
    evidences_dst_endpoint_autonomous_system_number,
    evidences_dst_endpoint_port,
    evidences_src_endpoint_autonomous_system_number,
    evidences_src_endpoint_port,
    resources_image_in_use_count
  };

namespace OcsfNumberFieldMapper
{
AWS_SECURITYHUB_API OcsfNumberField GetOcsfNumberFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfNumberField(OcsfNumberField value);
} // namespace OcsfNumberFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
