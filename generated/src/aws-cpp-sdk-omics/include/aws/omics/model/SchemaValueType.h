/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class SchemaValueType
  {
    NOT_SET,
    LONG,
    INT,
    STRING,
    FLOAT,
    DOUBLE,
    BOOLEAN
  };

namespace SchemaValueTypeMapper
{
AWS_OMICS_API SchemaValueType GetSchemaValueTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForSchemaValueType(SchemaValueType value);
} // namespace SchemaValueTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
