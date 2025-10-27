/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QBusinessParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QBusinessParameters::QBusinessParameters(JsonView jsonValue) { *this = jsonValue; }

QBusinessParameters& QBusinessParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationArn")) {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue QBusinessParameters::Jsonize() const {
  JsonValue payload;

  if (m_applicationArnHasBeenSet) {
    payload.WithString("ApplicationArn", m_applicationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
