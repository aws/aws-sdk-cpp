/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/DnsOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

DnsOptions::DnsOptions(JsonView jsonValue) { *this = jsonValue; }

DnsOptions& DnsOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privateDnsPreference")) {
    m_privateDnsPreference = PrivateDnsPreferenceMapper::GetPrivateDnsPreferenceForName(jsonValue.GetString("privateDnsPreference"));
    m_privateDnsPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateDnsSpecifiedDomains")) {
    Aws::Utils::Array<JsonView> privateDnsSpecifiedDomainsJsonList = jsonValue.GetArray("privateDnsSpecifiedDomains");
    for (unsigned privateDnsSpecifiedDomainsIndex = 0; privateDnsSpecifiedDomainsIndex < privateDnsSpecifiedDomainsJsonList.GetLength();
         ++privateDnsSpecifiedDomainsIndex) {
      m_privateDnsSpecifiedDomains.push_back(privateDnsSpecifiedDomainsJsonList[privateDnsSpecifiedDomainsIndex].AsString());
    }
    m_privateDnsSpecifiedDomainsHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsOptions::Jsonize() const {
  JsonValue payload;

  if (m_privateDnsPreferenceHasBeenSet) {
    payload.WithString("privateDnsPreference", PrivateDnsPreferenceMapper::GetNameForPrivateDnsPreference(m_privateDnsPreference));
  }

  if (m_privateDnsSpecifiedDomainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> privateDnsSpecifiedDomainsJsonList(m_privateDnsSpecifiedDomains.size());
    for (unsigned privateDnsSpecifiedDomainsIndex = 0; privateDnsSpecifiedDomainsIndex < privateDnsSpecifiedDomainsJsonList.GetLength();
         ++privateDnsSpecifiedDomainsIndex) {
      privateDnsSpecifiedDomainsJsonList[privateDnsSpecifiedDomainsIndex].AsString(
          m_privateDnsSpecifiedDomains[privateDnsSpecifiedDomainsIndex]);
    }
    payload.WithArray("privateDnsSpecifiedDomains", std::move(privateDnsSpecifiedDomainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
