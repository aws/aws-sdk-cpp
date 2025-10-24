/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/QApps_EXPORTS.h>

namespace Aws {
namespace QApps {
namespace Model {
enum class PrincipalOutputUserTypeEnum { NOT_SET, owner, user };

namespace PrincipalOutputUserTypeEnumMapper {
AWS_QAPPS_API PrincipalOutputUserTypeEnum GetPrincipalOutputUserTypeEnumForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPrincipalOutputUserTypeEnum(PrincipalOutputUserTypeEnum value);
}  // namespace PrincipalOutputUserTypeEnumMapper
}  // namespace Model
}  // namespace QApps
}  // namespace Aws
