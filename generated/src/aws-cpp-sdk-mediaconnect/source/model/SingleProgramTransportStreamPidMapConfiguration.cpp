/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SingleProgramTransportStreamPidMapConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SingleProgramTransportStreamPidMapConfiguration::SingleProgramTransportStreamPidMapConfiguration(JsonView jsonValue) { *this = jsonValue; }

SingleProgramTransportStreamPidMapConfiguration& SingleProgramTransportStreamPidMapConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rules")) {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultAction")) {
    m_defaultAction = jsonValue.GetString("defaultAction");
    m_defaultActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transportStreamId")) {
    m_transportStreamId = jsonValue.GetObject("transportStreamId");
    m_transportStreamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programNumber")) {
    m_programNumber = jsonValue.GetObject("programNumber");
    m_programNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programMapTablePid")) {
    m_programMapTablePid = jsonValue.GetObject("programMapTablePid");
    m_programMapTablePidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programClockReferencePid")) {
    m_programClockReferencePid = jsonValue.GetObject("programClockReferencePid");
    m_programClockReferencePidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("auto")) {
    m_auto = jsonValue.GetObject("auto");
    m_autoHasBeenSet = true;
  }
  return *this;
}

JsonValue SingleProgramTransportStreamPidMapConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_rulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
    }
    payload.WithArray("rules", std::move(rulesJsonList));
  }

  if (m_defaultActionHasBeenSet) {
    payload.WithString("defaultAction", m_defaultAction);
  }

  if (m_transportStreamIdHasBeenSet) {
    payload.WithObject("transportStreamId", m_transportStreamId.Jsonize());
  }

  if (m_programNumberHasBeenSet) {
    payload.WithObject("programNumber", m_programNumber.Jsonize());
  }

  if (m_programMapTablePidHasBeenSet) {
    payload.WithObject("programMapTablePid", m_programMapTablePid.Jsonize());
  }

  if (m_programClockReferencePidHasBeenSet) {
    payload.WithObject("programClockReferencePid", m_programClockReferencePid.Jsonize());
  }

  if (m_autoHasBeenSet) {
    payload.WithObject("auto", m_auto.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
