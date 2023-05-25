/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ServiceCatalogProvisionedProductDetails.h>
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

ServiceCatalogProvisionedProductDetails::ServiceCatalogProvisionedProductDetails() : 
    m_provisionedProductIdHasBeenSet(false),
    m_provisionedProductStatusMessageHasBeenSet(false)
{
}

ServiceCatalogProvisionedProductDetails::ServiceCatalogProvisionedProductDetails(JsonView jsonValue) : 
    m_provisionedProductIdHasBeenSet(false),
    m_provisionedProductStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceCatalogProvisionedProductDetails& ServiceCatalogProvisionedProductDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProvisionedProductId"))
  {
    m_provisionedProductId = jsonValue.GetString("ProvisionedProductId");

    m_provisionedProductIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedProductStatusMessage"))
  {
    m_provisionedProductStatusMessage = jsonValue.GetString("ProvisionedProductStatusMessage");

    m_provisionedProductStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceCatalogProvisionedProductDetails::Jsonize() const
{
  JsonValue payload;

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_provisionedProductStatusMessageHasBeenSet)
  {
   payload.WithString("ProvisionedProductStatusMessage", m_provisionedProductStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
