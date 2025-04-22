/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class OfferingType
  {
    NOT_SET,
    ALL_UPFRONT,
    NO_UPFRONT
  };

namespace OfferingTypeMapper
{
AWS_REDSHIFTSERVERLESS_API OfferingType GetOfferingTypeForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForOfferingType(OfferingType value);
} // namespace OfferingTypeMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
