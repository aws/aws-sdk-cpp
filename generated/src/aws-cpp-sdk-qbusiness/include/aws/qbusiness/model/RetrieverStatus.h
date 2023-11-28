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
  enum class RetrieverStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    FAILED
  };

namespace RetrieverStatusMapper
{
AWS_QBUSINESS_API RetrieverStatus GetRetrieverStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForRetrieverStatus(RetrieverStatus value);
} // namespace RetrieverStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
