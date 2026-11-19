/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchAccount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchAccount::OpportunitySearchAccount(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchAccount& OpportunitySearchAccount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CompanyName")) {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Industry")) {
    m_industry = IndustryMapper::GetIndustryForName(jsonValue.GetString("Industry"));
    m_industryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsAccountId")) {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Address")) {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchAccount::Jsonize() const {
  JsonValue payload;

  if (m_companyNameHasBeenSet) {
    payload.WithString("CompanyName", m_companyName);
  }

  if (m_industryHasBeenSet) {
    payload.WithString("Industry", IndustryMapper::GetNameForIndustry(m_industry));
  }

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("AwsAccountId", m_awsAccountId);
  }

  if (m_addressHasBeenSet) {
    payload.WithObject("Address", m_address.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
