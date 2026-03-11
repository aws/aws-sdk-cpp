/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/simpledbv2/SimpleDBv2ErrorMarshaller.h>
#include <aws/simpledbv2/SimpleDBv2Errors.h>

using namespace Aws::Client;
using namespace Aws::SimpleDBv2;

AWSError<CoreErrors> SimpleDBv2ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SimpleDBv2ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}