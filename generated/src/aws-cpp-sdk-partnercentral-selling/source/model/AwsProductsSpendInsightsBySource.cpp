/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsProductsSpendInsightsBySource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsProductsSpendInsightsBySource::AwsProductsSpendInsightsBySource(JsonView jsonValue) { *this = jsonValue; }

AwsProductsSpendInsightsBySource& AwsProductsSpendInsightsBySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Partner")) {
    m_partner = jsonValue.GetObject("Partner");
    m_partnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AWS")) {
    m_aWS = jsonValue.GetObject("AWS");
    m_aWSHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsProductsSpendInsightsBySource::Jsonize() const {
  JsonValue payload;

  if (m_partnerHasBeenSet) {
    payload.WithObject("Partner", m_partner.Jsonize());
  }

  if (m_aWSHasBeenSet) {
    payload.WithObject("AWS", m_aWS.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
