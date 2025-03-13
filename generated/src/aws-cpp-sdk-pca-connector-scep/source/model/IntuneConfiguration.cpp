/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/IntuneConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

IntuneConfiguration::IntuneConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IntuneConfiguration& IntuneConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AzureApplicationId"))
  {
    m_azureApplicationId = jsonValue.GetString("AzureApplicationId");
    m_azureApplicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  return *this;
}

JsonValue IntuneConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_azureApplicationIdHasBeenSet)
  {
   payload.WithString("AzureApplicationId", m_azureApplicationId);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
