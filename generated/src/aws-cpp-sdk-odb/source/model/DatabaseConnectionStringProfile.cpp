/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DatabaseConnectionStringProfile.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

DatabaseConnectionStringProfile::DatabaseConnectionStringProfile(JsonView jsonValue) { *this = jsonValue; }

DatabaseConnectionStringProfile& DatabaseConnectionStringProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("consumerGroup")) {
    m_consumerGroup = jsonValue.GetString("consumerGroup");
    m_consumerGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostFormat")) {
    m_hostFormat = jsonValue.GetString("hostFormat");
    m_hostFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isRegional")) {
    m_isRegional = jsonValue.GetBool("isRegional");
    m_isRegionalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = jsonValue.GetString("protocol");
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionMode")) {
    m_sessionMode = jsonValue.GetString("sessionMode");
    m_sessionModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("syntaxFormat")) {
    m_syntaxFormat = jsonValue.GetString("syntaxFormat");
    m_syntaxFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tlsAuthentication")) {
    m_tlsAuthentication = jsonValue.GetString("tlsAuthentication");
    m_tlsAuthenticationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseConnectionStringProfile::Jsonize() const {
  JsonValue payload;

  if (m_consumerGroupHasBeenSet) {
    payload.WithString("consumerGroup", m_consumerGroup);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_hostFormatHasBeenSet) {
    payload.WithString("hostFormat", m_hostFormat);
  }

  if (m_isRegionalHasBeenSet) {
    payload.WithBool("isRegional", m_isRegional);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", m_protocol);
  }

  if (m_sessionModeHasBeenSet) {
    payload.WithString("sessionMode", m_sessionMode);
  }

  if (m_syntaxFormatHasBeenSet) {
    payload.WithString("syntaxFormat", m_syntaxFormat);
  }

  if (m_tlsAuthenticationHasBeenSet) {
    payload.WithString("tlsAuthentication", m_tlsAuthentication);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
