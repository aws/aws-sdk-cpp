/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopySourceImageSetInformation.h>
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

CopySourceImageSetInformation::CopySourceImageSetInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

CopySourceImageSetInformation& CopySourceImageSetInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestVersionId"))
  {
    m_latestVersionId = jsonValue.GetString("latestVersionId");
    m_latestVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMCopies"))
  {
    m_dICOMCopies = jsonValue.GetObject("DICOMCopies");
    m_dICOMCopiesHasBeenSet = true;
  }
  return *this;
}

JsonValue CopySourceImageSetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_latestVersionIdHasBeenSet)
  {
   payload.WithString("latestVersionId", m_latestVersionId);

  }

  if(m_dICOMCopiesHasBeenSet)
  {
   payload.WithObject("DICOMCopies", m_dICOMCopies.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
