/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrorMarshaller.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrors.h>

using namespace Aws::Client;
using namespace Aws::TimestreamInfluxDB;

AWSError<CoreErrors> TimestreamInfluxDBErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TimestreamInfluxDBErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}