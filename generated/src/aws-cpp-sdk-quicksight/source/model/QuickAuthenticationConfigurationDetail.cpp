/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickAuthenticationConfigurationDetail::QuickAuthenticationConfigurationDetail(JsonView jsonValue) { *this = jsonValue; }

QuickAuthenticationConfigurationDetail& QuickAuthenticationConfigurationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickManagedPublicAuthCode")) {
    m_quickManagedPublicAuthCode = jsonValue.GetObject("QuickManagedPublicAuthCode");
    m_quickManagedPublicAuthCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickAuthenticationConfigurationDetail::Jsonize() const {
  JsonValue payload;

  if (m_quickManagedPublicAuthCodeHasBeenSet) {
    payload.WithObject("QuickManagedPublicAuthCode", m_quickManagedPublicAuthCode.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
