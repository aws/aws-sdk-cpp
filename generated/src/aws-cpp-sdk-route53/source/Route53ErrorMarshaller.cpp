/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/Route53Errors.h>

using namespace Aws::Client;
using namespace Aws::Route53;

AWSError<CoreErrors> Route53ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Route53ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}