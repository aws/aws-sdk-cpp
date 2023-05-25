/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class InitiatedBy
  {
    NOT_SET,
    START_TEST,
    START_CUTOVER,
    DIAGNOSTIC,
    TERMINATE
  };

namespace InitiatedByMapper
{
AWS_MGN_API InitiatedBy GetInitiatedByForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForInitiatedBy(InitiatedBy value);
} // namespace InitiatedByMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
