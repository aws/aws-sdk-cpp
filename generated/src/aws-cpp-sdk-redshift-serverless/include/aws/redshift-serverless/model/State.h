/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class State
  {
    NOT_SET,
    ACTIVE,
    DISABLED
  };

namespace StateMapper
{
AWS_REDSHIFTSERVERLESS_API State GetStateForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
