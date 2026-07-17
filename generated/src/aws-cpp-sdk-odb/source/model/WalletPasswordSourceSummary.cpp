/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/WalletPasswordSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

WalletPasswordSourceSummary::WalletPasswordSourceSummary(JsonView jsonValue) { *this = jsonValue; }

WalletPasswordSourceSummary& WalletPasswordSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("passwordSource")) {
    m_passwordSource = WalletPasswordSourceMapper::GetWalletPasswordSourceForName(jsonValue.GetString("passwordSource"));
    m_passwordSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passwordSourceConfiguration")) {
    m_passwordSourceConfiguration = jsonValue.GetObject("passwordSourceConfiguration");
    m_passwordSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WalletPasswordSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_passwordSourceHasBeenSet) {
    payload.WithString("passwordSource", WalletPasswordSourceMapper::GetNameForWalletPasswordSource(m_passwordSource));
  }

  if (m_passwordSourceConfigurationHasBeenSet) {
    payload.WithObject("passwordSourceConfiguration", m_passwordSourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
