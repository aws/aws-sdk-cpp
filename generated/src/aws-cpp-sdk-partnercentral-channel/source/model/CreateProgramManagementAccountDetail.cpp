/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

CreateProgramManagementAccountDetail::CreateProgramManagementAccountDetail(JsonView jsonValue) { *this = jsonValue; }

CreateProgramManagementAccountDetail& CreateProgramManagementAccountDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateProgramManagementAccountDetail::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
