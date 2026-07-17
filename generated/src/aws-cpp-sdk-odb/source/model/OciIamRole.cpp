/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/OciIamRole.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

OciIamRole::OciIamRole(JsonView jsonValue) { *this = jsonValue; }

OciIamRole& OciIamRole::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("iamRoleArn")) {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsIntegration")) {
    m_awsIntegration = OciAwsIntegrationMapper::GetOciAwsIntegrationForName(jsonValue.GetString("awsIntegration"));
    m_awsIntegrationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = OciIamRoleStatusMapper::GetOciIamRoleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue OciIamRole::Jsonize() const {
  JsonValue payload;

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("iamRoleArn", m_iamRoleArn);
  }

  if (m_awsIntegrationHasBeenSet) {
    payload.WithString("awsIntegration", OciAwsIntegrationMapper::GetNameForOciAwsIntegration(m_awsIntegration));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", OciIamRoleStatusMapper::GetNameForOciIamRoleStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
