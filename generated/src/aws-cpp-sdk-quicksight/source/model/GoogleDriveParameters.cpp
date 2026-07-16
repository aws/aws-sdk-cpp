/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GoogleDriveParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

GoogleDriveParameters::GoogleDriveParameters(JsonView jsonValue) { *this = jsonValue; }

GoogleDriveParameters& GoogleDriveParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GoogleDriveParameters::Jsonize() const {
  JsonValue payload;

  if (m_authTypeHasBeenSet) {
    payload.WithString("AuthType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
