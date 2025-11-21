/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountHandshakeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ProgramManagementAccountHandshakeDetail::ProgramManagementAccountHandshakeDetail(JsonView jsonValue) { *this = jsonValue; }

ProgramManagementAccountHandshakeDetail& ProgramManagementAccountHandshakeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("program")) {
    m_program = ProgramMapper::GetProgramForName(jsonValue.GetString("program"));
    m_programHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgramManagementAccountHandshakeDetail::Jsonize() const {
  JsonValue payload;

  if (m_programHasBeenSet) {
    payload.WithString("program", ProgramMapper::GetNameForProgram(m_program));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
