/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ServiceCatalogProvisioningUpdateDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ServiceCatalogProvisioningUpdateDetails::ServiceCatalogProvisioningUpdateDetails() : 
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false)
{
}

ServiceCatalogProvisioningUpdateDetails::ServiceCatalogProvisioningUpdateDetails(JsonView jsonValue) : 
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceCatalogProvisioningUpdateDetails& ServiceCatalogProvisioningUpdateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningParameters"))
  {
    Aws::Utils::Array<JsonView> provisioningParametersJsonList = jsonValue.GetArray("ProvisioningParameters");
    for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
    {
      m_provisioningParameters.push_back(provisioningParametersJsonList[provisioningParametersIndex].AsObject());
    }
    m_provisioningParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceCatalogProvisioningUpdateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_provisioningParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisioningParametersJsonList(m_provisioningParameters.size());
   for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
   {
     provisioningParametersJsonList[provisioningParametersIndex].AsObject(m_provisioningParameters[provisioningParametersIndex].Jsonize());
   }
   payload.WithArray("ProvisioningParameters", std::move(provisioningParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
