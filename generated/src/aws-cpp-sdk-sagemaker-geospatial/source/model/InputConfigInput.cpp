/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/InputConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

InputConfigInput::InputConfigInput() : 
    m_dataSourceConfigHasBeenSet(false),
    m_previousEarthObservationJobArnHasBeenSet(false),
    m_rasterDataCollectionQueryHasBeenSet(false)
{
}

InputConfigInput::InputConfigInput(JsonView jsonValue) : 
    m_dataSourceConfigHasBeenSet(false),
    m_previousEarthObservationJobArnHasBeenSet(false),
    m_rasterDataCollectionQueryHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfigInput& InputConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceConfig"))
  {
    m_dataSourceConfig = jsonValue.GetObject("DataSourceConfig");

    m_dataSourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousEarthObservationJobArn"))
  {
    m_previousEarthObservationJobArn = jsonValue.GetString("PreviousEarthObservationJobArn");

    m_previousEarthObservationJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RasterDataCollectionQuery"))
  {
    m_rasterDataCollectionQuery = jsonValue.GetObject("RasterDataCollectionQuery");

    m_rasterDataCollectionQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceConfigHasBeenSet)
  {
   payload.WithObject("DataSourceConfig", m_dataSourceConfig.Jsonize());

  }

  if(m_previousEarthObservationJobArnHasBeenSet)
  {
   payload.WithString("PreviousEarthObservationJobArn", m_previousEarthObservationJobArn);

  }

  if(m_rasterDataCollectionQueryHasBeenSet)
  {
   payload.WithObject("RasterDataCollectionQuery", m_rasterDataCollectionQuery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
