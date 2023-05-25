/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/StorageLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

StorageLocation::StorageLocation() : 
    m_binaryPrefixLocationHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_generatedPrefixLocationHasBeenSet(false),
    m_manifestPrefixLocationHasBeenSet(false),
    m_repoPrefixLocationHasBeenSet(false)
{
}

StorageLocation::StorageLocation(JsonView jsonValue) : 
    m_binaryPrefixLocationHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_generatedPrefixLocationHasBeenSet(false),
    m_manifestPrefixLocationHasBeenSet(false),
    m_repoPrefixLocationHasBeenSet(false)
{
  *this = jsonValue;
}

StorageLocation& StorageLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BinaryPrefixLocation"))
  {
    m_binaryPrefixLocation = jsonValue.GetString("BinaryPrefixLocation");

    m_binaryPrefixLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedPrefixLocation"))
  {
    m_generatedPrefixLocation = jsonValue.GetString("GeneratedPrefixLocation");

    m_generatedPrefixLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestPrefixLocation"))
  {
    m_manifestPrefixLocation = jsonValue.GetString("ManifestPrefixLocation");

    m_manifestPrefixLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepoPrefixLocation"))
  {
    m_repoPrefixLocation = jsonValue.GetString("RepoPrefixLocation");

    m_repoPrefixLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageLocation::Jsonize() const
{
  JsonValue payload;

  if(m_binaryPrefixLocationHasBeenSet)
  {
   payload.WithString("BinaryPrefixLocation", m_binaryPrefixLocation);

  }

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_generatedPrefixLocationHasBeenSet)
  {
   payload.WithString("GeneratedPrefixLocation", m_generatedPrefixLocation);

  }

  if(m_manifestPrefixLocationHasBeenSet)
  {
   payload.WithString("ManifestPrefixLocation", m_manifestPrefixLocation);

  }

  if(m_repoPrefixLocationHasBeenSet)
  {
   payload.WithString("RepoPrefixLocation", m_repoPrefixLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
