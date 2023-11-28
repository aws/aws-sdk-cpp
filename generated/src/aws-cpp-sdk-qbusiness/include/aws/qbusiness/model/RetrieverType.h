/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class RetrieverType
  {
    NOT_SET,
    NATIVE_INDEX,
    KENDRA_INDEX
  };

namespace RetrieverTypeMapper
{
AWS_QBUSINESS_API RetrieverType GetRetrieverTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForRetrieverType(RetrieverType value);
} // namespace RetrieverTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
