/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

class Unit {
 public:
  AWS_SUPPORTAUTHZ_API Unit() = default;
  AWS_SUPPORTAUTHZ_API Unit(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Unit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
