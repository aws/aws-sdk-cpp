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
  enum class Action
  {
    NOT_SET,
    initiateDatabaseReset,
    performDatabaseReset
  };

namespace ActionMapper
{
AWS_NEPTUNEDATA_API Action GetActionForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForAction(Action value);
} // namespace ActionMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
