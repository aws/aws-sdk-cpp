/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationTypeFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ManagedServicesAttestationTypeFilters::ManagedServicesAttestationTypeFilters(JsonView jsonValue) { *this = jsonValue; }

ManagedServicesAttestationTypeFilters& ManagedServicesAttestationTypeFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("relationshipIdentifiers")) {
    Aws::Utils::Array<JsonView> relationshipIdentifiersJsonList = jsonValue.GetArray("relationshipIdentifiers");
    for (unsigned relationshipIdentifiersIndex = 0; relationshipIdentifiersIndex < relationshipIdentifiersJsonList.GetLength();
         ++relationshipIdentifiersIndex) {
      m_relationshipIdentifiers.push_back(relationshipIdentifiersJsonList[relationshipIdentifiersIndex].AsString());
    }
    m_relationshipIdentifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("legalEntityNames")) {
    Aws::Utils::Array<JsonView> legalEntityNamesJsonList = jsonValue.GetArray("legalEntityNames");
    for (unsigned legalEntityNamesIndex = 0; legalEntityNamesIndex < legalEntityNamesJsonList.GetLength(); ++legalEntityNamesIndex) {
      m_legalEntityNames.push_back(legalEntityNamesJsonList[legalEntityNamesIndex].AsString());
    }
    m_legalEntityNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedServicesAttestationTypeFilters::Jsonize() const {
  JsonValue payload;

  if (m_relationshipIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> relationshipIdentifiersJsonList(m_relationshipIdentifiers.size());
    for (unsigned relationshipIdentifiersIndex = 0; relationshipIdentifiersIndex < relationshipIdentifiersJsonList.GetLength();
         ++relationshipIdentifiersIndex) {
      relationshipIdentifiersJsonList[relationshipIdentifiersIndex].AsString(m_relationshipIdentifiers[relationshipIdentifiersIndex]);
    }
    payload.WithArray("relationshipIdentifiers", std::move(relationshipIdentifiersJsonList));
  }

  if (m_legalEntityNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> legalEntityNamesJsonList(m_legalEntityNames.size());
    for (unsigned legalEntityNamesIndex = 0; legalEntityNamesIndex < legalEntityNamesJsonList.GetLength(); ++legalEntityNamesIndex) {
      legalEntityNamesJsonList[legalEntityNamesIndex].AsString(m_legalEntityNames[legalEntityNamesIndex]);
    }
    payload.WithArray("legalEntityNames", std::move(legalEntityNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
