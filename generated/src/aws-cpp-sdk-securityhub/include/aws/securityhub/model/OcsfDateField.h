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
  enum class OcsfDateField
  {
    NOT_SET,
    finding_info_created_time_dt,
    finding_info_first_seen_time_dt,
    finding_info_last_seen_time_dt,
    finding_info_modified_time_dt
  };

namespace OcsfDateFieldMapper
{
AWS_SECURITYHUB_API OcsfDateField GetOcsfDateFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfDateField(OcsfDateField value);
} // namespace OcsfDateFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
