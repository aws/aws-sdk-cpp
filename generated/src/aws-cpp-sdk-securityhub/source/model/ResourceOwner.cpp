/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ResourceOwner.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ResourceOwner::ResourceOwner(JsonView jsonValue) { *this = jsonValue; }

ResourceOwner& ResourceOwner::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Account")) {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Org")) {
    m_org = jsonValue.GetObject("Org");
    m_orgHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceOwner::Jsonize() const {
  JsonValue payload;

  if (m_accountHasBeenSet) {
    payload.WithObject("Account", m_account.Jsonize());
  }

  if (m_orgHasBeenSet) {
    payload.WithObject("Org", m_org.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
