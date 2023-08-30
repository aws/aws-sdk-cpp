/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{
  enum class ValidityPeriodType
  {
    NOT_SET,
    HOURS,
    DAYS,
    WEEKS,
    MONTHS,
    YEARS
  };

namespace ValidityPeriodTypeMapper
{
AWS_PCACONNECTORAD_API ValidityPeriodType GetValidityPeriodTypeForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForValidityPeriodType(ValidityPeriodType value);
} // namespace ValidityPeriodTypeMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
