﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    CREATING,
    READY,
    FAILED,
    DELETING
  };

namespace StatusMapper
{
AWS_SESV2_API Status GetStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
