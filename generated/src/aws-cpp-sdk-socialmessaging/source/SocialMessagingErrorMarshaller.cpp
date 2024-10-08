﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/socialmessaging/SocialMessagingErrorMarshaller.h>
#include <aws/socialmessaging/SocialMessagingErrors.h>

using namespace Aws::Client;
using namespace Aws::SocialMessaging;

AWSError<CoreErrors> SocialMessagingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SocialMessagingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}