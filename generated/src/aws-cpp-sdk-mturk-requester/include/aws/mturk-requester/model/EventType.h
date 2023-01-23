/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    AssignmentAccepted,
    AssignmentAbandoned,
    AssignmentReturned,
    AssignmentSubmitted,
    AssignmentRejected,
    AssignmentApproved,
    HITCreated,
    HITExpired,
    HITReviewable,
    HITExtended,
    HITDisposed,
    Ping
  };

namespace EventTypeMapper
{
AWS_MTURK_API EventType GetEventTypeForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
