/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

BatchCreateBillingAdjustmentItem::BatchCreateBillingAdjustmentItem(JsonView jsonValue) { *this = jsonValue; }

BatchCreateBillingAdjustmentItem& BatchCreateBillingAdjustmentItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("billingAdjustmentRequestId")) {
    m_billingAdjustmentRequestId = jsonValue.GetString("billingAdjustmentRequestId");
    m_billingAdjustmentRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateBillingAdjustmentItem::Jsonize() const {
  JsonValue payload;

  if (m_billingAdjustmentRequestIdHasBeenSet) {
    payload.WithString("billingAdjustmentRequestId", m_billingAdjustmentRequestId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
