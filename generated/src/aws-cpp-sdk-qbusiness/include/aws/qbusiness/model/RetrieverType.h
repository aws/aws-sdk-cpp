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
enum class RetrieverType { NOT_SET, NATIVE_INDEX, KENDRA_INDEX };

namespace RetrieverTypeMapper {
AWS_QBUSINESS_API RetrieverType GetRetrieverTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForRetrieverType(RetrieverType value);
}  // namespace RetrieverTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
