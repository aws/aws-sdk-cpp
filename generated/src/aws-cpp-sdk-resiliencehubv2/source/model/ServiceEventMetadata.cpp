/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceEventMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceEventMetadata::ServiceEventMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceEventMetadata& ServiceEventMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceCreated")) {
    m_serviceCreated = jsonValue.GetObject("serviceCreated");
    m_serviceCreatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceDeleted")) {
    m_serviceDeleted = jsonValue.GetObject("serviceDeleted");
    m_serviceDeletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceSystemAssociated")) {
    m_serviceSystemAssociated = jsonValue.GetObject("serviceSystemAssociated");
    m_serviceSystemAssociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceSystemDisassociated")) {
    m_serviceSystemDisassociated = jsonValue.GetObject("serviceSystemDisassociated");
    m_serviceSystemDisassociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceResourcesAssociated")) {
    m_serviceResourcesAssociated = jsonValue.GetObject("serviceResourcesAssociated");
    m_serviceResourcesAssociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceResourcesDisassociated")) {
    m_serviceResourcesDisassociated = jsonValue.GetObject("serviceResourcesDisassociated");
    m_serviceResourcesDisassociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceWorkflowUpdated")) {
    m_serviceWorkflowUpdated = jsonValue.GetObject("serviceWorkflowUpdated");
    m_serviceWorkflowUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceInputSourcesUpdated")) {
    m_serviceInputSourcesUpdated = jsonValue.GetObject("serviceInputSourcesUpdated");
    m_serviceInputSourcesUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicePolicyAssociated")) {
    m_servicePolicyAssociated = jsonValue.GetObject("servicePolicyAssociated");
    m_servicePolicyAssociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicePolicyDisassociated")) {
    m_servicePolicyDisassociated = jsonValue.GetObject("servicePolicyDisassociated");
    m_servicePolicyDisassociatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionCreated")) {
    m_serviceFunctionCreated = jsonValue.GetObject("serviceFunctionCreated");
    m_serviceFunctionCreatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionUpdated")) {
    m_serviceFunctionUpdated = jsonValue.GetObject("serviceFunctionUpdated");
    m_serviceFunctionUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionDeleted")) {
    m_serviceFunctionDeleted = jsonValue.GetObject("serviceFunctionDeleted");
    m_serviceFunctionDeletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionResourcesAdded")) {
    m_serviceFunctionResourcesAdded = jsonValue.GetObject("serviceFunctionResourcesAdded");
    m_serviceFunctionResourcesAddedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionResourcesRemoved")) {
    m_serviceFunctionResourcesRemoved = jsonValue.GetObject("serviceFunctionResourcesRemoved");
    m_serviceFunctionResourcesRemovedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceAchievabilityUpdated")) {
    m_serviceAchievabilityUpdated = jsonValue.GetObject("serviceAchievabilityUpdated");
    m_serviceAchievabilityUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionCreated")) {
    m_assertionCreated = jsonValue.GetObject("assertionCreated");
    m_assertionCreatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionUpdated")) {
    m_assertionUpdated = jsonValue.GetObject("assertionUpdated");
    m_assertionUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionDeleted")) {
    m_assertionDeleted = jsonValue.GetObject("assertionDeleted");
    m_assertionDeletedHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceEventMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceCreatedHasBeenSet) {
    payload.WithObject("serviceCreated", m_serviceCreated.Jsonize());
  }

  if (m_serviceDeletedHasBeenSet) {
    payload.WithObject("serviceDeleted", m_serviceDeleted.Jsonize());
  }

  if (m_serviceSystemAssociatedHasBeenSet) {
    payload.WithObject("serviceSystemAssociated", m_serviceSystemAssociated.Jsonize());
  }

  if (m_serviceSystemDisassociatedHasBeenSet) {
    payload.WithObject("serviceSystemDisassociated", m_serviceSystemDisassociated.Jsonize());
  }

  if (m_serviceResourcesAssociatedHasBeenSet) {
    payload.WithObject("serviceResourcesAssociated", m_serviceResourcesAssociated.Jsonize());
  }

  if (m_serviceResourcesDisassociatedHasBeenSet) {
    payload.WithObject("serviceResourcesDisassociated", m_serviceResourcesDisassociated.Jsonize());
  }

  if (m_serviceWorkflowUpdatedHasBeenSet) {
    payload.WithObject("serviceWorkflowUpdated", m_serviceWorkflowUpdated.Jsonize());
  }

  if (m_serviceInputSourcesUpdatedHasBeenSet) {
    payload.WithObject("serviceInputSourcesUpdated", m_serviceInputSourcesUpdated.Jsonize());
  }

  if (m_servicePolicyAssociatedHasBeenSet) {
    payload.WithObject("servicePolicyAssociated", m_servicePolicyAssociated.Jsonize());
  }

  if (m_servicePolicyDisassociatedHasBeenSet) {
    payload.WithObject("servicePolicyDisassociated", m_servicePolicyDisassociated.Jsonize());
  }

  if (m_serviceFunctionCreatedHasBeenSet) {
    payload.WithObject("serviceFunctionCreated", m_serviceFunctionCreated.Jsonize());
  }

  if (m_serviceFunctionUpdatedHasBeenSet) {
    payload.WithObject("serviceFunctionUpdated", m_serviceFunctionUpdated.Jsonize());
  }

  if (m_serviceFunctionDeletedHasBeenSet) {
    payload.WithObject("serviceFunctionDeleted", m_serviceFunctionDeleted.Jsonize());
  }

  if (m_serviceFunctionResourcesAddedHasBeenSet) {
    payload.WithObject("serviceFunctionResourcesAdded", m_serviceFunctionResourcesAdded.Jsonize());
  }

  if (m_serviceFunctionResourcesRemovedHasBeenSet) {
    payload.WithObject("serviceFunctionResourcesRemoved", m_serviceFunctionResourcesRemoved.Jsonize());
  }

  if (m_serviceAchievabilityUpdatedHasBeenSet) {
    payload.WithObject("serviceAchievabilityUpdated", m_serviceAchievabilityUpdated.Jsonize());
  }

  if (m_assertionCreatedHasBeenSet) {
    payload.WithObject("assertionCreated", m_assertionCreated.Jsonize());
  }

  if (m_assertionUpdatedHasBeenSet) {
    payload.WithObject("assertionUpdated", m_assertionUpdated.Jsonize());
  }

  if (m_assertionDeletedHasBeenSet) {
    payload.WithObject("assertionDeleted", m_assertionDeleted.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
