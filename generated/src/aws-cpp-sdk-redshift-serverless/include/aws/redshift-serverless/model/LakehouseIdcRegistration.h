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
enum class LakehouseIdcRegistration { NOT_SET, Associate, Disassociate };

namespace LakehouseIdcRegistrationMapper {
AWS_REDSHIFTSERVERLESS_API LakehouseIdcRegistration GetLakehouseIdcRegistrationForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForLakehouseIdcRegistration(LakehouseIdcRegistration value);
}  // namespace LakehouseIdcRegistrationMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
