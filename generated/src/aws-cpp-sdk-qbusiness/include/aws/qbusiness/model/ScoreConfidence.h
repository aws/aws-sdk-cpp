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
  enum class ScoreConfidence
  {
    NOT_SET,
    VERY_HIGH,
    HIGH,
    MEDIUM,
    LOW,
    NOT_AVAILABLE
  };

namespace ScoreConfidenceMapper
{
AWS_QBUSINESS_API ScoreConfidence GetScoreConfidenceForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForScoreConfidence(ScoreConfidence value);
} // namespace ScoreConfidenceMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
