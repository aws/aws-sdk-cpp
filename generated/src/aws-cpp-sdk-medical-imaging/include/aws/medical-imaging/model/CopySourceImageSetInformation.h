/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/MetadataCopies.h>
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
   * <p>Copy source image set information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopySourceImageSetInformation">AWS
   * API Reference</a></p>
   */
  class CopySourceImageSetInformation
  {
  public:
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation() = default;
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const { return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    template<typename LatestVersionIdT = Aws::String>
    void SetLatestVersionId(LatestVersionIdT&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::forward<LatestVersionIdT>(value); }
    template<typename LatestVersionIdT = Aws::String>
    CopySourceImageSetInformation& WithLatestVersionId(LatestVersionIdT&& value) { SetLatestVersionId(std::forward<LatestVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains <code>MetadataCopies</code> structure and wraps information related
     * to specific copy use cases. For example, when copying subsets.</p>
     */
    inline const MetadataCopies& GetDICOMCopies() const { return m_dICOMCopies; }
    inline bool DICOMCopiesHasBeenSet() const { return m_dICOMCopiesHasBeenSet; }
    template<typename DICOMCopiesT = MetadataCopies>
    void SetDICOMCopies(DICOMCopiesT&& value) { m_dICOMCopiesHasBeenSet = true; m_dICOMCopies = std::forward<DICOMCopiesT>(value); }
    template<typename DICOMCopiesT = MetadataCopies>
    CopySourceImageSetInformation& WithDICOMCopies(DICOMCopiesT&& value) { SetDICOMCopies(std::forward<DICOMCopiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    MetadataCopies m_dICOMCopies;
    bool m_dICOMCopiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
