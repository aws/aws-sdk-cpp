/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ProjectDetails.h>
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

ProjectDetails::ProjectDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectDetails& ProjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BusinessProblem"))
  {
    m_businessProblem = jsonValue.GetString("BusinessProblem");
    m_businessProblemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetCompletionDate"))
  {
    m_targetCompletionDate = jsonValue.GetString("TargetCompletionDate");
    m_targetCompletionDateHasBeenSet = true;
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

JsonValue ProjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_businessProblemHasBeenSet)
  {
   payload.WithString("BusinessProblem", m_businessProblem);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_targetCompletionDateHasBeenSet)
  {
   payload.WithString("TargetCompletionDate", m_targetCompletionDate);

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
