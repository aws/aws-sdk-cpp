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
  enum class QuickResponseQueryOperator
  {
    NOT_SET,
    CONTAINS,
    CONTAINS_AND_PREFIX
  };

namespace QuickResponseQueryOperatorMapper
{
AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryOperator GetQuickResponseQueryOperatorForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForQuickResponseQueryOperator(QuickResponseQueryOperator value);
} // namespace QuickResponseQueryOperatorMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
