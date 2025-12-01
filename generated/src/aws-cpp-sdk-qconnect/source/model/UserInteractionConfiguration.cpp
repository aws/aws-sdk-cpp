/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/UserInteractionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

UserInteractionConfiguration::UserInteractionConfiguration(JsonView jsonValue) { *this = jsonValue; }

UserInteractionConfiguration& UserInteractionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isUserConfirmationRequired")) {
    m_isUserConfirmationRequired = jsonValue.GetBool("isUserConfirmationRequired");
    m_isUserConfirmationRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue UserInteractionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_isUserConfirmationRequiredHasBeenSet) {
    payload.WithBool("isUserConfirmationRequired", m_isUserConfirmationRequired);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
