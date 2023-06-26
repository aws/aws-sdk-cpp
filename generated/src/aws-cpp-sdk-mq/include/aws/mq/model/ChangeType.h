/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class ChangeType
  {
    NOT_SET,
    CREATE,
    UPDATE,
    DELETE_
  };

namespace ChangeTypeMapper
{
AWS_MQ_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
