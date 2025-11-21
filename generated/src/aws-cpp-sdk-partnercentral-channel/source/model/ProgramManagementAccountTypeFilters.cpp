/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ProgramManagementAccountTypeFilters::ProgramManagementAccountTypeFilters(JsonView jsonValue) { *this = jsonValue; }

ProgramManagementAccountTypeFilters& ProgramManagementAccountTypeFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("programs")) {
    Aws::Utils::Array<JsonView> programsJsonList = jsonValue.GetArray("programs");
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      m_programs.push_back(ProgramMapper::GetProgramForName(programsJsonList[programsIndex].AsString()));
    }
    m_programsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgramManagementAccountTypeFilters::Jsonize() const {
  JsonValue payload;

  if (m_programsHasBeenSet) {
    Aws::Utils::Array<JsonValue> programsJsonList(m_programs.size());
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      programsJsonList[programsIndex].AsString(ProgramMapper::GetNameForProgram(m_programs[programsIndex]));
    }
    payload.WithArray("programs", std::move(programsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
