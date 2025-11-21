/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

namespace Aws {
namespace RedshiftServerless {
namespace Model {
enum class LakehouseRegistration { NOT_SET, Register, Deregister };

namespace LakehouseRegistrationMapper {
AWS_REDSHIFTSERVERLESS_API LakehouseRegistration GetLakehouseRegistrationForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForLakehouseRegistration(LakehouseRegistration value);
}  // namespace LakehouseRegistrationMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
