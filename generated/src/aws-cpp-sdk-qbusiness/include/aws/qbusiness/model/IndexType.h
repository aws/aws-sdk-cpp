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
  enum class IndexType
  {
    NOT_SET,
    ENTERPRISE,
    STARTER
  };

namespace IndexTypeMapper
{
AWS_QBUSINESS_API IndexType GetIndexTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForIndexType(IndexType value);
} // namespace IndexTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
