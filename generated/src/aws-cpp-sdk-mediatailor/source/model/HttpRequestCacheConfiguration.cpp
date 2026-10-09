/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/HttpRequestCacheConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

HttpRequestCacheConfiguration::HttpRequestCacheConfiguration(JsonView jsonValue) { *this = jsonValue; }

HttpRequestCacheConfiguration& HttpRequestCacheConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TtlMinimumSeconds")) {
    m_ttlMinimumSeconds = jsonValue.GetInteger("TtlMinimumSeconds");
    m_ttlMinimumSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TtlMaximumSeconds")) {
    m_ttlMaximumSeconds = jsonValue.GetInteger("TtlMaximumSeconds");
    m_ttlMaximumSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Key")) {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpRequestCacheConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ttlMinimumSecondsHasBeenSet) {
    payload.WithInteger("TtlMinimumSeconds", m_ttlMinimumSeconds);
  }

  if (m_ttlMaximumSecondsHasBeenSet) {
    payload.WithInteger("TtlMaximumSeconds", m_ttlMaximumSeconds);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("Key", m_key);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
