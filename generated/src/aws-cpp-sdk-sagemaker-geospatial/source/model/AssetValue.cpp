/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AssetValue.h>
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

AssetValue::AssetValue() : 
    m_hrefHasBeenSet(false)
{
}

AssetValue::AssetValue(JsonView jsonValue) : 
    m_hrefHasBeenSet(false)
{
  *this = jsonValue;
}

AssetValue& AssetValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Href"))
  {
    m_href = jsonValue.GetString("Href");

    m_hrefHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetValue::Jsonize() const
{
  JsonValue payload;

  if(m_hrefHasBeenSet)
  {
   payload.WithString("Href", m_href);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
