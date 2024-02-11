/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medical-imaging/model/DICOMStudyDateAndTime.h>
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
   * <p>The search input attribute value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/SearchByAttributeValue">AWS
   * API Reference</a></p>
   */
  class SearchByAttributeValue
  {
  public:
    AWS_MEDICALIMAGING_API SearchByAttributeValue();
    AWS_MEDICALIMAGING_API SearchByAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API SearchByAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The patient ID input for search.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const{ return m_dICOMPatientId; }

    /**
     * <p>The patient ID input for search.</p>
     */
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }

    /**
     * <p>The patient ID input for search.</p>
     */
    inline void SetDICOMPatientId(const Aws::String& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = value; }

    /**
     * <p>The patient ID input for search.</p>
     */
    inline void SetDICOMPatientId(Aws::String&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::move(value); }

    /**
     * <p>The patient ID input for search.</p>
     */
    inline void SetDICOMPatientId(const char* value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId.assign(value); }

    /**
     * <p>The patient ID input for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMPatientId(const Aws::String& value) { SetDICOMPatientId(value); return *this;}

    /**
     * <p>The patient ID input for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMPatientId(Aws::String&& value) { SetDICOMPatientId(std::move(value)); return *this;}

    /**
     * <p>The patient ID input for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMPatientId(const char* value) { SetDICOMPatientId(value); return *this;}


    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const{ return m_dICOMAccessionNumber; }

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline void SetDICOMAccessionNumber(const Aws::String& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = value; }

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline void SetDICOMAccessionNumber(Aws::String&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::move(value); }

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline void SetDICOMAccessionNumber(const char* value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber.assign(value); }

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMAccessionNumber(const Aws::String& value) { SetDICOMAccessionNumber(value); return *this;}

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMAccessionNumber(Aws::String&& value) { SetDICOMAccessionNumber(std::move(value)); return *this;}

    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMAccessionNumber(const char* value) { SetDICOMAccessionNumber(value); return *this;}


    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const{ return m_dICOMStudyId; }

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline void SetDICOMStudyId(const Aws::String& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = value; }

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline void SetDICOMStudyId(Aws::String&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::move(value); }

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline void SetDICOMStudyId(const char* value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId.assign(value); }

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyId(const Aws::String& value) { SetDICOMStudyId(value); return *this;}

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyId(Aws::String&& value) { SetDICOMStudyId(std::move(value)); return *this;}

    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyId(const char* value) { SetDICOMStudyId(value); return *this;}


    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const{ return m_dICOMStudyInstanceUID; }

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline void SetDICOMStudyInstanceUID(const Aws::String& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = value; }

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline void SetDICOMStudyInstanceUID(Aws::String&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::move(value); }

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline void SetDICOMStudyInstanceUID(const char* value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID.assign(value); }

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(const Aws::String& value) { SetDICOMStudyInstanceUID(value); return *this;}

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(Aws::String&& value) { SetDICOMStudyInstanceUID(std::move(value)); return *this;}

    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(const char* value) { SetDICOMStudyInstanceUID(value); return *this;}


    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline SearchByAttributeValue& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline SearchByAttributeValue& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline const DICOMStudyDateAndTime& GetDICOMStudyDateAndTime() const{ return m_dICOMStudyDateAndTime; }

    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline bool DICOMStudyDateAndTimeHasBeenSet() const { return m_dICOMStudyDateAndTimeHasBeenSet; }

    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline void SetDICOMStudyDateAndTime(const DICOMStudyDateAndTime& value) { m_dICOMStudyDateAndTimeHasBeenSet = true; m_dICOMStudyDateAndTime = value; }

    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline void SetDICOMStudyDateAndTime(DICOMStudyDateAndTime&& value) { m_dICOMStudyDateAndTimeHasBeenSet = true; m_dICOMStudyDateAndTime = std::move(value); }

    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyDateAndTime(const DICOMStudyDateAndTime& value) { SetDICOMStudyDateAndTime(value); return *this;}

    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline SearchByAttributeValue& WithDICOMStudyDateAndTime(DICOMStudyDateAndTime&& value) { SetDICOMStudyDateAndTime(std::move(value)); return *this;}

  private:

    Aws::String m_dICOMPatientId;
    bool m_dICOMPatientIdHasBeenSet = false;

    Aws::String m_dICOMAccessionNumber;
    bool m_dICOMAccessionNumberHasBeenSet = false;

    Aws::String m_dICOMStudyId;
    bool m_dICOMStudyIdHasBeenSet = false;

    Aws::String m_dICOMStudyInstanceUID;
    bool m_dICOMStudyInstanceUIDHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DICOMStudyDateAndTime m_dICOMStudyDateAndTime;
    bool m_dICOMStudyDateAndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
