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
  enum class AttributeValueOperator
  {
    NOT_SET,
    DELETE_
  };

namespace AttributeValueOperatorMapper
{
AWS_QBUSINESS_API AttributeValueOperator GetAttributeValueOperatorForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAttributeValueOperator(AttributeValueOperator value);
} // namespace AttributeValueOperatorMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
