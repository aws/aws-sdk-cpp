/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ServerCatalogStatus
  {
    NOT_SET,
    NOT_IMPORTED,
    IMPORTING,
    AVAILABLE,
    DELETED,
    EXPIRED
  };

namespace ServerCatalogStatusMapper
{
AWS_SMS_API ServerCatalogStatus GetServerCatalogStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForServerCatalogStatus(ServerCatalogStatus value);
} // namespace ServerCatalogStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
