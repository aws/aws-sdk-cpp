/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class AppStatus
  {
    NOT_SET,
    PUBLISHED,
    DRAFT,
    DELETED
  };

namespace AppStatusMapper
{
AWS_QAPPS_API AppStatus GetAppStatusForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForAppStatus(AppStatus value);
} // namespace AppStatusMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
