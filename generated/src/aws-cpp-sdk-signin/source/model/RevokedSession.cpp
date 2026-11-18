/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/RevokedSession.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

RevokedSession::RevokedSession(JsonView jsonValue) { *this = jsonValue; }

RevokedSession& RevokedSession::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionArn")) {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RevokedSession::Jsonize() const {
  JsonValue payload;

  if (m_sessionArnHasBeenSet) {
    payload.WithString("sessionArn", m_sessionArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
