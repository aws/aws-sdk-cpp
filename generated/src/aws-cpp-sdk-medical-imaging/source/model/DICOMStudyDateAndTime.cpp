/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DICOMStudyDateAndTime.h>
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

DICOMStudyDateAndTime::DICOMStudyDateAndTime() : 
    m_dICOMStudyDateHasBeenSet(false),
    m_dICOMStudyTimeHasBeenSet(false)
{
}

DICOMStudyDateAndTime::DICOMStudyDateAndTime(JsonView jsonValue) : 
    m_dICOMStudyDateHasBeenSet(false),
    m_dICOMStudyTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DICOMStudyDateAndTime& DICOMStudyDateAndTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DICOMStudyDate"))
  {
    m_dICOMStudyDate = jsonValue.GetString("DICOMStudyDate");

    m_dICOMStudyDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMStudyTime"))
  {
    m_dICOMStudyTime = jsonValue.GetString("DICOMStudyTime");

    m_dICOMStudyTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DICOMStudyDateAndTime::Jsonize() const
{
  JsonValue payload;

  if(m_dICOMStudyDateHasBeenSet)
  {
   payload.WithString("DICOMStudyDate", m_dICOMStudyDate);

  }

  if(m_dICOMStudyTimeHasBeenSet)
  {
   payload.WithString("DICOMStudyTime", m_dICOMStudyTime);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
