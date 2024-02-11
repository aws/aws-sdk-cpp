/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceCatalog.h>
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

ResourceCatalog::ResourceCatalog() : 
    m_resourceCatalogArnHasBeenSet(false),
    m_resourceCatalogNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

ResourceCatalog::ResourceCatalog(JsonView jsonValue) : 
    m_resourceCatalogArnHasBeenSet(false),
    m_resourceCatalogNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCatalog& ResourceCatalog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceCatalogArn"))
  {
    m_resourceCatalogArn = jsonValue.GetString("ResourceCatalogArn");

    m_resourceCatalogArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCatalogName"))
  {
    m_resourceCatalogName = jsonValue.GetString("ResourceCatalogName");

    m_resourceCatalogNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCatalog::Jsonize() const
{
  JsonValue payload;

  if(m_resourceCatalogArnHasBeenSet)
  {
   payload.WithString("ResourceCatalogArn", m_resourceCatalogArn);

  }

  if(m_resourceCatalogNameHasBeenSet)
  {
   payload.WithString("ResourceCatalogName", m_resourceCatalogName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
