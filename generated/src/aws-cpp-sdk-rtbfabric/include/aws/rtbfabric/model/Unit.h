/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

class Unit {
 public:
  AWS_RTBFABRIC_API Unit() = default;
  AWS_RTBFABRIC_API Unit(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Unit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
