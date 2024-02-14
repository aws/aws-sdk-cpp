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
  enum class MessageUsefulnessReason
  {
    NOT_SET,
    NOT_FACTUALLY_CORRECT,
    HARMFUL_OR_UNSAFE,
    INCORRECT_OR_MISSING_SOURCES,
    NOT_HELPFUL,
    FACTUALLY_CORRECT,
    COMPLETE,
    RELEVANT_SOURCES,
    HELPFUL,
    NOT_BASED_ON_DOCUMENTS,
    NOT_COMPLETE,
    NOT_CONCISE,
    OTHER
  };

namespace MessageUsefulnessReasonMapper
{
AWS_QBUSINESS_API MessageUsefulnessReason GetMessageUsefulnessReasonForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMessageUsefulnessReason(MessageUsefulnessReason value);
} // namespace MessageUsefulnessReasonMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
