/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDescribeUserLimitsError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchDescribeUserLimitsError::BatchDescribeUserLimitsError(JsonView jsonValue) { *this = jsonValue; }

BatchDescribeUserLimitsError& BatchDescribeUserLimitsError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userArn")) {
    m_userArn = jsonValue.GetString("userArn");
    m_userArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDescribeUserLimitsError::Jsonize() const {
  JsonValue payload;

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_userArnHasBeenSet) {
    payload.WithString("userArn", m_userArn);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
