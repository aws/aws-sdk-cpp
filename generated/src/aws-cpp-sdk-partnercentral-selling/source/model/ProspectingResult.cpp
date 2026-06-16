/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ProspectingResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ProspectingResult::ProspectingResult(JsonView jsonValue) { *this = jsonValue; }

ProspectingResult& ProspectingResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Aws")) {
    m_aws = jsonValue.GetObject("Aws");
    m_awsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProspectingResult::Jsonize() const {
  JsonValue payload;

  if (m_awsHasBeenSet) {
    payload.WithObject("Aws", m_aws.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
