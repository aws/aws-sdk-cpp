/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrorMarshaller.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrors.h>

using namespace Aws::Client;
using namespace Aws::NetworkFlowMonitor;

AWSError<CoreErrors> NetworkFlowMonitorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NetworkFlowMonitorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}