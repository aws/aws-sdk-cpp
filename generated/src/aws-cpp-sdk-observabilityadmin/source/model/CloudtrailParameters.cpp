/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/CloudtrailParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

CloudtrailParameters::CloudtrailParameters(JsonView jsonValue) { *this = jsonValue; }

CloudtrailParameters& CloudtrailParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdvancedEventSelectors")) {
    Aws::Utils::Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for (unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength();
         ++advancedEventSelectorsIndex) {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
    m_advancedEventSelectorsHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudtrailParameters::Jsonize() const {
  JsonValue payload;

  if (m_advancedEventSelectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> advancedEventSelectorsJsonList(m_advancedEventSelectors.size());
    for (unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength();
         ++advancedEventSelectorsIndex) {
      advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject(m_advancedEventSelectors[advancedEventSelectorsIndex].Jsonize());
    }
    payload.WithArray("AdvancedEventSelectors", std::move(advancedEventSelectorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
