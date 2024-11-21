/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/notifications/NotificationsErrorMarshaller.h>
#include <aws/notifications/NotificationsErrors.h>

using namespace Aws::Client;
using namespace Aws::Notifications;

AWSError<CoreErrors> NotificationsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NotificationsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}