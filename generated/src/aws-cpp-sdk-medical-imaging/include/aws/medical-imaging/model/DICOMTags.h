/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>The DICOM attributes returned as a part of a response. Each image set has
   * these properties as part of a search result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DICOMTags">AWS
   * API Reference</a></p>
   */
  class DICOMTags
  {
  public:
    AWS_MEDICALIMAGING_API DICOMTags();
    AWS_MEDICALIMAGING_API DICOMTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const{ return m_dICOMPatientId; }
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }
    inline void SetDICOMPatientId(const Aws::String& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = value; }
    inline void SetDICOMPatientId(Aws::String&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::move(value); }
    inline void SetDICOMPatientId(const char* value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId.assign(value); }
    inline DICOMTags& WithDICOMPatientId(const Aws::String& value) { SetDICOMPatientId(value); return *this;}
    inline DICOMTags& WithDICOMPatientId(Aws::String&& value) { SetDICOMPatientId(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMPatientId(const char* value) { SetDICOMPatientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient name.</p>
     */
    inline const Aws::String& GetDICOMPatientName() const{ return m_dICOMPatientName; }
    inline bool DICOMPatientNameHasBeenSet() const { return m_dICOMPatientNameHasBeenSet; }
    inline void SetDICOMPatientName(const Aws::String& value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName = value; }
    inline void SetDICOMPatientName(Aws::String&& value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName = std::move(value); }
    inline void SetDICOMPatientName(const char* value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName.assign(value); }
    inline DICOMTags& WithDICOMPatientName(const Aws::String& value) { SetDICOMPatientName(value); return *this;}
    inline DICOMTags& WithDICOMPatientName(Aws::String&& value) { SetDICOMPatientName(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMPatientName(const char* value) { SetDICOMPatientName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient birth date.</p>
     */
    inline const Aws::String& GetDICOMPatientBirthDate() const{ return m_dICOMPatientBirthDate; }
    inline bool DICOMPatientBirthDateHasBeenSet() const { return m_dICOMPatientBirthDateHasBeenSet; }
    inline void SetDICOMPatientBirthDate(const Aws::String& value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate = value; }
    inline void SetDICOMPatientBirthDate(Aws::String&& value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate = std::move(value); }
    inline void SetDICOMPatientBirthDate(const char* value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate.assign(value); }
    inline DICOMTags& WithDICOMPatientBirthDate(const Aws::String& value) { SetDICOMPatientBirthDate(value); return *this;}
    inline DICOMTags& WithDICOMPatientBirthDate(Aws::String&& value) { SetDICOMPatientBirthDate(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMPatientBirthDate(const char* value) { SetDICOMPatientBirthDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient sex.</p>
     */
    inline const Aws::String& GetDICOMPatientSex() const{ return m_dICOMPatientSex; }
    inline bool DICOMPatientSexHasBeenSet() const { return m_dICOMPatientSexHasBeenSet; }
    inline void SetDICOMPatientSex(const Aws::String& value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex = value; }
    inline void SetDICOMPatientSex(Aws::String&& value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex = std::move(value); }
    inline void SetDICOMPatientSex(const char* value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex.assign(value); }
    inline DICOMTags& WithDICOMPatientSex(const Aws::String& value) { SetDICOMPatientSex(value); return *this;}
    inline DICOMTags& WithDICOMPatientSex(Aws::String&& value) { SetDICOMPatientSex(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMPatientSex(const char* value) { SetDICOMPatientSex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Study Instance UID.</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const{ return m_dICOMStudyInstanceUID; }
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }
    inline void SetDICOMStudyInstanceUID(const Aws::String& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = value; }
    inline void SetDICOMStudyInstanceUID(Aws::String&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::move(value); }
    inline void SetDICOMStudyInstanceUID(const char* value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID.assign(value); }
    inline DICOMTags& WithDICOMStudyInstanceUID(const Aws::String& value) { SetDICOMStudyInstanceUID(value); return *this;}
    inline DICOMTags& WithDICOMStudyInstanceUID(Aws::String&& value) { SetDICOMStudyInstanceUID(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMStudyInstanceUID(const char* value) { SetDICOMStudyInstanceUID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Study ID.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const{ return m_dICOMStudyId; }
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }
    inline void SetDICOMStudyId(const Aws::String& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = value; }
    inline void SetDICOMStudyId(Aws::String&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::move(value); }
    inline void SetDICOMStudyId(const char* value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId.assign(value); }
    inline DICOMTags& WithDICOMStudyId(const Aws::String& value) { SetDICOMStudyId(value); return *this;}
    inline DICOMTags& WithDICOMStudyId(Aws::String&& value) { SetDICOMStudyId(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMStudyId(const char* value) { SetDICOMStudyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided Study Description.</p>
     */
    inline const Aws::String& GetDICOMStudyDescription() const{ return m_dICOMStudyDescription; }
    inline bool DICOMStudyDescriptionHasBeenSet() const { return m_dICOMStudyDescriptionHasBeenSet; }
    inline void SetDICOMStudyDescription(const Aws::String& value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription = value; }
    inline void SetDICOMStudyDescription(Aws::String&& value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription = std::move(value); }
    inline void SetDICOMStudyDescription(const char* value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription.assign(value); }
    inline DICOMTags& WithDICOMStudyDescription(const Aws::String& value) { SetDICOMStudyDescription(value); return *this;}
    inline DICOMTags& WithDICOMStudyDescription(Aws::String&& value) { SetDICOMStudyDescription(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMStudyDescription(const char* value) { SetDICOMStudyDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedSeries() const{ return m_dICOMNumberOfStudyRelatedSeries; }
    inline bool DICOMNumberOfStudyRelatedSeriesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedSeriesHasBeenSet; }
    inline void SetDICOMNumberOfStudyRelatedSeries(int value) { m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = true; m_dICOMNumberOfStudyRelatedSeries = value; }
    inline DICOMTags& WithDICOMNumberOfStudyRelatedSeries(int value) { SetDICOMNumberOfStudyRelatedSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedInstances() const{ return m_dICOMNumberOfStudyRelatedInstances; }
    inline bool DICOMNumberOfStudyRelatedInstancesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedInstancesHasBeenSet; }
    inline void SetDICOMNumberOfStudyRelatedInstances(int value) { m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = true; m_dICOMNumberOfStudyRelatedInstances = value; }
    inline DICOMTags& WithDICOMNumberOfStudyRelatedInstances(int value) { SetDICOMNumberOfStudyRelatedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const{ return m_dICOMAccessionNumber; }
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }
    inline void SetDICOMAccessionNumber(const Aws::String& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = value; }
    inline void SetDICOMAccessionNumber(Aws::String&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::move(value); }
    inline void SetDICOMAccessionNumber(const char* value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber.assign(value); }
    inline DICOMTags& WithDICOMAccessionNumber(const Aws::String& value) { SetDICOMAccessionNumber(value); return *this;}
    inline DICOMTags& WithDICOMAccessionNumber(Aws::String&& value) { SetDICOMAccessionNumber(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMAccessionNumber(const char* value) { SetDICOMAccessionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Series Instance UID.</p>
     */
    inline const Aws::String& GetDICOMSeriesInstanceUID() const{ return m_dICOMSeriesInstanceUID; }
    inline bool DICOMSeriesInstanceUIDHasBeenSet() const { return m_dICOMSeriesInstanceUIDHasBeenSet; }
    inline void SetDICOMSeriesInstanceUID(const Aws::String& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = value; }
    inline void SetDICOMSeriesInstanceUID(Aws::String&& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = std::move(value); }
    inline void SetDICOMSeriesInstanceUID(const char* value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID.assign(value); }
    inline DICOMTags& WithDICOMSeriesInstanceUID(const Aws::String& value) { SetDICOMSeriesInstanceUID(value); return *this;}
    inline DICOMTags& WithDICOMSeriesInstanceUID(Aws::String&& value) { SetDICOMSeriesInstanceUID(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMSeriesInstanceUID(const char* value) { SetDICOMSeriesInstanceUID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the series Modality.</p>
     */
    inline const Aws::String& GetDICOMSeriesModality() const{ return m_dICOMSeriesModality; }
    inline bool DICOMSeriesModalityHasBeenSet() const { return m_dICOMSeriesModalityHasBeenSet; }
    inline void SetDICOMSeriesModality(const Aws::String& value) { m_dICOMSeriesModalityHasBeenSet = true; m_dICOMSeriesModality = value; }
    inline void SetDICOMSeriesModality(Aws::String&& value) { m_dICOMSeriesModalityHasBeenSet = true; m_dICOMSeriesModality = std::move(value); }
    inline void SetDICOMSeriesModality(const char* value) { m_dICOMSeriesModalityHasBeenSet = true; m_dICOMSeriesModality.assign(value); }
    inline DICOMTags& WithDICOMSeriesModality(const Aws::String& value) { SetDICOMSeriesModality(value); return *this;}
    inline DICOMTags& WithDICOMSeriesModality(Aws::String&& value) { SetDICOMSeriesModality(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMSeriesModality(const char* value) { SetDICOMSeriesModality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the series Body Part Examined.</p>
     */
    inline const Aws::String& GetDICOMSeriesBodyPart() const{ return m_dICOMSeriesBodyPart; }
    inline bool DICOMSeriesBodyPartHasBeenSet() const { return m_dICOMSeriesBodyPartHasBeenSet; }
    inline void SetDICOMSeriesBodyPart(const Aws::String& value) { m_dICOMSeriesBodyPartHasBeenSet = true; m_dICOMSeriesBodyPart = value; }
    inline void SetDICOMSeriesBodyPart(Aws::String&& value) { m_dICOMSeriesBodyPartHasBeenSet = true; m_dICOMSeriesBodyPart = std::move(value); }
    inline void SetDICOMSeriesBodyPart(const char* value) { m_dICOMSeriesBodyPartHasBeenSet = true; m_dICOMSeriesBodyPart.assign(value); }
    inline DICOMTags& WithDICOMSeriesBodyPart(const Aws::String& value) { SetDICOMSeriesBodyPart(value); return *this;}
    inline DICOMTags& WithDICOMSeriesBodyPart(Aws::String&& value) { SetDICOMSeriesBodyPart(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMSeriesBodyPart(const char* value) { SetDICOMSeriesBodyPart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Series Number.</p>
     */
    inline int GetDICOMSeriesNumber() const{ return m_dICOMSeriesNumber; }
    inline bool DICOMSeriesNumberHasBeenSet() const { return m_dICOMSeriesNumberHasBeenSet; }
    inline void SetDICOMSeriesNumber(int value) { m_dICOMSeriesNumberHasBeenSet = true; m_dICOMSeriesNumber = value; }
    inline DICOMTags& WithDICOMSeriesNumber(int value) { SetDICOMSeriesNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The study date.</p>
     */
    inline const Aws::String& GetDICOMStudyDate() const{ return m_dICOMStudyDate; }
    inline bool DICOMStudyDateHasBeenSet() const { return m_dICOMStudyDateHasBeenSet; }
    inline void SetDICOMStudyDate(const Aws::String& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = value; }
    inline void SetDICOMStudyDate(Aws::String&& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = std::move(value); }
    inline void SetDICOMStudyDate(const char* value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate.assign(value); }
    inline DICOMTags& WithDICOMStudyDate(const Aws::String& value) { SetDICOMStudyDate(value); return *this;}
    inline DICOMTags& WithDICOMStudyDate(Aws::String&& value) { SetDICOMStudyDate(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMStudyDate(const char* value) { SetDICOMStudyDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The study time.</p>
     */
    inline const Aws::String& GetDICOMStudyTime() const{ return m_dICOMStudyTime; }
    inline bool DICOMStudyTimeHasBeenSet() const { return m_dICOMStudyTimeHasBeenSet; }
    inline void SetDICOMStudyTime(const Aws::String& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = value; }
    inline void SetDICOMStudyTime(Aws::String&& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = std::move(value); }
    inline void SetDICOMStudyTime(const char* value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime.assign(value); }
    inline DICOMTags& WithDICOMStudyTime(const Aws::String& value) { SetDICOMStudyTime(value); return *this;}
    inline DICOMTags& WithDICOMStudyTime(Aws::String&& value) { SetDICOMStudyTime(std::move(value)); return *this;}
    inline DICOMTags& WithDICOMStudyTime(const char* value) { SetDICOMStudyTime(value); return *this;}
    ///@}
  private:

    Aws::String m_dICOMPatientId;
    bool m_dICOMPatientIdHasBeenSet = false;

    Aws::String m_dICOMPatientName;
    bool m_dICOMPatientNameHasBeenSet = false;

    Aws::String m_dICOMPatientBirthDate;
    bool m_dICOMPatientBirthDateHasBeenSet = false;

    Aws::String m_dICOMPatientSex;
    bool m_dICOMPatientSexHasBeenSet = false;

    Aws::String m_dICOMStudyInstanceUID;
    bool m_dICOMStudyInstanceUIDHasBeenSet = false;

    Aws::String m_dICOMStudyId;
    bool m_dICOMStudyIdHasBeenSet = false;

    Aws::String m_dICOMStudyDescription;
    bool m_dICOMStudyDescriptionHasBeenSet = false;

    int m_dICOMNumberOfStudyRelatedSeries;
    bool m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = false;

    int m_dICOMNumberOfStudyRelatedInstances;
    bool m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = false;

    Aws::String m_dICOMAccessionNumber;
    bool m_dICOMAccessionNumberHasBeenSet = false;

    Aws::String m_dICOMSeriesInstanceUID;
    bool m_dICOMSeriesInstanceUIDHasBeenSet = false;

    Aws::String m_dICOMSeriesModality;
    bool m_dICOMSeriesModalityHasBeenSet = false;

    Aws::String m_dICOMSeriesBodyPart;
    bool m_dICOMSeriesBodyPartHasBeenSet = false;

    int m_dICOMSeriesNumber;
    bool m_dICOMSeriesNumberHasBeenSet = false;

    Aws::String m_dICOMStudyDate;
    bool m_dICOMStudyDateHasBeenSet = false;

    Aws::String m_dICOMStudyTime;
    bool m_dICOMStudyTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
