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


    ///@{
    /**
     * <p>The patient ID input for search.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const{ return m_dICOMPatientId; }
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }
    inline void SetDICOMPatientId(const Aws::String& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = value; }
    inline void SetDICOMPatientId(Aws::String&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::move(value); }
    inline void SetDICOMPatientId(const char* value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId.assign(value); }
    inline SearchByAttributeValue& WithDICOMPatientId(const Aws::String& value) { SetDICOMPatientId(value); return *this;}
    inline SearchByAttributeValue& WithDICOMPatientId(Aws::String&& value) { SetDICOMPatientId(std::move(value)); return *this;}
    inline SearchByAttributeValue& WithDICOMPatientId(const char* value) { SetDICOMPatientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const{ return m_dICOMAccessionNumber; }
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }
    inline void SetDICOMAccessionNumber(const Aws::String& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = value; }
    inline void SetDICOMAccessionNumber(Aws::String&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::move(value); }
    inline void SetDICOMAccessionNumber(const char* value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber.assign(value); }
    inline SearchByAttributeValue& WithDICOMAccessionNumber(const Aws::String& value) { SetDICOMAccessionNumber(value); return *this;}
    inline SearchByAttributeValue& WithDICOMAccessionNumber(Aws::String&& value) { SetDICOMAccessionNumber(std::move(value)); return *this;}
    inline SearchByAttributeValue& WithDICOMAccessionNumber(const char* value) { SetDICOMAccessionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const{ return m_dICOMStudyId; }
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }
    inline void SetDICOMStudyId(const Aws::String& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = value; }
    inline void SetDICOMStudyId(Aws::String&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::move(value); }
    inline void SetDICOMStudyId(const char* value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId.assign(value); }
    inline SearchByAttributeValue& WithDICOMStudyId(const Aws::String& value) { SetDICOMStudyId(value); return *this;}
    inline SearchByAttributeValue& WithDICOMStudyId(Aws::String&& value) { SetDICOMStudyId(std::move(value)); return *this;}
    inline SearchByAttributeValue& WithDICOMStudyId(const char* value) { SetDICOMStudyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const{ return m_dICOMStudyInstanceUID; }
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }
    inline void SetDICOMStudyInstanceUID(const Aws::String& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = value; }
    inline void SetDICOMStudyInstanceUID(Aws::String&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::move(value); }
    inline void SetDICOMStudyInstanceUID(const char* value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID.assign(value); }
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(const Aws::String& value) { SetDICOMStudyInstanceUID(value); return *this;}
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(Aws::String&& value) { SetDICOMStudyInstanceUID(std::move(value)); return *this;}
    inline SearchByAttributeValue& WithDICOMStudyInstanceUID(const char* value) { SetDICOMStudyInstanceUID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Series Instance UID input for search.</p>
     */
    inline const Aws::String& GetDICOMSeriesInstanceUID() const{ return m_dICOMSeriesInstanceUID; }
    inline bool DICOMSeriesInstanceUIDHasBeenSet() const { return m_dICOMSeriesInstanceUIDHasBeenSet; }
    inline void SetDICOMSeriesInstanceUID(const Aws::String& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = value; }
    inline void SetDICOMSeriesInstanceUID(Aws::String&& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = std::move(value); }
    inline void SetDICOMSeriesInstanceUID(const char* value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID.assign(value); }
    inline SearchByAttributeValue& WithDICOMSeriesInstanceUID(const Aws::String& value) { SetDICOMSeriesInstanceUID(value); return *this;}
    inline SearchByAttributeValue& WithDICOMSeriesInstanceUID(Aws::String&& value) { SetDICOMSeriesInstanceUID(std::move(value)); return *this;}
    inline SearchByAttributeValue& WithDICOMSeriesInstanceUID(const char* value) { SetDICOMSeriesInstanceUID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SearchByAttributeValue& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SearchByAttributeValue& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp input for search.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline SearchByAttributeValue& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline SearchByAttributeValue& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline const DICOMStudyDateAndTime& GetDICOMStudyDateAndTime() const{ return m_dICOMStudyDateAndTime; }
    inline bool DICOMStudyDateAndTimeHasBeenSet() const { return m_dICOMStudyDateAndTimeHasBeenSet; }
    inline void SetDICOMStudyDateAndTime(const DICOMStudyDateAndTime& value) { m_dICOMStudyDateAndTimeHasBeenSet = true; m_dICOMStudyDateAndTime = value; }
    inline void SetDICOMStudyDateAndTime(DICOMStudyDateAndTime&& value) { m_dICOMStudyDateAndTimeHasBeenSet = true; m_dICOMStudyDateAndTime = std::move(value); }
    inline SearchByAttributeValue& WithDICOMStudyDateAndTime(const DICOMStudyDateAndTime& value) { SetDICOMStudyDateAndTime(value); return *this;}
    inline SearchByAttributeValue& WithDICOMStudyDateAndTime(DICOMStudyDateAndTime&& value) { SetDICOMStudyDateAndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dICOMPatientId;
    bool m_dICOMPatientIdHasBeenSet = false;

    Aws::String m_dICOMAccessionNumber;
    bool m_dICOMAccessionNumberHasBeenSet = false;

    Aws::String m_dICOMStudyId;
    bool m_dICOMStudyIdHasBeenSet = false;

    Aws::String m_dICOMStudyInstanceUID;
    bool m_dICOMStudyInstanceUIDHasBeenSet = false;

    Aws::String m_dICOMSeriesInstanceUID;
    bool m_dICOMSeriesInstanceUIDHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    DICOMStudyDateAndTime m_dICOMStudyDateAndTime;
    bool m_dICOMStudyDateAndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
