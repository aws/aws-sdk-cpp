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
enum class APISchemaType { NOT_SET, OPEN_API_V3 };

namespace APISchemaTypeMapper {
AWS_QBUSINESS_API APISchemaType GetAPISchemaTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAPISchemaType(APISchemaType value);
}  // namespace APISchemaTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
