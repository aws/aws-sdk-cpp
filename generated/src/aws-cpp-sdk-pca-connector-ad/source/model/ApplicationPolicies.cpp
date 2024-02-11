/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ApplicationPolicies.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

ApplicationPolicies::ApplicationPolicies() : 
    m_critical(false),
    m_criticalHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

ApplicationPolicies::ApplicationPolicies(JsonView jsonValue) : 
    m_critical(false),
    m_criticalHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationPolicies& ApplicationPolicies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Critical"))
  {
    m_critical = jsonValue.GetBool("Critical");

    m_criticalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("Policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationPolicies::Jsonize() const
{
  JsonValue payload;

  if(m_criticalHasBeenSet)
  {
   payload.WithBool("Critical", m_critical);

  }

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("Policies", std::move(policiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
