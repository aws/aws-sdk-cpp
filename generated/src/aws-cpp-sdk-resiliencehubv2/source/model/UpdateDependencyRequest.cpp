/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UpdateDependencyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDependencyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_dependencyIdHasBeenSet) {
    payload.WithString("dependencyId", m_dependencyId);
  }

  if (m_criticalityHasBeenSet) {
    payload.WithString("criticality", DependencyCriticalityMapper::GetNameForDependencyCriticality(m_criticality));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  return payload.View().WriteReadable();
}
