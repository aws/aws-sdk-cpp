/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadInvitationInteraction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadInvitationInteraction::LeadInvitationInteraction(JsonView jsonValue) { *this = jsonValue; }

LeadInvitationInteraction& LeadInvitationInteraction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceType")) {
    m_sourceType = jsonValue.GetString("SourceType");
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceId")) {
    m_sourceId = jsonValue.GetString("SourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceName")) {
    m_sourceName = jsonValue.GetString("SourceName");
    m_sourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Usecase")) {
    m_usecase = jsonValue.GetString("Usecase");
    m_usecaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactBusinessTitle")) {
    m_contactBusinessTitle = jsonValue.GetString("ContactBusinessTitle");
    m_contactBusinessTitleHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadInvitationInteraction::Jsonize() const {
  JsonValue payload;

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("SourceType", m_sourceType);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("SourceId", m_sourceId);
  }

  if (m_sourceNameHasBeenSet) {
    payload.WithString("SourceName", m_sourceName);
  }

  if (m_usecaseHasBeenSet) {
    payload.WithString("Usecase", m_usecase);
  }

  if (m_contactBusinessTitleHasBeenSet) {
    payload.WithString("ContactBusinessTitle", m_contactBusinessTitle);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
