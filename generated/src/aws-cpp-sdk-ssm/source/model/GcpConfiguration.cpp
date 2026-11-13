/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/GcpConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

GcpConfiguration::GcpConfiguration(JsonView jsonValue) { *this = jsonValue; }

GcpConfiguration& GcpConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrganizationId")) {
    m_organizationId = jsonValue.GetString("OrganizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkloadIdentityPoolProvider")) {
    m_workloadIdentityPoolProvider = jsonValue.GetString("WorkloadIdentityPoolProvider");
    m_workloadIdentityPoolProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceAccountEmail")) {
    m_serviceAccountEmail = jsonValue.GetString("ServiceAccountEmail");
    m_serviceAccountEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Targets")) {
    m_targets = jsonValue.GetObject("Targets");
    m_targetsHasBeenSet = true;
  }
  return *this;
}

JsonValue GcpConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_organizationIdHasBeenSet) {
    payload.WithString("OrganizationId", m_organizationId);
  }

  if (m_workloadIdentityPoolProviderHasBeenSet) {
    payload.WithString("WorkloadIdentityPoolProvider", m_workloadIdentityPoolProvider);
  }

  if (m_serviceAccountEmailHasBeenSet) {
    payload.WithString("ServiceAccountEmail", m_serviceAccountEmail);
  }

  if (m_targetsHasBeenSet) {
    payload.WithObject("Targets", m_targets.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
