/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/ExpirationDataRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

ExpirationDataRule::ExpirationDataRule(JsonView jsonValue) { *this = jsonValue; }

ExpirationDataRule& ExpirationDataRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("daysAfterLastAccess")) {
    m_daysAfterLastAccess = jsonValue.GetInteger("daysAfterLastAccess");
    m_daysAfterLastAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpirationDataRule::Jsonize() const {
  JsonValue payload;

  if (m_daysAfterLastAccessHasBeenSet) {
    payload.WithInteger("daysAfterLastAccess", m_daysAfterLastAccess);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
