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
   * <p>The aggregated structure to store DICOM study date and study time for search
   * capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DICOMStudyDateAndTime">AWS
   * API Reference</a></p>
   */
  class DICOMStudyDateAndTime
  {
  public:
    AWS_MEDICALIMAGING_API DICOMStudyDateAndTime() = default;
    AWS_MEDICALIMAGING_API DICOMStudyDateAndTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMStudyDateAndTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DICOM study date provided in <code>yyMMdd</code> format.</p>
     */
    inline const Aws::String& GetDICOMStudyDate() const { return m_dICOMStudyDate; }
    inline bool DICOMStudyDateHasBeenSet() const { return m_dICOMStudyDateHasBeenSet; }
    template<typename DICOMStudyDateT = Aws::String>
    void SetDICOMStudyDate(DICOMStudyDateT&& value) { m_dICOMStudyDateHasBeenSet = true; m_dICOMStudyDate = std::forward<DICOMStudyDateT>(value); }
    template<typename DICOMStudyDateT = Aws::String>
    DICOMStudyDateAndTime& WithDICOMStudyDate(DICOMStudyDateT&& value) { SetDICOMStudyDate(std::forward<DICOMStudyDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM study time provided in <code>HHmmss.FFFFFF</code> format.</p>
     */
    inline const Aws::String& GetDICOMStudyTime() const { return m_dICOMStudyTime; }
    inline bool DICOMStudyTimeHasBeenSet() const { return m_dICOMStudyTimeHasBeenSet; }
    template<typename DICOMStudyTimeT = Aws::String>
    void SetDICOMStudyTime(DICOMStudyTimeT&& value) { m_dICOMStudyTimeHasBeenSet = true; m_dICOMStudyTime = std::forward<DICOMStudyTimeT>(value); }
    template<typename DICOMStudyTimeT = Aws::String>
    DICOMStudyDateAndTime& WithDICOMStudyTime(DICOMStudyTimeT&& value) { SetDICOMStudyTime(std::forward<DICOMStudyTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dICOMStudyDate;
    bool m_dICOMStudyDateHasBeenSet = false;

    Aws::String m_dICOMStudyTime;
    bool m_dICOMStudyTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
