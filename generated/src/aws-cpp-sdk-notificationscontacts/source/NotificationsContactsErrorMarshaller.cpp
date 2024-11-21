/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/notificationscontacts/NotificationsContactsErrorMarshaller.h>
#include <aws/notificationscontacts/NotificationsContactsErrors.h>

using namespace Aws::Client;
using namespace Aws::NotificationsContacts;

AWSError<CoreErrors> NotificationsContactsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NotificationsContactsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}