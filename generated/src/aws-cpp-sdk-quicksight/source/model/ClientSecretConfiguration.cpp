/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ClientSecretConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ClientSecretConfiguration::ClientSecretConfiguration(JsonView jsonValue) { *this = jsonValue; }

ClientSecretConfiguration& ClientSecretConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientSecretSourceType")) {
    m_clientSecretSourceType =
        ClientSecretSourceTypeMapper::GetClientSecretSourceTypeForName(jsonValue.GetString("ClientSecretSourceType"));
    m_clientSecretSourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecretConfigurationDetail")) {
    m_clientSecretConfigurationDetail = jsonValue.GetObject("ClientSecretConfigurationDetail");
    m_clientSecretConfigurationDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSecretConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_clientSecretSourceTypeHasBeenSet) {
    payload.WithString("ClientSecretSourceType", ClientSecretSourceTypeMapper::GetNameForClientSecretSourceType(m_clientSecretSourceType));
  }

  if (m_clientSecretConfigurationDetailHasBeenSet) {
    payload.WithObject("ClientSecretConfigurationDetail", m_clientSecretConfigurationDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
