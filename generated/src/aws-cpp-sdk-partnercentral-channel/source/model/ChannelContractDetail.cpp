/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ChannelContractDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ChannelContractDetail::ChannelContractDetail(JsonView jsonValue) { *this = jsonValue; }

ChannelContractDetail& ChannelContractDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractType")) {
    m_contractType = ChannelContractTypeMapper::GetChannelContractTypeForName(jsonValue.GetString("contractType"));
    m_contractTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ChannelContractStatusMapper::GetChannelContractStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("respondedAt")) {
    m_respondedAt = jsonValue.GetString("respondedAt");
    m_respondedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cancellationReason")) {
    m_cancellationReason = jsonValue.GetString("cancellationReason");
    m_cancellationReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetObject("details");
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelContractDetail::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_contractTypeHasBeenSet) {
    payload.WithString("contractType", ChannelContractTypeMapper::GetNameForChannelContractType(m_contractType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ChannelContractStatusMapper::GetNameForChannelContractStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_respondedAtHasBeenSet) {
    payload.WithString("respondedAt", m_respondedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_cancellationReasonHasBeenSet) {
    payload.WithString("cancellationReason", m_cancellationReason);
  }

  if (m_detailsHasBeenSet) {
    payload.WithObject("details", m_details.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
