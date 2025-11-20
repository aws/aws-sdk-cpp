/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/model/TransferParticipant.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {

TransferParticipant::TransferParticipant(JsonView jsonValue) { *this = jsonValue; }

TransferParticipant& TransferParticipant::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagementAccountId")) {
    m_managementAccountId = jsonValue.GetString("ManagementAccountId");
    m_managementAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagementAccountEmail")) {
    m_managementAccountEmail = jsonValue.GetString("ManagementAccountEmail");
    m_managementAccountEmailHasBeenSet = true;
  }
  return *this;
}

JsonValue TransferParticipant::Jsonize() const {
  JsonValue payload;

  if (m_managementAccountIdHasBeenSet) {
    payload.WithString("ManagementAccountId", m_managementAccountId);
  }

  if (m_managementAccountEmailHasBeenSet) {
    payload.WithString("ManagementAccountEmail", m_managementAccountEmail);
  }

  return payload;
}

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
