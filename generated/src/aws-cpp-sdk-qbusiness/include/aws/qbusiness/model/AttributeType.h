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
  enum class AttributeType
  {
    NOT_SET,
    STRING,
    STRING_LIST,
    NUMBER,
    DATE
  };

namespace AttributeTypeMapper
{
AWS_QBUSINESS_API AttributeType GetAttributeTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAttributeType(AttributeType value);
} // namespace AttributeTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
