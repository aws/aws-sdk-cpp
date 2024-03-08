/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

ProposalSummary::ProposalSummary() : 
    m_offerIdHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

ProposalSummary::ProposalSummary(JsonView jsonValue) : 
    m_offerIdHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ProposalSummary& ProposalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offerId"))
  {
    m_offerId = jsonValue.GetString("offerId");

    m_offerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProposalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_offerIdHasBeenSet)
  {
   payload.WithString("offerId", m_offerId);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
