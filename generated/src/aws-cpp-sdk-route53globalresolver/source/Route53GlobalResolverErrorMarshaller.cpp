/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53globalresolver/Route53GlobalResolverErrorMarshaller.h>
#include <aws/route53globalresolver/Route53GlobalResolverErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53GlobalResolver;

AWSError<CoreErrors> Route53GlobalResolverErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = Route53GlobalResolverErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}