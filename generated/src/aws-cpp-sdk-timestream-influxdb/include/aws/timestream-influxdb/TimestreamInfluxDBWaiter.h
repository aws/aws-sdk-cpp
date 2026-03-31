/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBClient.h>

#include <algorithm>

namespace Aws {
namespace TimestreamInfluxDB {

template <typename DerivedClient = TimestreamInfluxDBClient>
class TimestreamInfluxDBWaiter {
 public:
};
}  // namespace TimestreamInfluxDB
}  // namespace Aws
