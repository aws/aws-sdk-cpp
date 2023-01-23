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
  enum class PrincipalType
  {
    NOT_SET,
    IAM,
    IAM_PATTERN
  };

namespace PrincipalTypeMapper
{
AWS_SERVICECATALOG_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForPrincipalType(PrincipalType value);
} // namespace PrincipalTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
