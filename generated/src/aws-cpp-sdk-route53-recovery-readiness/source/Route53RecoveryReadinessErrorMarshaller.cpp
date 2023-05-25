/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrorMarshaller.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53RecoveryReadiness;

AWSError<CoreErrors> Route53RecoveryReadinessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Route53RecoveryReadinessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}