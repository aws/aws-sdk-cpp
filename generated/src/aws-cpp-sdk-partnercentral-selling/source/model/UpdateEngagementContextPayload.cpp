/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/UpdateEngagementContextPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

UpdateEngagementContextPayload::UpdateEngagementContextPayload(JsonView jsonValue) { *this = jsonValue; }

UpdateEngagementContextPayload& UpdateEngagementContextPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Lead")) {
    m_lead = jsonValue.GetObject("Lead");
    m_leadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerProject")) {
    m_customerProject = jsonValue.GetObject("CustomerProject");
    m_customerProjectHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateEngagementContextPayload::Jsonize() const {
  JsonValue payload;

  if (m_leadHasBeenSet) {
    payload.WithObject("Lead", m_lead.Jsonize());
  }

  if (m_customerProjectHasBeenSet) {
    payload.WithObject("CustomerProject", m_customerProject.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
