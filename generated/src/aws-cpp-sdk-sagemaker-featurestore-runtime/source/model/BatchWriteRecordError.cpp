/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Model {

BatchWriteRecordError::BatchWriteRecordError(JsonView jsonValue) { *this = jsonValue; }

BatchWriteRecordError& BatchWriteRecordError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Entry")) {
    m_entry = jsonValue.GetObject("Entry");
    m_entryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchWriteRecordError::Jsonize() const {
  JsonValue payload;

  if (m_entryHasBeenSet) {
    payload.WithObject("Entry", m_entry.Jsonize());
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
