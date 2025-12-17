/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/model/FooSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

FooSummary::FooSummary(JsonView jsonValue) { *this = jsonValue; }

FooSummary& FooSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fooId")) {
    m_fooId = jsonValue.GetString("fooId");
    m_fooIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue FooSummary::Jsonize() const {
  JsonValue payload;

  if (m_fooIdHasBeenSet) {
    payload.WithString("fooId", m_fooId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
