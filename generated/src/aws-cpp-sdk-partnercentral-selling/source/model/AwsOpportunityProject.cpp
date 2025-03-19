/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsOpportunityProject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AwsOpportunityProject::AwsOpportunityProject(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsOpportunityProject& AwsOpportunityProject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExpectedCustomerSpend"))
  {
    Aws::Utils::Array<JsonView> expectedCustomerSpendJsonList = jsonValue.GetArray("ExpectedCustomerSpend");
    for(unsigned expectedCustomerSpendIndex = 0; expectedCustomerSpendIndex < expectedCustomerSpendJsonList.GetLength(); ++expectedCustomerSpendIndex)
    {
      m_expectedCustomerSpend.push_back(expectedCustomerSpendJsonList[expectedCustomerSpendIndex].AsObject());
    }
    m_expectedCustomerSpendHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOpportunityProject::Jsonize() const
{
  JsonValue payload;

  if(m_expectedCustomerSpendHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expectedCustomerSpendJsonList(m_expectedCustomerSpend.size());
   for(unsigned expectedCustomerSpendIndex = 0; expectedCustomerSpendIndex < expectedCustomerSpendJsonList.GetLength(); ++expectedCustomerSpendIndex)
   {
     expectedCustomerSpendJsonList[expectedCustomerSpendIndex].AsObject(m_expectedCustomerSpend[expectedCustomerSpendIndex].Jsonize());
   }
   payload.WithArray("ExpectedCustomerSpend", std::move(expectedCustomerSpendJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
