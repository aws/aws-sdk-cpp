/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ChannelContractSummaryDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ChannelContractSummaryDetails::ChannelContractSummaryDetails(JsonView jsonValue) { *this = jsonValue; }

ChannelContractSummaryDetails& ChannelContractSummaryDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedServicesAttestationDetails")) {
    m_managedServicesAttestationDetails = jsonValue.GetObject("managedServicesAttestationDetails");
    m_managedServicesAttestationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelContractSummaryDetails::Jsonize() const {
  JsonValue payload;

  if (m_managedServicesAttestationDetailsHasBeenSet) {
    payload.WithObject("managedServicesAttestationDetails", m_managedServicesAttestationDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
