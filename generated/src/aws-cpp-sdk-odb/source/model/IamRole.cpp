/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/IamRole.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

IamRole::IamRole(JsonView jsonValue) { *this = jsonValue; }

IamRole& IamRole::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("iamRoleArn")) {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IamRoleStatusMapper::GetIamRoleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsIntegration")) {
    m_awsIntegration = SupportedAwsIntegrationMapper::GetSupportedAwsIntegrationForName(jsonValue.GetString("awsIntegration"));
    m_awsIntegrationHasBeenSet = true;
  }
  return *this;
}

JsonValue IamRole::Jsonize() const {
  JsonValue payload;

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("iamRoleArn", m_iamRoleArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IamRoleStatusMapper::GetNameForIamRoleStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_awsIntegrationHasBeenSet) {
    payload.WithString("awsIntegration", SupportedAwsIntegrationMapper::GetNameForSupportedAwsIntegration(m_awsIntegration));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
