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
    AWS_MEDICALIMAGING_API DICOMTags() = default;
    AWS_MEDICALIMAGING_API DICOMTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a patient in a DICOM Study.</p>
     */
    inline const Aws::String& GetDICOMPatientId() const { return m_dICOMPatientId; }
    inline bool DICOMPatientIdHasBeenSet() const { return m_dICOMPatientIdHasBeenSet; }
    template<typename DICOMPatientIdT = Aws::String>
    void SetDICOMPatientId(DICOMPatientIdT&& value) { m_dICOMPatientIdHasBeenSet = true; m_dICOMPatientId = std::forward<DICOMPatientIdT>(value); }
    template<typename DICOMPatientIdT = Aws::String>
    DICOMTags& WithDICOMPatientId(DICOMPatientIdT&& value) { SetDICOMPatientId(std::forward<DICOMPatientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient name.</p>
     */
    inline const Aws::String& GetDICOMPatientName() const { return m_dICOMPatientName; }
    inline bool DICOMPatientNameHasBeenSet() const { return m_dICOMPatientNameHasBeenSet; }
    template<typename DICOMPatientNameT = Aws::String>
    void SetDICOMPatientName(DICOMPatientNameT&& value) { m_dICOMPatientNameHasBeenSet = true; m_dICOMPatientName = std::forward<DICOMPatientNameT>(value); }
    template<typename DICOMPatientNameT = Aws::String>
    DICOMTags& WithDICOMPatientName(DICOMPatientNameT&& value) { SetDICOMPatientName(std::forward<DICOMPatientNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient birth date.</p>
     */
    inline const Aws::String& GetDICOMPatientBirthDate() const { return m_dICOMPatientBirthDate; }
    inline bool DICOMPatientBirthDateHasBeenSet() const { return m_dICOMPatientBirthDateHasBeenSet; }
    template<typename DICOMPatientBirthDateT = Aws::String>
    void SetDICOMPatientBirthDate(DICOMPatientBirthDateT&& value) { m_dICOMPatientBirthDateHasBeenSet = true; m_dICOMPatientBirthDate = std::forward<DICOMPatientBirthDateT>(value); }
    template<typename DICOMPatientBirthDateT = Aws::String>
    DICOMTags& WithDICOMPatientBirthDate(DICOMPatientBirthDateT&& value) { SetDICOMPatientBirthDate(std::forward<DICOMPatientBirthDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patient sex.</p>
     */
    inline const Aws::String& GetDICOMPatientSex() const { return m_dICOMPatientSex; }
    inline bool DICOMPatientSexHasBeenSet() const { return m_dICOMPatientSexHasBeenSet; }
    template<typename DICOMPatientSexT = Aws::String>
    void SetDICOMPatientSex(DICOMPatientSexT&& value) { m_dICOMPatientSexHasBeenSet = true; m_dICOMPatientSex = std::forward<DICOMPatientSexT>(value); }
    template<typename DICOMPatientSexT = Aws::String>
    DICOMTags& WithDICOMPatientSex(DICOMPatientSexT&& value) { SetDICOMPatientSex(std::forward<DICOMPatientSexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Study Instance UID.</p>
     */
    inline const Aws::String& GetDICOMStudyInstanceUID() const { return m_dICOMStudyInstanceUID; }
    inline bool DICOMStudyInstanceUIDHasBeenSet() const { return m_dICOMStudyInstanceUIDHasBeenSet; }
    template<typename DICOMStudyInstanceUIDT = Aws::String>
    void SetDICOMStudyInstanceUID(DICOMStudyInstanceUIDT&& value) { m_dICOMStudyInstanceUIDHasBeenSet = true; m_dICOMStudyInstanceUID = std::forward<DICOMStudyInstanceUIDT>(value); }
    template<typename DICOMStudyInstanceUIDT = Aws::String>
    DICOMTags& WithDICOMStudyInstanceUID(DICOMStudyInstanceUIDT&& value) { SetDICOMStudyInstanceUID(std::forward<DICOMStudyInstanceUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Study ID.</p>
     */
    inline const Aws::String& GetDICOMStudyId() const { return m_dICOMStudyId; }
    inline bool DICOMStudyIdHasBeenSet() const { return m_dICOMStudyIdHasBeenSet; }
    template<typename DICOMStudyIdT = Aws::String>
    void SetDICOMStudyId(DICOMStudyIdT&& value) { m_dICOMStudyIdHasBeenSet = true; m_dICOMStudyId = std::forward<DICOMStudyIdT>(value); }
    template<typename DICOMStudyIdT = Aws::String>
    DICOMTags& WithDICOMStudyId(DICOMStudyIdT&& value) { SetDICOMStudyId(std::forward<DICOMStudyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided Study Description.</p>
     */
    inline const Aws::String& GetDICOMStudyDescription() const { return m_dICOMStudyDescription; }
    inline bool DICOMStudyDescriptionHasBeenSet() const { return m_dICOMStudyDescriptionHasBeenSet; }
    template<typename DICOMStudyDescriptionT = Aws::String>
    void SetDICOMStudyDescription(DICOMStudyDescriptionT&& value) { m_dICOMStudyDescriptionHasBeenSet = true; m_dICOMStudyDescription = std::forward<DICOMStudyDescriptionT>(value); }
    template<typename DICOMStudyDescriptionT = Aws::String>
    DICOMTags& WithDICOMStudyDescription(DICOMStudyDescriptionT&& value) { SetDICOMStudyDescription(std::forward<DICOMStudyDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of series in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedSeries() const { return m_dICOMNumberOfStudyRelatedSeries; }
    inline bool DICOMNumberOfStudyRelatedSeriesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedSeriesHasBeenSet; }
    inline void SetDICOMNumberOfStudyRelatedSeries(int value) { m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = true; m_dICOMNumberOfStudyRelatedSeries = value; }
    inline DICOMTags& WithDICOMNumberOfStudyRelatedSeries(int value) { SetDICOMNumberOfStudyRelatedSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances in the DICOM study.</p>
     */
    inline int GetDICOMNumberOfStudyRelatedInstances() const { return m_dICOMNumberOfStudyRelatedInstances; }
    inline bool DICOMNumberOfStudyRelatedInstancesHasBeenSet() const { return m_dICOMNumberOfStudyRelatedInstancesHasBeenSet; }
    inline void SetDICOMNumberOfStudyRelatedInstances(int value) { m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = true; m_dICOMNumberOfStudyRelatedInstances = value; }
    inline DICOMTags& WithDICOMNumberOfStudyRelatedInstances(int value) { SetDICOMNumberOfStudyRelatedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accession number for the DICOM study.</p>
     */
    inline const Aws::String& GetDICOMAccessionNumber() const { return m_dICOMAccessionNumber; }
    inline bool DICOMAccessionNumberHasBeenSet() const { return m_dICOMAccessionNumberHasBeenSet; }
    template<typename DICOMAccessionNumberT = Aws::String>
    void SetDICOMAccessionNumber(DICOMAccessionNumberT&& value) { m_dICOMAccessionNumberHasBeenSet = true; m_dICOMAccessionNumber = std::forward<DICOMAccessionNumberT>(value); }
    template<typename DICOMAccessionNumberT = Aws::String>
    DICOMTags& WithDICOMAccessionNumber(DICOMAccessionNumberT&& value) { SetDICOMAccessionNumber(std::forward<DICOMAccessionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Series Instance UID.</p>
     */
    inline const Aws::String& GetDICOMSeriesInstanceUID() const { return m_dICOMSeriesInstanceUID; }
    inline bool DICOMSeriesInstanceUIDHasBeenSet() const { return m_dICOMSeriesInstanceUIDHasBeenSet; }
    template<typename DICOMSeriesInstanceUIDT = Aws::String>
    void SetDICOMSeriesInstanceUID(DICOMSeriesInstanceUIDT&& value) { m_dICOMSeriesInstanceUIDHasBeenSet = true; m_dICOMSeriesInstanceUID = std::forward<DICOMSeriesInstanceUIDT>(value); }
    template<typename DICOMSeriesInstanceUIDT = Aws::String>
    DICOMTags& WithDICOMSeriesInstanceUID(DICOMSeriesInstanceUIDT&& value) { SetDICOMSeriesInstanceUID(std::forward<DICOMSeriesInstanceUIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the series Modality.</p>
     */
    inline const Aws::String& GetDICOMSeriesModality() const { return m_dICOMSeriesModality; }
    inline bool DICOMSeriesModalityHasBeenSet() const { return m_dICOMSeriesModalityHasBeenSet; }
    template<typename DICOMSeriesModalityT = Aws::String>
    void SetDICOMSeriesModality(DICOMSeriesModalityT&& value) { m_dICOMSeriesModalityHasBeenSet = true; m_dICOMSeriesModality = std::forward<DICOMSeriesModalityT>(value); }
    template<typename DICOMSeriesModalityT = Aws::String>
    DICOMTags& WithDICOMSeriesModality(DICOMSeriesModalityT&& value) { SetDICOMSeriesModality(std::forward<DICOMSeriesModalityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the series Body Part Examined.</p>
     */
    inline const Aws::String& GetDICOMSeriesBodyPart() const { return m_dICOMSeriesBodyPart; }
    inline bool DICOMSeriesBodyPartHasBeenSet() const { return m_dICOMSeriesBodyPartHasBeenSet; }
    template<typename DICOMSeriesBodyPartT = Aws::String>
    void SetDICOMSeriesBodyPart(DICOMSeriesBodyPartT&& value) { m_dICOMSeriesBodyPartHasBeenSet = true; m_dICOMSeriesBodyPart = std::forward<DICOMSeriesBodyPartT>(value); }
    template<typename DICOMSeriesBodyPartT = Aws::String>
    DICOMTags& WithDICOMSeriesBodyPart(DICOMSeriesBodyPartT&& value) { SetDICOMSeriesBodyPart(std::forward<DICOMSeriesBodyPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM provided identifier for the Series Number.</p>
     */
    inline int GetDICOMSeriesNumber() const { return m_dICOMSeriesNumber; }
    inline bool DICOMSeriesNumberHasBeenSet() const { return m_dICOMSeriesNumberHasBeenSet; }
    inline void SetDICOMSeriesNumber(int value) { m_dICOMSeriesNumberHasBeenSet = true; m_dICOMSeriesNumber = value; }
    inline DICOMTags& WithDICOMSeriesNumber(int value) { SetDICOMSeriesNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The study date.</p>
     */
    inline const Aws::String& GetDICOMStudyDate() const { return m_dICOMStudyDate; }
    inline bool DICOMStudyDateHasBeenSet() const { return m_dICOMStudyDateHasBeenSet; }
    template<typename DICOMStudyDateT = Aws::String>
    void SetDICOMStudyDate(DICOMStudyDateT&& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = std::forward<DICOMStudyDateT>(value); }
    template<typename DICOMStudyDateT = Aws::String>
    DICOMTags& WithDICOMStudyDate(DICOMStudyDateT&& value) { SetDICOMStudyDate(std::forward<DICOMStudyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The study time.</p>
     */
    inline const Aws::String& GetDICOMStudyTime() const { return m_dICOMStudyTime; }
    inline bool DICOMStudyTimeHasBeenSet() const { return m_dICOMStudyTimeHasBeenSet; }
    template<typename DICOMStudyTimeT = Aws::String>
    void SetDICOMStudyTime(DICOMStudyTimeT&& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = std::forward<DICOMStudyTimeT>(value); }
    template<typename DICOMStudyTimeT = Aws::String>
    DICOMTags& WithDICOMStudyTime(DICOMStudyTimeT&& value) { SetDICOMStudyTime(std::forward<DICOMStudyTimeT>(value)); return *this;}
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

    int m_dICOMNumberOfStudyRelatedSeries{0};
    bool m_dICOMNumberOfStudyRelatedSeriesHasBeenSet = false;

    int m_dICOMNumberOfStudyRelatedInstances{0};
    bool m_dICOMNumberOfStudyRelatedInstancesHasBeenSet = false;

    Aws::String m_dICOMAccessionNumber;
    bool m_dICOMAccessionNumberHasBeenSet = false;

    Aws::String m_dICOMSeriesInstanceUID;
    bool m_dICOMSeriesInstanceUIDHasBeenSet = false;

    Aws::String m_dICOMSeriesModality;
    bool m_dICOMSeriesModalityHasBeenSet = false;

    Aws::String m_dICOMSeriesBodyPart;
    bool m_dICOMSeriesBodyPartHasBeenSet = false;

    int m_dICOMSeriesNumber{0};
    bool m_dICOMSeriesNumberHasBeenSet = false;

    Aws::String m_dICOMStudyDate;
    bool m_dICOMStudyDateHasBeenSet = false;

    Aws::String m_dICOMStudyTime;
    bool m_dICOMStudyTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
