﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class DataShareType
  {
    NOT_SET,
    INTERNAL
  };

namespace DataShareTypeMapper
{
AWS_REDSHIFT_API DataShareType GetDataShareTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForDataShareType(DataShareType value);
} // namespace DataShareTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
