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
  enum class ActionPayloadFieldType
  {
    NOT_SET,
    STRING,
    NUMBER,
    ARRAY,
    BOOLEAN
  };

namespace ActionPayloadFieldTypeMapper
{
AWS_QBUSINESS_API ActionPayloadFieldType GetActionPayloadFieldTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForActionPayloadFieldType(ActionPayloadFieldType value);
} // namespace ActionPayloadFieldTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
