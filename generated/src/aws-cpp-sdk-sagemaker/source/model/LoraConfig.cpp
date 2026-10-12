/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/LoraConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

LoraConfig::LoraConfig(JsonView jsonValue) { *this = jsonValue; }

LoraConfig& LoraConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Rank")) {
    m_rank = jsonValue.GetInteger("Rank");
    m_rankHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Alpha")) {
    m_alpha = jsonValue.GetInteger("Alpha");
    m_alphaHasBeenSet = true;
  }
  return *this;
}

JsonValue LoraConfig::Jsonize() const {
  JsonValue payload;

  if (m_rankHasBeenSet) {
    payload.WithInteger("Rank", m_rank);
  }

  if (m_alphaHasBeenSet) {
    payload.WithInteger("Alpha", m_alpha);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
