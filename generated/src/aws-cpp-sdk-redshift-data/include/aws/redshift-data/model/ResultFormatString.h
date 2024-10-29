/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{
  enum class ResultFormatString
  {
    NOT_SET,
    JSON,
    CSV
  };

namespace ResultFormatStringMapper
{
AWS_REDSHIFTDATAAPISERVICE_API ResultFormatString GetResultFormatStringForName(const Aws::String& name);

AWS_REDSHIFTDATAAPISERVICE_API Aws::String GetNameForResultFormatString(ResultFormatString value);
} // namespace ResultFormatStringMapper
} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
