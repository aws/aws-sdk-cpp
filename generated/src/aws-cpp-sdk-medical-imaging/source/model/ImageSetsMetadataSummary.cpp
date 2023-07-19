/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ImageSetsMetadataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

ImageSetsMetadataSummary::ImageSetsMetadataSummary() : 
    m_imageSetIdHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_dICOMTagsHasBeenSet(false)
{
}

ImageSetsMetadataSummary::ImageSetsMetadataSummary(JsonView jsonValue) : 
    m_imageSetIdHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_dICOMTagsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageSetsMetadataSummary& ImageSetsMetadataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageSetId"))
  {
    m_imageSetId = jsonValue.GetString("imageSetId");

    m_imageSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInteger("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMTags"))
  {
    m_dICOMTags = jsonValue.GetObject("DICOMTags");

    m_dICOMTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageSetsMetadataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_imageSetIdHasBeenSet)
  {
   payload.WithString("imageSetId", m_imageSetId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("version", m_version);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_dICOMTagsHasBeenSet)
  {
   payload.WithObject("DICOMTags", m_dICOMTags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
