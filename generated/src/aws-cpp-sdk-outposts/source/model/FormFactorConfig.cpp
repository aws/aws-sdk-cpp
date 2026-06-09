/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/FormFactorConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

FormFactorConfig::FormFactorConfig(JsonView jsonValue) { *this = jsonValue; }

FormFactorConfig& FormFactorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormFactor")) {
    m_formFactor = FormFactorMapper::GetFormFactorForName(jsonValue.GetString("FormFactor"));
    m_formFactorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutpostGeneration")) {
    m_outpostGeneration = OutpostGenerationMapper::GetOutpostGenerationForName(jsonValue.GetString("OutpostGeneration"));
    m_outpostGenerationHasBeenSet = true;
  }
  return *this;
}

JsonValue FormFactorConfig::Jsonize() const {
  JsonValue payload;

  if (m_formFactorHasBeenSet) {
    payload.WithString("FormFactor", FormFactorMapper::GetNameForFormFactor(m_formFactor));
  }

  if (m_outpostGenerationHasBeenSet) {
    payload.WithString("OutpostGeneration", OutpostGenerationMapper::GetNameForOutpostGeneration(m_outpostGeneration));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
