/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/PrefixAwareRoutingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

PrefixAwareRoutingConfig::PrefixAwareRoutingConfig(JsonView jsonValue) { *this = jsonValue; }

PrefixAwareRoutingConfig& PrefixAwareRoutingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrefixLength")) {
    m_prefixLength = jsonValue.GetInteger("PrefixLength");
    m_prefixLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConcurrencyThreshold")) {
    m_concurrencyThreshold = jsonValue.GetInteger("ConcurrencyThreshold");
    m_concurrencyThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue PrefixAwareRoutingConfig::Jsonize() const {
  JsonValue payload;

  if (m_prefixLengthHasBeenSet) {
    payload.WithInteger("PrefixLength", m_prefixLength);
  }

  if (m_concurrencyThresholdHasBeenSet) {
    payload.WithInteger("ConcurrencyThreshold", m_concurrencyThreshold);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
