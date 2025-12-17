/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TestNewServiceSDKTesting {
namespace Model {

class LeaveEvent {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API LeaveEvent() = default;
  AWS_TESTNEWSERVICESDKTESTING_API LeaveEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API LeaveEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
