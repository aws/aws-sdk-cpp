/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STS_EXPORTS.h>

namespace Aws {
namespace STS {
namespace Model {
enum class WebIdentityTokenSubjectModeType { NOT_SET, AWSIdentity, OriginIdentity };

namespace WebIdentityTokenSubjectModeTypeMapper {
AWS_STS_API WebIdentityTokenSubjectModeType GetWebIdentityTokenSubjectModeTypeForName(const Aws::String& name);

AWS_STS_API Aws::String GetNameForWebIdentityTokenSubjectModeType(WebIdentityTokenSubjectModeType value);
}  // namespace WebIdentityTokenSubjectModeTypeMapper
}  // namespace Model
}  // namespace STS
}  // namespace Aws
