/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadInteraction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadInteraction::LeadInteraction(JsonView jsonValue) { *this = jsonValue; }

LeadInteraction& LeadInteraction::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("InteractionDate")) {
    m_interactionDate = jsonValue.GetString("InteractionDate");
    m_interactionDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerAction")) {
    m_customerAction = jsonValue.GetString("CustomerAction");
    m_customerActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BusinessProblem")) {
    m_businessProblem = jsonValue.GetString("BusinessProblem");
    m_businessProblemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Contact")) {
    m_contact = jsonValue.GetObject("Contact");
    m_contactHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadInteraction::Jsonize() const {
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

  if (m_interactionDateHasBeenSet) {
    payload.WithString("InteractionDate", m_interactionDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_customerActionHasBeenSet) {
    payload.WithString("CustomerAction", m_customerAction);
  }

  if (m_businessProblemHasBeenSet) {
    payload.WithString("BusinessProblem", m_businessProblem);
  }

  if (m_contactHasBeenSet) {
    payload.WithObject("Contact", m_contact.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
