/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopyDestinationImageSet.h>
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

CopyDestinationImageSet::CopyDestinationImageSet() : 
    m_imageSetIdHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false)
{
}

CopyDestinationImageSet::CopyDestinationImageSet(JsonView jsonValue) : 
    m_imageSetIdHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

CopyDestinationImageSet& CopyDestinationImageSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageSetId"))
  {
    m_imageSetId = jsonValue.GetString("imageSetId");

    m_imageSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestVersionId"))
  {
    m_latestVersionId = jsonValue.GetString("latestVersionId");

    m_latestVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyDestinationImageSet::Jsonize() const
{
  JsonValue payload;

  if(m_imageSetIdHasBeenSet)
  {
   payload.WithString("imageSetId", m_imageSetId);

  }

  if(m_latestVersionIdHasBeenSet)
  {
   payload.WithString("latestVersionId", m_latestVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
