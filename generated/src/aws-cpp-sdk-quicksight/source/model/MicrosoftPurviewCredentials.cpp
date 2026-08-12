/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/MicrosoftPurviewCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

MicrosoftPurviewCredentials::MicrosoftPurviewCredentials(JsonView jsonValue) { *this = jsonValue; }

MicrosoftPurviewCredentials& MicrosoftPurviewCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SecretArn")) {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrosoftPurviewCredentials::Jsonize() const {
  JsonValue payload;

  if (m_secretArnHasBeenSet) {
    payload.WithString("SecretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
