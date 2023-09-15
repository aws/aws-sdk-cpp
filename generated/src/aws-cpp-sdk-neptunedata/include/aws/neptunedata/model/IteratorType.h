/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class IteratorType
  {
    NOT_SET,
    AT_SEQUENCE_NUMBER,
    AFTER_SEQUENCE_NUMBER,
    TRIM_HORIZON,
    LATEST
  };

namespace IteratorTypeMapper
{
AWS_NEPTUNEDATA_API IteratorType GetIteratorTypeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForIteratorType(IteratorType value);
} // namespace IteratorTypeMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
