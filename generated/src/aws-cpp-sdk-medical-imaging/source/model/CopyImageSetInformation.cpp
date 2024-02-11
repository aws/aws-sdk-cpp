/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopyImageSetInformation.h>
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

CopyImageSetInformation::CopyImageSetInformation() : 
    m_sourceImageSetHasBeenSet(false),
    m_destinationImageSetHasBeenSet(false)
{
}

CopyImageSetInformation::CopyImageSetInformation(JsonView jsonValue) : 
    m_sourceImageSetHasBeenSet(false),
    m_destinationImageSetHasBeenSet(false)
{
  *this = jsonValue;
}

CopyImageSetInformation& CopyImageSetInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceImageSet"))
  {
    m_sourceImageSet = jsonValue.GetObject("sourceImageSet");

    m_sourceImageSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationImageSet"))
  {
    m_destinationImageSet = jsonValue.GetObject("destinationImageSet");

    m_destinationImageSetHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyImageSetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_sourceImageSetHasBeenSet)
  {
   payload.WithObject("sourceImageSet", m_sourceImageSet.Jsonize());

  }

  if(m_destinationImageSetHasBeenSet)
  {
   payload.WithObject("destinationImageSet", m_destinationImageSet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
