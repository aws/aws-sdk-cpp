/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/model/ResponsibilityTransfer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {

ResponsibilityTransfer::ResponsibilityTransfer(JsonView jsonValue) { *this = jsonValue; }

ResponsibilityTransfer& ResponsibilityTransfer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ResponsibilityTransferTypeMapper::GetResponsibilityTransferTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ResponsibilityTransferStatusMapper::GetResponsibilityTransferStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Target")) {
    m_target = jsonValue.GetObject("Target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActiveHandshakeId")) {
    m_activeHandshakeId = jsonValue.GetString("ActiveHandshakeId");
    m_activeHandshakeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponsibilityTransfer::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ResponsibilityTransferTypeMapper::GetNameForResponsibilityTransferType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ResponsibilityTransferStatusMapper::GetNameForResponsibilityTransferStatus(m_status));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("Target", m_target.Jsonize());
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if (m_activeHandshakeIdHasBeenSet) {
    payload.WithString("ActiveHandshakeId", m_activeHandshakeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
