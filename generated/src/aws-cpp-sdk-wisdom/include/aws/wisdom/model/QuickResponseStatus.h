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
  enum class QuickResponseStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    CREATED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED
  };

namespace QuickResponseStatusMapper
{
AWS_CONNECTWISDOMSERVICE_API QuickResponseStatus GetQuickResponseStatusForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForQuickResponseStatus(QuickResponseStatus value);
} // namespace QuickResponseStatusMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
