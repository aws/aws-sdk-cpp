/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/JwtAuth.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

JwtAuth::JwtAuth(JsonView jsonValue) { *this = jsonValue; }

JwtAuth& JwtAuth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jwtKey")) {
    m_jwtKey = jsonValue.GetObject("jwtKey");
    m_jwtKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue JwtAuth::Jsonize() const {
  JsonValue payload;

  if (m_jwtKeyHasBeenSet) {
    payload.WithObject("jwtKey", m_jwtKey.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
