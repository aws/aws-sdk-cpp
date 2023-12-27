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
  enum class ReadAccessType
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace ReadAccessTypeMapper
{
AWS_QBUSINESS_API ReadAccessType GetReadAccessTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForReadAccessType(ReadAccessType value);
} // namespace ReadAccessTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
