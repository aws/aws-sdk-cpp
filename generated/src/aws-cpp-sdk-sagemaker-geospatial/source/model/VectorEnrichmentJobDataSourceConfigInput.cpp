/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobDataSourceConfigInput.h>
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

VectorEnrichmentJobDataSourceConfigInput::VectorEnrichmentJobDataSourceConfigInput() : 
    m_s3DataHasBeenSet(false)
{
}

VectorEnrichmentJobDataSourceConfigInput::VectorEnrichmentJobDataSourceConfigInput(JsonView jsonValue) : 
    m_s3DataHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobDataSourceConfigInput& VectorEnrichmentJobDataSourceConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Data"))
  {
    m_s3Data = jsonValue.GetObject("S3Data");

    m_s3DataHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobDataSourceConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataHasBeenSet)
  {
   payload.WithObject("S3Data", m_s3Data.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
