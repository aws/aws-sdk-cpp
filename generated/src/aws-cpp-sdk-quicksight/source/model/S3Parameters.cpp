/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/S3Parameters.h>
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

S3Parameters::S3Parameters() : 
    m_manifestFileLocationHasBeenSet(false)
{
}

S3Parameters::S3Parameters(JsonView jsonValue) : 
    m_manifestFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

S3Parameters& S3Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestFileLocation"))
  {
    m_manifestFileLocation = jsonValue.GetObject("ManifestFileLocation");

    m_manifestFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_manifestFileLocationHasBeenSet)
  {
   payload.WithObject("ManifestFileLocation", m_manifestFileLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
