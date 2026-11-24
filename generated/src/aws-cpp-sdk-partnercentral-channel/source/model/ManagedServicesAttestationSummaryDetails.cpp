/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationSummaryDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ManagedServicesAttestationSummaryDetails::ManagedServicesAttestationSummaryDetails(JsonView jsonValue) { *this = jsonValue; }

ManagedServicesAttestationSummaryDetails& ManagedServicesAttestationSummaryDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("legalEntityName")) {
    m_legalEntityName = jsonValue.GetString("legalEntityName");
    m_legalEntityNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relationshipIdentifier")) {
    m_relationshipIdentifier = jsonValue.GetString("relationshipIdentifier");
    m_relationshipIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programManagementAccountIdentifier")) {
    m_programManagementAccountIdentifier = jsonValue.GetString("programManagementAccountIdentifier");
    m_programManagementAccountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memberAccountIds")) {
    Aws::Utils::Array<JsonView> memberAccountIdsJsonList = jsonValue.GetArray("memberAccountIds");
    for (unsigned memberAccountIdsIndex = 0; memberAccountIdsIndex < memberAccountIdsJsonList.GetLength(); ++memberAccountIdsIndex) {
      m_memberAccountIds.push_back(memberAccountIdsJsonList[memberAccountIdsIndex].AsString());
    }
    m_memberAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetString("endDate");
    m_endDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedServices")) {
    Aws::Utils::Array<JsonView> supportedServicesJsonList = jsonValue.GetArray("supportedServices");
    for (unsigned supportedServicesIndex = 0; supportedServicesIndex < supportedServicesJsonList.GetLength(); ++supportedServicesIndex) {
      m_supportedServices.push_back(ManagedServicesSupportedServiceMapper::GetManagedServicesSupportedServiceForName(
          supportedServicesJsonList[supportedServicesIndex].AsString()));
    }
    m_supportedServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedServicesAttestationSummaryDetails::Jsonize() const {
  JsonValue payload;

  if (m_legalEntityNameHasBeenSet) {
    payload.WithString("legalEntityName", m_legalEntityName);
  }

  if (m_relationshipIdentifierHasBeenSet) {
    payload.WithString("relationshipIdentifier", m_relationshipIdentifier);
  }

  if (m_programManagementAccountIdentifierHasBeenSet) {
    payload.WithString("programManagementAccountIdentifier", m_programManagementAccountIdentifier);
  }

  if (m_memberAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> memberAccountIdsJsonList(m_memberAccountIds.size());
    for (unsigned memberAccountIdsIndex = 0; memberAccountIdsIndex < memberAccountIdsJsonList.GetLength(); ++memberAccountIdsIndex) {
      memberAccountIdsJsonList[memberAccountIdsIndex].AsString(m_memberAccountIds[memberAccountIdsIndex]);
    }
    payload.WithArray("memberAccountIds", std::move(memberAccountIdsJsonList));
  }

  if (m_endDateHasBeenSet) {
    payload.WithString("endDate", m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_supportedServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedServicesJsonList(m_supportedServices.size());
    for (unsigned supportedServicesIndex = 0; supportedServicesIndex < supportedServicesJsonList.GetLength(); ++supportedServicesIndex) {
      supportedServicesJsonList[supportedServicesIndex].AsString(
          ManagedServicesSupportedServiceMapper::GetNameForManagedServicesSupportedService(m_supportedServices[supportedServicesIndex]));
    }
    payload.WithArray("supportedServices", std::move(supportedServicesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
