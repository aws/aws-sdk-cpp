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
    AWS_MEDICALIMAGING_API SearchByAttributeValue() = default;
    AWS_MEDICALIMAGING_API SearchByAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API SearchByAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The patient ID input for search.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const { return m_dICOMPatientId; }
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }
    template<typename DICOMPatientIdT = Aws::String>
    void SetDICOMPatientId(DICOMPatientIdT&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::forward<DICOMPatientIdT>(value); }
    template<typename DICOMPatientIdT = Aws::String>
    SearchByAttributeValue& WithDICOMPatientId(DICOMPatientIdT&& value) { SetDICOMPatientId(std::forward<DICOMPatientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM accession number for search.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const { return m_dICOMAccessionNumber; }
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }
    template<typename DICOMAccessionNumberT = Aws::String>
    void SetDICOMAccessionNumber(DICOMAccessionNumberT&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::forward<DICOMAccessionNumberT>(value); }
    template<typename DICOMAccessionNumberT = Aws::String>
    SearchByAttributeValue& WithDICOMAccessionNumber(DICOMAccessionNumberT&& value) { SetDICOMAccessionNumber(std::forward<DICOMAccessionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM study ID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const { return m_dICOMStudyId; }
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }
    template<typename DICOMStudyIdT = Aws::String>
    void SetDICOMStudyId(DICOMStudyIdT&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::forward<DICOMStudyIdT>(value); }
    template<typename DICOMStudyIdT = Aws::String>
    SearchByAttributeValue& WithDICOMStudyId(DICOMStudyIdT&& value) { SetDICOMStudyId(std::forward<DICOMStudyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM study instance UID for search.</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const { return m_dICOMStudyInstanceUID; }
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }
    template<typename DICOMStudyInstanceUIDT = Aws::String>
    void SetDICOMStudyInstanceUID(DICOMStudyInstanceUIDT&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::forward<DICOMStudyInstanceUIDT>(value); }
    template<typename DICOMStudyInstanceUIDT = Aws::String>
    SearchByAttributeValue& WithDICOMStudyInstanceUID(DICOMStudyInstanceUIDT&& value) { SetDICOMStudyInstanceUID(std::forward<DICOMStudyInstanceUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Series Instance UID input for search.</p>
     */
    inline const Aws::String& GetDICOMSeriesInstanceUID() const { return m_dICOMSeriesInstanceUID; }
    inline bool DICOMSeriesInstanceUIDHasBeenSet() const { return m_dICOMSeriesInstanceUIDHasBeenSet; }
    template<typename DICOMSeriesInstanceUIDT = Aws::String>
    void SetDICOMSeriesInstanceUID(DICOMSeriesInstanceUIDT&& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = std::forward<DICOMSeriesInstanceUIDT>(value); }
    template<typename DICOMSeriesInstanceUIDT = Aws::String>
    SearchByAttributeValue& WithDICOMSeriesInstanceUID(DICOMSeriesInstanceUIDT&& value) { SetDICOMSeriesInstanceUID(std::forward<DICOMSeriesInstanceUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The created at time of the image set provided for search.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SearchByAttributeValue& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp input for search.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    SearchByAttributeValue& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated structure containing DICOM study date and study time for
     * search.</p>
     */
    inline const DICOMStudyDateAndTime& GetDICOMStudyDateAndTime() const { return m_dICOMStudyDateAndTime; }
    inline bool DICOMStudyDateAndTimeHasBeenSet() const { return m_dICOMStudyDateAndTimeHasBeenSet; }
    template<typename DICOMStudyDateAndTimeT = DICOMStudyDateAndTime>
    void SetDICOMStudyDateAndTime(DICOMStudyDateAndTimeT&& value) { m_dICOMStudyDateAndTimeHasBeenSet = true; m_dICOMStudyDateAndTime = std::forward<DICOMStudyDateAndTimeT>(value); }
    template<typename DICOMStudyDateAndTimeT = DICOMStudyDateAndTime>
    SearchByAttributeValue& WithDICOMStudyDateAndTime(DICOMStudyDateAndTimeT&& value) { SetDICOMStudyDateAndTime(std::forward<DICOMStudyDateAndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary image set flag provided for search.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline SearchByAttributeValue& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    DICOMStudyDateAndTime m_dICOMStudyDateAndTime;
    bool m_dICOMStudyDateAndTimeHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
