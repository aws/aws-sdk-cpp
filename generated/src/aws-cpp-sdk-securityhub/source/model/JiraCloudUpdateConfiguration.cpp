﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/JiraCloudUpdateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

JiraCloudUpdateConfiguration::JiraCloudUpdateConfiguration(JsonView jsonValue) { *this = jsonValue; }

JiraCloudUpdateConfiguration& JiraCloudUpdateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProjectKey")) {
    m_projectKey = jsonValue.GetString("ProjectKey");
    m_projectKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue JiraCloudUpdateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_projectKeyHasBeenSet) {
    payload.WithString("ProjectKey", m_projectKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
