/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AuthorizationCodeGrantCredentialsDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AuthorizationCodeGrantCredentialsDetails::AuthorizationCodeGrantCredentialsDetails(JsonView jsonValue) { *this = jsonValue; }

AuthorizationCodeGrantCredentialsDetails& AuthorizationCodeGrantCredentialsDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthorizationCodeGrantDetails")) {
    m_authorizationCodeGrantDetails = jsonValue.GetObject("AuthorizationCodeGrantDetails");
    m_authorizationCodeGrantDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationCodeGrantCredentialsDetails::Jsonize() const {
  JsonValue payload;

  if (m_authorizationCodeGrantDetailsHasBeenSet) {
    payload.WithObject("AuthorizationCodeGrantDetails", m_authorizationCodeGrantDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
