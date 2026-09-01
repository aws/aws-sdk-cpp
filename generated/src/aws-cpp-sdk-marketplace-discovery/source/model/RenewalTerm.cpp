/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/RenewalTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

RenewalTerm::RenewalTerm(JsonView jsonValue) { *this = jsonValue; }

RenewalTerm& RenewalTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = TermTypeMapper::GetTermTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxRenewals")) {
    m_maxRenewals = jsonValue.GetInteger("maxRenewals");
    m_maxRenewalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lockoutPeriod")) {
    m_lockoutPeriod = jsonValue.GetString("lockoutPeriod");
    m_lockoutPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adjustmentDeadline")) {
    m_adjustmentDeadline = jsonValue.GetString("adjustmentDeadline");
    m_adjustmentDeadlineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priceIncrease")) {
    m_priceIncrease = jsonValue.GetObject("priceIncrease");
    m_priceIncreaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("termTemplates")) {
    Aws::Utils::Array<JsonView> termTemplatesJsonList = jsonValue.GetArray("termTemplates");
    for (unsigned termTemplatesIndex = 0; termTemplatesIndex < termTemplatesJsonList.GetLength(); ++termTemplatesIndex) {
      m_termTemplates.push_back(termTemplatesJsonList[termTemplatesIndex].AsObject());
    }
    m_termTemplatesHasBeenSet = true;
  }
  return *this;
}

JsonValue RenewalTerm::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", TermTypeMapper::GetNameForTermType(m_type));
  }

  if (m_maxRenewalsHasBeenSet) {
    payload.WithInteger("maxRenewals", m_maxRenewals);
  }

  if (m_lockoutPeriodHasBeenSet) {
    payload.WithString("lockoutPeriod", m_lockoutPeriod);
  }

  if (m_adjustmentDeadlineHasBeenSet) {
    payload.WithString("adjustmentDeadline", m_adjustmentDeadline);
  }

  if (m_priceIncreaseHasBeenSet) {
    payload.WithObject("priceIncrease", m_priceIncrease.Jsonize());
  }

  if (m_termTemplatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> termTemplatesJsonList(m_termTemplates.size());
    for (unsigned termTemplatesIndex = 0; termTemplatesIndex < termTemplatesJsonList.GetLength(); ++termTemplatesIndex) {
      termTemplatesJsonList[termTemplatesIndex].AsObject(m_termTemplates[termTemplatesIndex].Jsonize());
    }
    payload.WithArray("termTemplates", std::move(termTemplatesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
