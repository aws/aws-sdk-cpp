/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ProjectSummary.h>
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

ProjectSummary::ProjectSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectSummary& ProjectSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryModels"))
  {
    Aws::Utils::Array<JsonView> deliveryModelsJsonList = jsonValue.GetArray("DeliveryModels");
    for(unsigned deliveryModelsIndex = 0; deliveryModelsIndex < deliveryModelsJsonList.GetLength(); ++deliveryModelsIndex)
    {
      m_deliveryModels.push_back(DeliveryModelMapper::GetDeliveryModelForName(deliveryModelsJsonList[deliveryModelsIndex].AsString()));
    }
    m_deliveryModelsHasBeenSet = true;
  }
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

JsonValue ProjectSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deliveryModelsJsonList(m_deliveryModels.size());
   for(unsigned deliveryModelsIndex = 0; deliveryModelsIndex < deliveryModelsJsonList.GetLength(); ++deliveryModelsIndex)
   {
     deliveryModelsJsonList[deliveryModelsIndex].AsString(DeliveryModelMapper::GetNameForDeliveryModel(m_deliveryModels[deliveryModelsIndex]));
   }
   payload.WithArray("DeliveryModels", std::move(deliveryModelsJsonList));

  }

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
