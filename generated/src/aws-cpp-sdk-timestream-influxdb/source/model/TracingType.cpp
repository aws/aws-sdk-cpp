﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/TracingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace TracingTypeMapper {

static const int log_HASH = HashingUtils::HashString("log");
static const int jaeger_HASH = HashingUtils::HashString("jaeger");
static const int disabled_HASH = HashingUtils::HashString("disabled");

TracingType GetTracingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == log_HASH) {
    return TracingType::log;
  } else if (hashCode == jaeger_HASH) {
    return TracingType::jaeger;
  } else if (hashCode == disabled_HASH) {
    return TracingType::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TracingType>(hashCode);
  }

  return TracingType::NOT_SET;
}

Aws::String GetNameForTracingType(TracingType enumValue) {
  switch (enumValue) {
    case TracingType::NOT_SET:
      return {};
    case TracingType::log:
      return "log";
    case TracingType::jaeger:
      return "jaeger";
    case TracingType::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TracingTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
