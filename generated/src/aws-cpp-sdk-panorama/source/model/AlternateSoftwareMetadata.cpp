/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/AlternateSoftwareMetadata.h>
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

AlternateSoftwareMetadata::AlternateSoftwareMetadata() : 
    m_versionHasBeenSet(false)
{
}

AlternateSoftwareMetadata::AlternateSoftwareMetadata(JsonView jsonValue) : 
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

AlternateSoftwareMetadata& AlternateSoftwareMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue AlternateSoftwareMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
