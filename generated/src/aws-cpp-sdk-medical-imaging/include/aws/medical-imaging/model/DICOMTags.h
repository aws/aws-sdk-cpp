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


    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const{ return m_dICOMPatientId; }

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline void SetDICOMPatientId(const Aws::String& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = value; }

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline void SetDICOMPatientId(Aws::String&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::move(value); }

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline void SetDICOMPatientId(const char* value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId.assign(value); }

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline DICOMTags& WithDICOMPatientId(const Aws::String& value) { SetDICOMPatientId(value); return *this;}

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline DICOMTags& WithDICOMPatientId(Aws::String&& value) { SetDICOMPatientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline DICOMTags& WithDICOMPatientId(const char* value) { SetDICOMPatientId(value); return *this;}


    /**
     * <p>The patient name.</p>
     */
    inline const Aws::String& GetDICOMPatientName() const{ return m_dICOMPatientName; }

    /**
     * <p>The patient name.</p>
     */
    inline bool DICOMPatientNameHasBeenSet() const { return m_dICOMPatientNameHasBeenSet; }

    /**
     * <p>The patient name.</p>
     */
    inline void SetDICOMPatientName(const Aws::String& value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName = value; }

    /**
     * <p>The patient name.</p>
     */
    inline void SetDICOMPatientName(Aws::String&& value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName = std::move(value); }

    /**
     * <p>The patient name.</p>
     */
    inline void SetDICOMPatientName(const char* value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName.assign(value); }

    /**
     * <p>The patient name.</p>
     */
    inline DICOMTags& WithDICOMPatientName(const Aws::String& value) { SetDICOMPatientName(value); return *this;}

    /**
     * <p>The patient name.</p>
     */
    inline DICOMTags& WithDICOMPatientName(Aws::String&& value) { SetDICOMPatientName(std::move(value)); return *this;}

    /**
     * <p>The patient name.</p>
     */
    inline DICOMTags& WithDICOMPatientName(const char* value) { SetDICOMPatientName(value); return *this;}


    /**
     * <p>The patient birth date.</p>
     */
    inline const Aws::String& GetDICOMPatientBirthDate() const{ return m_dICOMPatientBirthDate; }

    /**
     * <p>The patient birth date.</p>
     */
    inline bool DICOMPatientBirthDateHasBeenSet() const { return m_dICOMPatientBirthDateHasBeenSet; }

    /**
     * <p>The patient birth date.</p>
     */
    inline void SetDICOMPatientBirthDate(const Aws::String& value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate = value; }

    /**
     * <p>The patient birth date.</p>
     */
    inline void SetDICOMPatientBirthDate(Aws::String&& value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate = std::move(value); }

    /**
     * <p>The patient birth date.</p>
     */
    inline void SetDICOMPatientBirthDate(const char* value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate.assign(value); }

    /**
     * <p>The patient birth date.</p>
     */
    inline DICOMTags& WithDICOMPatientBirthDate(const Aws::String& value) { SetDICOMPatientBirthDate(value); return *this;}

    /**
     * <p>The patient birth date.</p>
     */
    inline DICOMTags& WithDICOMPatientBirthDate(Aws::String&& value) { SetDICOMPatientBirthDate(std::move(value)); return *this;}

    /**
     * <p>The patient birth date.</p>
     */
    inline DICOMTags& WithDICOMPatientBirthDate(const char* value) { SetDICOMPatientBirthDate(value); return *this;}


    /**
     * <p>The patient sex.</p>
     */
    inline const Aws::String& GetDICOMPatientSex() const{ return m_dICOMPatientSex; }

    /**
     * <p>The patient sex.</p>
     */
    inline bool DICOMPatientSexHasBeenSet() const { return m_dICOMPatientSexHasBeenSet; }

    /**
     * <p>The patient sex.</p>
     */
    inline void SetDICOMPatientSex(const Aws::String& value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex = value; }

    /**
     * <p>The patient sex.</p>
     */
    inline void SetDICOMPatientSex(Aws::String&& value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex = std::move(value); }

    /**
     * <p>The patient sex.</p>
     */
    inline void SetDICOMPatientSex(const char* value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex.assign(value); }

    /**
     * <p>The patient sex.</p>
     */
    inline DICOMTags& WithDICOMPatientSex(const Aws::String& value) { SetDICOMPatientSex(value); return *this;}

    /**
     * <p>The patient sex.</p>
     */
    inline DICOMTags& WithDICOMPatientSex(Aws::String&& value) { SetDICOMPatientSex(std::move(value)); return *this;}

    /**
     * <p>The patient sex.</p>
     */
    inline DICOMTags& WithDICOMPatientSex(const char* value) { SetDICOMPatientSex(value); return *this;}


    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const{ return m_dICOMStudyInstanceUID; }

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline void SetDICOMStudyInstanceUID(const Aws::String& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = value; }

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline void SetDICOMStudyInstanceUID(Aws::String&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::move(value); }

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline void SetDICOMStudyInstanceUID(const char* value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID.assign(value); }

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline DICOMTags& WithDICOMStudyInstanceUID(const Aws::String& value) { SetDICOMStudyInstanceUID(value); return *this;}

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline DICOMTags& WithDICOMStudyInstanceUID(Aws::String&& value) { SetDICOMStudyInstanceUID(std::move(value)); return *this;}

    /**
     * <p>The DICOM provided identifier for studyInstanceUid.&gt;</p>
     */
    inline DICOMTags& WithDICOMStudyInstanceUID(const char* value) { SetDICOMStudyInstanceUID(value); return *this;}


    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const{ return m_dICOMStudyId; }

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline void SetDICOMStudyId(const Aws::String& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = value; }

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline void SetDICOMStudyId(Aws::String&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::move(value); }

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline void SetDICOMStudyId(const char* value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId.assign(value); }

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline DICOMTags& WithDICOMStudyId(const Aws::String& value) { SetDICOMStudyId(value); return *this;}

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline DICOMTags& WithDICOMStudyId(Aws::String&& value) { SetDICOMStudyId(std::move(value)); return *this;}

    /**
     * <p>The DICOM provided studyId.</p>
     */
    inline DICOMTags& WithDICOMStudyId(const char* value) { SetDICOMStudyId(value); return *this;}


    /**
     * <p>The description of the study.</p>
     */
    inline const Aws::String& GetDICOMStudyDescription() const{ return m_dICOMStudyDescription; }

    /**
     * <p>The description of the study.</p>
     */
    inline bool DICOMStudyDescriptionHasBeenSet() const { return m_dICOMStudyDescriptionHasBeenSet; }

    /**
     * <p>The description of the study.</p>
     */
    inline void SetDICOMStudyDescription(const Aws::String& value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription = value; }

    /**
     * <p>The description of the study.</p>
     */
    inline void SetDICOMStudyDescription(Aws::String&& value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription = std::move(value); }

    /**
     * <p>The description of the study.</p>
     */
    inline void SetDICOMStudyDescription(const char* value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription.assign(value); }

    /**
     * <p>The description of the study.</p>
     */
    inline DICOMTags& WithDICOMStudyDescription(const Aws::String& value) { SetDICOMStudyDescription(value); return *this;}

    /**
     * <p>The description of the study.</p>
     */
    inline DICOMTags& WithDICOMStudyDescription(Aws::String&& value) { SetDICOMStudyDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the study.</p>
     */
    inline DICOMTags& WithDICOMStudyDescription(const char* value) { SetDICOMStudyDescription(value); return *this;}


    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedSeries() const{ return m_dICOMNumberOfStudyRelatedSeries; }

    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline bool DICOMNumberOfStudyRelatedSeriesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedSeriesHasBeenSet; }

    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline void SetDICOMNumberOfStudyRelatedSeries(int value) { m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = true; m_dICOMNumberOfStudyRelatedSeries = value; }

    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline DICOMTags& WithDICOMNumberOfStudyRelatedSeries(int value) { SetDICOMNumberOfStudyRelatedSeries(value); return *this;}


    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedInstances() const{ return m_dICOMNumberOfStudyRelatedInstances; }

    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline bool DICOMNumberOfStudyRelatedInstancesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedInstancesHasBeenSet; }

    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline void SetDICOMNumberOfStudyRelatedInstances(int value) { m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = true; m_dICOMNumberOfStudyRelatedInstances = value; }

    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline DICOMTags& WithDICOMNumberOfStudyRelatedInstances(int value) { SetDICOMNumberOfStudyRelatedInstances(value); return *this;}


    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const{ return m_dICOMAccessionNumber; }

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline void SetDICOMAccessionNumber(const Aws::String& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = value; }

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline void SetDICOMAccessionNumber(Aws::String&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::move(value); }

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline void SetDICOMAccessionNumber(const char* value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber.assign(value); }

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline DICOMTags& WithDICOMAccessionNumber(const Aws::String& value) { SetDICOMAccessionNumber(value); return *this;}

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline DICOMTags& WithDICOMAccessionNumber(Aws::String&& value) { SetDICOMAccessionNumber(std::move(value)); return *this;}

    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline DICOMTags& WithDICOMAccessionNumber(const char* value) { SetDICOMAccessionNumber(value); return *this;}


    /**
     * <p>The study date.</p>
     */
    inline const Aws::String& GetDICOMStudyDate() const{ return m_dICOMStudyDate; }

    /**
     * <p>The study date.</p>
     */
    inline bool DICOMStudyDateHasBeenSet() const { return m_dICOMStudyDateHasBeenSet; }

    /**
     * <p>The study date.</p>
     */
    inline void SetDICOMStudyDate(const Aws::String& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = value; }

    /**
     * <p>The study date.</p>
     */
    inline void SetDICOMStudyDate(Aws::String&& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = std::move(value); }

    /**
     * <p>The study date.</p>
     */
    inline void SetDICOMStudyDate(const char* value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate.assign(value); }

    /**
     * <p>The study date.</p>
     */
    inline DICOMTags& WithDICOMStudyDate(const Aws::String& value) { SetDICOMStudyDate(value); return *this;}

    /**
     * <p>The study date.</p>
     */
    inline DICOMTags& WithDICOMStudyDate(Aws::String&& value) { SetDICOMStudyDate(std::move(value)); return *this;}

    /**
     * <p>The study date.</p>
     */
    inline DICOMTags& WithDICOMStudyDate(const char* value) { SetDICOMStudyDate(value); return *this;}


    /**
     * <p>The study time.</p>
     */
    inline const Aws::String& GetDICOMStudyTime() const{ return m_dICOMStudyTime; }

    /**
     * <p>The study time.</p>
     */
    inline bool DICOMStudyTimeHasBeenSet() const { return m_dICOMStudyTimeHasBeenSet; }

    /**
     * <p>The study time.</p>
     */
    inline void SetDICOMStudyTime(const Aws::String& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = value; }

    /**
     * <p>The study time.</p>
     */
    inline void SetDICOMStudyTime(Aws::String&& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = std::move(value); }

    /**
     * <p>The study time.</p>
     */
    inline void SetDICOMStudyTime(const char* value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime.assign(value); }

    /**
     * <p>The study time.</p>
     */
    inline DICOMTags& WithDICOMStudyTime(const Aws::String& value) { SetDICOMStudyTime(value); return *this;}

    /**
     * <p>The study time.</p>
     */
    inline DICOMTags& WithDICOMStudyTime(Aws::String&& value) { SetDICOMStudyTime(std::move(value)); return *this;}

    /**
     * <p>The study time.</p>
     */
    inline DICOMTags& WithDICOMStudyTime(const char* value) { SetDICOMStudyTime(value); return *this;}

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

    Aws::String m_dICOMStudyDate;
    bool m_dICOMStudyDateHasBeenSet = false;

    Aws::String m_dICOMStudyTime;
    bool m_dICOMStudyTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
