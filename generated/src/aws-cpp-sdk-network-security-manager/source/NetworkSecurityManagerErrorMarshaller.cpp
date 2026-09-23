/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/network-security-manager/NetworkSecurityManagerErrorMarshaller.h>
#include <aws/network-security-manager/NetworkSecurityManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::NetworkSecurityManager;

AWSError<CoreErrors> NetworkSecurityManagerErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = NetworkSecurityManagerErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}