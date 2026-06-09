/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FailedToUpdateAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FailedToUpdateAssociation::FailedToUpdateAssociation(JsonView jsonValue) { *this = jsonValue; }

FailedToUpdateAssociation& FailedToUpdateAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedToUpdateAssociation::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
