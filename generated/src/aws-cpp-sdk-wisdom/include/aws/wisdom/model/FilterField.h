/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class FilterField
  {
    NOT_SET,
    NAME
  };

namespace FilterFieldMapper
{
AWS_CONNECTWISDOMSERVICE_API FilterField GetFilterFieldForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForFilterField(FilterField value);
} // namespace FilterFieldMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
