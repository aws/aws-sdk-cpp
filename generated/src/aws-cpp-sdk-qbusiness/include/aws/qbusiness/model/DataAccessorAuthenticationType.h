/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class DataAccessorAuthenticationType { NOT_SET, AWS_IAM_IDC_TTI, AWS_IAM_IDC_AUTH_CODE };

namespace DataAccessorAuthenticationTypeMapper {
AWS_QBUSINESS_API DataAccessorAuthenticationType GetDataAccessorAuthenticationTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDataAccessorAuthenticationType(DataAccessorAuthenticationType value);
}  // namespace DataAccessorAuthenticationTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
