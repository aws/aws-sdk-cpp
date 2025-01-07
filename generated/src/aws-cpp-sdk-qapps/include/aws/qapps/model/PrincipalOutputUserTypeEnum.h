/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class PrincipalOutputUserTypeEnum
  {
    NOT_SET,
    owner,
    user
  };

namespace PrincipalOutputUserTypeEnumMapper
{
AWS_QAPPS_API PrincipalOutputUserTypeEnum GetPrincipalOutputUserTypeEnumForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPrincipalOutputUserTypeEnum(PrincipalOutputUserTypeEnum value);
} // namespace PrincipalOutputUserTypeEnumMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
