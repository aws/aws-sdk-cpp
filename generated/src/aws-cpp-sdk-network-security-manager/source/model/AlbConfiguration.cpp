/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AlbConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AlbConfiguration::AlbConfiguration(JsonView jsonValue) { *this = jsonValue; }

AlbConfiguration& AlbConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheme")) {
    m_scheme = SchemeMapper::GetSchemeForName(jsonValue.GetString("scheme"));
    m_schemeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddressType")) {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AlbConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_schemeHasBeenSet) {
    payload.WithString("scheme", SchemeMapper::GetNameForScheme(m_scheme));
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
