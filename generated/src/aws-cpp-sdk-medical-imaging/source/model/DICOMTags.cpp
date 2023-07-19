/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DICOMTags.h>
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

DICOMTags::DICOMTags() : 
    m_dICOMPatientIdHasBeenSet(false),
    m_dICOMPatientNameHasBeenSet(false),
    m_dICOMPatientBirthDateHasBeenSet(false),
    m_dICOMPatientSexHasBeenSet(false),
    m_dICOMStudyInstanceUIDHasBeenSet(false),
    m_dICOMStudyIdHasBeenSet(false),
    m_dICOMStudyDescriptionHasBeenSet(false),
    m_dICOMNumberOfStudyRelatedSeries(0),
    m_dICOMNumberOfStudyRelatedSeriesHasBeenSet(false),
    m_dICOMNumberOfStudyRelatedInstances(0),
    m_dICOMNumberOfStudyRelatedInstancesHasBeenSet(false),
    m_dICOMAccessionNumberHasBeenSet(false),
    m_dICOMStudyDateHasBeenSet(false),
    m_dICOMStudyTimeHasBeenSet(false)
{
}

DICOMTags::DICOMTags(JsonView jsonValue) : 
    m_dICOMPatientIdHasBeenSet(false),
    m_dICOMPatientNameHasBeenSet(false),
    m_dICOMPatientBirthDateHasBeenSet(false),
    m_dICOMPatientSexHasBeenSet(false),
    m_dICOMStudyInstanceUIDHasBeenSet(false),
    m_dICOMStudyIdHasBeenSet(false),
    m_dICOMStudyDescriptionHasBeenSet(false),
    m_dICOMNumberOfStudyRelatedSeries(0),
    m_dICOMNumberOfStudyRelatedSeriesHasBeenSet(false),
    m_dICOMNumberOfStudyRelatedInstances(0),
    m_dICOMNumberOfStudyRelatedInstancesHasBeenSet(false),
    m_dICOMAccessionNumberHasBeenSet(false),
    m_dICOMStudyDateHasBeenSet(false),
    m_dICOMStudyTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DICOMTags& DICOMTags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DICOMPatientId"))
  {
    m_dICOMPatientId = jsonValue.GetString("DICOMPatientId");

    m_dICOMPatientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMPatientName"))
  {
    m_dICOMPatientName = jsonValue.GetString("DICOMPatientName");

    m_dICOMPatientNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMPatientBirthDate"))
  {
    m_dICOMPatientBirthDate = jsonValue.GetString("DICOMPatientBirthDate");

    m_dICOMPatientBirthDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMPatientSex"))
  {
    m_dICOMPatientSex = jsonValue.GetString("DICOMPatientSex");

    m_dICOMPatientSexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMStudyInstanceUID"))
  {
    m_dICOMStudyInstanceUID = jsonValue.GetString("DICOMStudyInstanceUID");

    m_dICOMStudyInstanceUIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMStudyId"))
  {
    m_dICOMStudyId = jsonValue.GetString("DICOMStudyId");

    m_dICOMStudyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMStudyDescription"))
  {
    m_dICOMStudyDescription = jsonValue.GetString("DICOMStudyDescription");

    m_dICOMStudyDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMNumberOfStudyRelatedSeries"))
  {
    m_dICOMNumberOfStudyRelatedSeries = jsonValue.GetInteger("DICOMNumberOfStudyRelatedSeries");

    m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMNumberOfStudyRelatedInstances"))
  {
    m_dICOMNumberOfStudyRelatedInstances = jsonValue.GetInteger("DICOMNumberOfStudyRelatedInstances");

    m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DICOMAccessionNumber"))
  {
    m_dICOMAccessionNumber = jsonValue.GetString("DICOMAccessionNumber");

    m_dICOMAccessionNumberHasBeenSet = true;
  }

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

JsonValue DICOMTags::Jsonize() const
{
  JsonValue payload;

  if(m_dICOMPatientIdHasBeenSet)
  {
   payload.WithString("DICOMPatientId", m_dICOMPatientId);

  }

  if(m_dICOMPatientNameHasBeenSet)
  {
   payload.WithString("DICOMPatientName", m_dICOMPatientName);

  }

  if(m_dICOMPatientBirthDateHasBeenSet)
  {
   payload.WithString("DICOMPatientBirthDate", m_dICOMPatientBirthDate);

  }

  if(m_dICOMPatientSexHasBeenSet)
  {
   payload.WithString("DICOMPatientSex", m_dICOMPatientSex);

  }

  if(m_dICOMStudyInstanceUIDHasBeenSet)
  {
   payload.WithString("DICOMStudyInstanceUID", m_dICOMStudyInstanceUID);

  }

  if(m_dICOMStudyIdHasBeenSet)
  {
   payload.WithString("DICOMStudyId", m_dICOMStudyId);

  }

  if(m_dICOMStudyDescriptionHasBeenSet)
  {
   payload.WithString("DICOMStudyDescription", m_dICOMStudyDescription);

  }

  if(m_dICOMNumberOfStudyRelatedSeriesHasBeenSet)
  {
   payload.WithInteger("DICOMNumberOfStudyRelatedSeries", m_dICOMNumberOfStudyRelatedSeries);

  }

  if(m_dICOMNumberOfStudyRelatedInstancesHasBeenSet)
  {
   payload.WithInteger("DICOMNumberOfStudyRelatedInstances", m_dICOMNumberOfStudyRelatedInstances);

  }

  if(m_dICOMAccessionNumberHasBeenSet)
  {
   payload.WithString("DICOMAccessionNumber", m_dICOMAccessionNumber);

  }

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
