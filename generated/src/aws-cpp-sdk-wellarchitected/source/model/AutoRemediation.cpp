/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AutoRemediation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AutoRemediation::AutoRemediation(JsonView jsonValue) { *this = jsonValue; }

AutoRemediation& AutoRemediation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deepLink")) {
    m_deepLink = jsonValue.GetString("deepLink");
    m_deepLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cliCommand")) {
    m_cliCommand = jsonValue.GetString("cliCommand");
    m_cliCommandHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoRemediation::Jsonize() const {
  JsonValue payload;

  if (m_deepLinkHasBeenSet) {
    payload.WithString("deepLink", m_deepLink);
  }

  if (m_cliCommandHasBeenSet) {
    payload.WithString("cliCommand", m_cliCommand);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
