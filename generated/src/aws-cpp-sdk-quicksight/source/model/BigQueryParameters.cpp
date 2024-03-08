/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BigQueryParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

BigQueryParameters::BigQueryParameters() : 
    m_projectIdHasBeenSet(false),
    m_dataSetRegionHasBeenSet(false)
{
}

BigQueryParameters::BigQueryParameters(JsonView jsonValue) : 
    m_projectIdHasBeenSet(false),
    m_dataSetRegionHasBeenSet(false)
{
  *this = jsonValue;
}

BigQueryParameters& BigQueryParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetRegion"))
  {
    m_dataSetRegion = jsonValue.GetString("DataSetRegion");

    m_dataSetRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue BigQueryParameters::Jsonize() const
{
  JsonValue payload;

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("ProjectId", m_projectId);

  }

  if(m_dataSetRegionHasBeenSet)
  {
   payload.WithString("DataSetRegion", m_dataSetRegion);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
