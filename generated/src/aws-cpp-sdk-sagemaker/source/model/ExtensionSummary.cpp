/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtensionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ExtensionSummary::ExtensionSummary(JsonView jsonValue) { *this = jsonValue; }

ExtensionSummary& ExtensionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExtensionArn")) {
    m_extensionArn = jsonValue.GetString("ExtensionArn");
    m_extensionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtensionName")) {
    m_extensionName = jsonValue.GetString("ExtensionName");
    m_extensionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtensionVersion")) {
    m_extensionVersion = jsonValue.GetString("ExtensionVersion");
    m_extensionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExtensionStatusMapper::GetExtensionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionSummary::Jsonize() const {
  JsonValue payload;

  if (m_extensionArnHasBeenSet) {
    payload.WithString("ExtensionArn", m_extensionArn);
  }

  if (m_extensionNameHasBeenSet) {
    payload.WithString("ExtensionName", m_extensionName);
  }

  if (m_extensionVersionHasBeenSet) {
    payload.WithString("ExtensionVersion", m_extensionVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExtensionStatusMapper::GetNameForExtensionStatus(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
