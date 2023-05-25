/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/personalize-events/PersonalizeEventsErrorMarshaller.h>
#include <aws/personalize-events/PersonalizeEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::PersonalizeEvents;

AWSError<CoreErrors> PersonalizeEventsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PersonalizeEventsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}