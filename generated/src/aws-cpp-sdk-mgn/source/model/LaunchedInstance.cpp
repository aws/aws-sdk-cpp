/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/LaunchedInstance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

LaunchedInstance::LaunchedInstance(JsonView jsonValue) { *this = jsonValue; }

LaunchedInstance& LaunchedInstance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ec2InstanceID")) {
    m_ec2InstanceID = jsonValue.GetString("ec2InstanceID");
    m_ec2InstanceIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstBoot")) {
    m_firstBoot = FirstBootMapper::GetFirstBootForName(jsonValue.GetString("firstBoot"));
    m_firstBootHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastKnownChecks")) {
    Aws::Utils::Array<JsonView> lastKnownChecksJsonList = jsonValue.GetArray("lastKnownChecks");
    for (unsigned lastKnownChecksIndex = 0; lastKnownChecksIndex < lastKnownChecksJsonList.GetLength(); ++lastKnownChecksIndex) {
      m_lastKnownChecks.push_back(lastKnownChecksJsonList[lastKnownChecksIndex].AsObject());
    }
    m_lastKnownChecksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastKnownFsxChecksStatus")) {
    m_lastKnownFsxChecksStatus =
        LastKnownCheckStatusMapper::GetLastKnownCheckStatusForName(jsonValue.GetString("lastKnownFsxChecksStatus"));
    m_lastKnownFsxChecksStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchedInstance::Jsonize() const {
  JsonValue payload;

  if (m_ec2InstanceIDHasBeenSet) {
    payload.WithString("ec2InstanceID", m_ec2InstanceID);
  }

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  if (m_firstBootHasBeenSet) {
    payload.WithString("firstBoot", FirstBootMapper::GetNameForFirstBoot(m_firstBoot));
  }

  if (m_lastKnownChecksHasBeenSet) {
    Aws::Utils::Array<JsonValue> lastKnownChecksJsonList(m_lastKnownChecks.size());
    for (unsigned lastKnownChecksIndex = 0; lastKnownChecksIndex < lastKnownChecksJsonList.GetLength(); ++lastKnownChecksIndex) {
      lastKnownChecksJsonList[lastKnownChecksIndex].AsObject(m_lastKnownChecks[lastKnownChecksIndex].Jsonize());
    }
    payload.WithArray("lastKnownChecks", std::move(lastKnownChecksJsonList));
  }

  if (m_lastKnownFsxChecksStatusHasBeenSet) {
    payload.WithString("lastKnownFsxChecksStatus", LastKnownCheckStatusMapper::GetNameForLastKnownCheckStatus(m_lastKnownFsxChecksStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
