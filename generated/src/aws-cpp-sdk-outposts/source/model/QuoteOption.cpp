/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/QuoteOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

QuoteOption::QuoteOption(JsonView jsonValue) { *this = jsonValue; }

QuoteOption& QuoteOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuoteOptionIdentifier")) {
    m_quoteOptionIdentifier = jsonValue.GetString("QuoteOptionIdentifier");
    m_quoteOptionIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Capacities")) {
    Aws::Utils::Array<JsonView> capacitiesJsonList = jsonValue.GetArray("Capacities");
    for (unsigned capacitiesIndex = 0; capacitiesIndex < capacitiesJsonList.GetLength(); ++capacitiesIndex) {
      m_capacities.push_back(capacitiesJsonList[capacitiesIndex].AsObject());
    }
    m_capacitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacitySummary")) {
    m_capacitySummary = jsonValue.GetObject("CapacitySummary");
    m_capacitySummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Specifications")) {
    Aws::Utils::Array<JsonView> specificationsJsonList = jsonValue.GetArray("Specifications");
    for (unsigned specificationsIndex = 0; specificationsIndex < specificationsJsonList.GetLength(); ++specificationsIndex) {
      m_specifications.push_back(specificationsJsonList[specificationsIndex].AsObject());
    }
    m_specificationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PricingOptions")) {
    Aws::Utils::Array<JsonView> pricingOptionsJsonList = jsonValue.GetArray("PricingOptions");
    for (unsigned pricingOptionsIndex = 0; pricingOptionsIndex < pricingOptionsJsonList.GetLength(); ++pricingOptionsIndex) {
      m_pricingOptions.push_back(pricingOptionsJsonList[pricingOptionsIndex].AsObject());
    }
    m_pricingOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue QuoteOption::Jsonize() const {
  JsonValue payload;

  if (m_quoteOptionIdentifierHasBeenSet) {
    payload.WithString("QuoteOptionIdentifier", m_quoteOptionIdentifier);
  }

  if (m_capacitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacitiesJsonList(m_capacities.size());
    for (unsigned capacitiesIndex = 0; capacitiesIndex < capacitiesJsonList.GetLength(); ++capacitiesIndex) {
      capacitiesJsonList[capacitiesIndex].AsObject(m_capacities[capacitiesIndex].Jsonize());
    }
    payload.WithArray("Capacities", std::move(capacitiesJsonList));
  }

  if (m_capacitySummaryHasBeenSet) {
    payload.WithObject("CapacitySummary", m_capacitySummary.Jsonize());
  }

  if (m_specificationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> specificationsJsonList(m_specifications.size());
    for (unsigned specificationsIndex = 0; specificationsIndex < specificationsJsonList.GetLength(); ++specificationsIndex) {
      specificationsJsonList[specificationsIndex].AsObject(m_specifications[specificationsIndex].Jsonize());
    }
    payload.WithArray("Specifications", std::move(specificationsJsonList));
  }

  if (m_pricingOptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pricingOptionsJsonList(m_pricingOptions.size());
    for (unsigned pricingOptionsIndex = 0; pricingOptionsIndex < pricingOptionsJsonList.GetLength(); ++pricingOptionsIndex) {
      pricingOptionsJsonList[pricingOptionsIndex].AsObject(m_pricingOptions[pricingOptionsIndex].Jsonize());
    }
    payload.WithArray("PricingOptions", std::move(pricingOptionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
