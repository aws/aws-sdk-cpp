/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/SigninResourceBasedPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

SigninResourceBasedPolicy::SigninResourceBasedPolicy(JsonView jsonValue) { *this = jsonValue; }

SigninResourceBasedPolicy& SigninResourceBasedPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Statement")) {
    Aws::Utils::Array<JsonView> statementJsonList = jsonValue.GetArray("Statement");
    for (unsigned statementIndex = 0; statementIndex < statementJsonList.GetLength(); ++statementIndex) {
      m_statement.push_back(statementJsonList[statementIndex].AsObject());
    }
    m_statementHasBeenSet = true;
  }
  return *this;
}

JsonValue SigninResourceBasedPolicy::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("Version", m_version);
  }

  if (m_statementHasBeenSet) {
    Aws::Utils::Array<JsonValue> statementJsonList(m_statement.size());
    for (unsigned statementIndex = 0; statementIndex < statementJsonList.GetLength(); ++statementIndex) {
      statementJsonList[statementIndex].AsObject(m_statement[statementIndex].Jsonize());
    }
    payload.WithArray("Statement", std::move(statementJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
