/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/OciIdentityDomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

OciIdentityDomain::OciIdentityDomain(JsonView jsonValue) { *this = jsonValue; }

OciIdentityDomain& OciIdentityDomain::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ociIdentityDomainId")) {
    m_ociIdentityDomainId = jsonValue.GetString("ociIdentityDomainId");
    m_ociIdentityDomainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociIdentityDomainResourceUrl")) {
    m_ociIdentityDomainResourceUrl = jsonValue.GetString("ociIdentityDomainResourceUrl");
    m_ociIdentityDomainResourceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociIdentityDomainUrl")) {
    m_ociIdentityDomainUrl = jsonValue.GetString("ociIdentityDomainUrl");
    m_ociIdentityDomainUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountSetupCloudFormationUrl")) {
    m_accountSetupCloudFormationUrl = jsonValue.GetString("accountSetupCloudFormationUrl");
    m_accountSetupCloudFormationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue OciIdentityDomain::Jsonize() const {
  JsonValue payload;

  if (m_ociIdentityDomainIdHasBeenSet) {
    payload.WithString("ociIdentityDomainId", m_ociIdentityDomainId);
  }

  if (m_ociIdentityDomainResourceUrlHasBeenSet) {
    payload.WithString("ociIdentityDomainResourceUrl", m_ociIdentityDomainResourceUrl);
  }

  if (m_ociIdentityDomainUrlHasBeenSet) {
    payload.WithString("ociIdentityDomainUrl", m_ociIdentityDomainUrl);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_accountSetupCloudFormationUrlHasBeenSet) {
    payload.WithString("accountSetupCloudFormationUrl", m_accountSetupCloudFormationUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
