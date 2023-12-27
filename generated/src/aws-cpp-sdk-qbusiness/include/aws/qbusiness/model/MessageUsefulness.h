/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class MessageUsefulness
  {
    NOT_SET,
    USEFUL,
    NOT_USEFUL
  };

namespace MessageUsefulnessMapper
{
AWS_QBUSINESS_API MessageUsefulness GetMessageUsefulnessForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMessageUsefulness(MessageUsefulness value);
} // namespace MessageUsefulnessMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
