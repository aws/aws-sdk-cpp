/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdapterVersionDatasetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

AdapterVersionDatasetConfig::AdapterVersionDatasetConfig() : 
    m_manifestS3ObjectHasBeenSet(false)
{
}

AdapterVersionDatasetConfig::AdapterVersionDatasetConfig(JsonView jsonValue) : 
    m_manifestS3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

AdapterVersionDatasetConfig& AdapterVersionDatasetConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestS3Object"))
  {
    m_manifestS3Object = jsonValue.GetObject("ManifestS3Object");

    m_manifestS3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue AdapterVersionDatasetConfig::Jsonize() const
{
  JsonValue payload;

  if(m_manifestS3ObjectHasBeenSet)
  {
   payload.WithObject("ManifestS3Object", m_manifestS3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
