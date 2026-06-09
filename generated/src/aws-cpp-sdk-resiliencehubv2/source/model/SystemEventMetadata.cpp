/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemEventMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemEventMetadata::SystemEventMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemEventMetadata& SystemEventMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemCreated")) {
    m_systemCreated = jsonValue.GetObject("systemCreated");
    m_systemCreatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemDeleted")) {
    m_systemDeleted = jsonValue.GetObject("systemDeleted");
    m_systemDeletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemUserJourneyCreated")) {
    m_systemUserJourneyCreated = jsonValue.GetObject("systemUserJourneyCreated");
    m_systemUserJourneyCreatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemUserJourneyUpdated")) {
    m_systemUserJourneyUpdated = jsonValue.GetObject("systemUserJourneyUpdated");
    m_systemUserJourneyUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemUserJourneyDeleted")) {
    m_systemUserJourneyDeleted = jsonValue.GetObject("systemUserJourneyDeleted");
    m_systemUserJourneyDeletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemServiceAssociated")) {
    m_systemServiceAssociated = jsonValue.GetObject("systemServiceAssociated");
    m_systemServiceAssociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemServiceDisassociated")) {
    m_systemServiceDisassociated = jsonValue.GetObject("systemServiceDisassociated");
    m_systemServiceDisassociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemPolicyAssociated")) {
    m_systemPolicyAssociated = jsonValue.GetObject("systemPolicyAssociated");
    m_systemPolicyAssociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemPolicyDisassociated")) {
    m_systemPolicyDisassociated = jsonValue.GetObject("systemPolicyDisassociated");
    m_systemPolicyDisassociatedHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemEventMetadata::Jsonize() const {
  JsonValue payload;

  if (m_systemCreatedHasBeenSet) {
    payload.WithObject("systemCreated", m_systemCreated.Jsonize());
  }

  if (m_systemDeletedHasBeenSet) {
    payload.WithObject("systemDeleted", m_systemDeleted.Jsonize());
  }

  if (m_systemUserJourneyCreatedHasBeenSet) {
    payload.WithObject("systemUserJourneyCreated", m_systemUserJourneyCreated.Jsonize());
  }

  if (m_systemUserJourneyUpdatedHasBeenSet) {
    payload.WithObject("systemUserJourneyUpdated", m_systemUserJourneyUpdated.Jsonize());
  }

  if (m_systemUserJourneyDeletedHasBeenSet) {
    payload.WithObject("systemUserJourneyDeleted", m_systemUserJourneyDeleted.Jsonize());
  }

  if (m_systemServiceAssociatedHasBeenSet) {
    payload.WithObject("systemServiceAssociated", m_systemServiceAssociated.Jsonize());
  }

  if (m_systemServiceDisassociatedHasBeenSet) {
    payload.WithObject("systemServiceDisassociated", m_systemServiceDisassociated.Jsonize());
  }

  if (m_systemPolicyAssociatedHasBeenSet) {
    payload.WithObject("systemPolicyAssociated", m_systemPolicyAssociated.Jsonize());
  }

  if (m_systemPolicyDisassociatedHasBeenSet) {
    payload.WithObject("systemPolicyDisassociated", m_systemPolicyDisassociated.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
