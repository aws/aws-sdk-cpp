/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelContractsTypeFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ListChannelContractsTypeFilters::ListChannelContractsTypeFilters(JsonView jsonValue) { *this = jsonValue; }

ListChannelContractsTypeFilters& ListChannelContractsTypeFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedServicesAttestationTypeFilters")) {
    m_managedServicesAttestationTypeFilters = jsonValue.GetObject("managedServicesAttestationTypeFilters");
    m_managedServicesAttestationTypeFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ListChannelContractsTypeFilters::Jsonize() const {
  JsonValue payload;

  if (m_managedServicesAttestationTypeFiltersHasBeenSet) {
    payload.WithObject("managedServicesAttestationTypeFilters", m_managedServicesAttestationTypeFilters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
