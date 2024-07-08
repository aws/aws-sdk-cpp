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
  enum class Sender
  {
    NOT_SET,
    USER,
    SYSTEM
  };

namespace SenderMapper
{
AWS_QAPPS_API Sender GetSenderForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForSender(Sender value);
} // namespace SenderMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
