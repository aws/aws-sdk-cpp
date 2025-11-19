/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

RevokeServicePeriodPayload::RevokeServicePeriodPayload(JsonView jsonValue) { *this = jsonValue; }

RevokeServicePeriodPayload& RevokeServicePeriodPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("programManagementAccountIdentifier")) {
    m_programManagementAccountIdentifier = jsonValue.GetString("programManagementAccountIdentifier");
    m_programManagementAccountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("note")) {
    m_note = jsonValue.GetString("note");
    m_noteHasBeenSet = true;
  }
  return *this;
}

JsonValue RevokeServicePeriodPayload::Jsonize() const {
  JsonValue payload;

  if (m_programManagementAccountIdentifierHasBeenSet) {
    payload.WithString("programManagementAccountIdentifier", m_programManagementAccountIdentifier);
  }

  if (m_noteHasBeenSet) {
    payload.WithString("note", m_note);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
