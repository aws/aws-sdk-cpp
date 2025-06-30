/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medical-imaging/model/DICOMTags.h>
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
   * <p>Summary of the image set metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ImageSetsMetadataSummary">AWS
   * API Reference</a></p>
   */
  class ImageSetsMetadataSummary
  {
  public:
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary() = default;
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const { return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    template<typename ImageSetIdT = Aws::String>
    void SetImageSetId(ImageSetIdT&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::forward<ImageSetIdT>(value); }
    template<typename ImageSetIdT = Aws::String>
    ImageSetsMetadataSummary& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set version.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline ImageSetsMetadataSummary& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ImageSetsMetadataSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time an image set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ImageSetsMetadataSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline const DICOMTags& GetDICOMTags() const { return m_dICOMTags; }
    inline bool DICOMTagsHasBeenSet() const { return m_dICOMTagsHasBeenSet; }
    template<typename DICOMTagsT = DICOMTags>
    void SetDICOMTags(DICOMTagsT&& value) { m_dICOMTagsHasBeenSet = true; m_dICOMTags = std::forward<DICOMTagsT>(value); }
    template<typename DICOMTagsT = DICOMTags>
    ImageSetsMetadataSummary& WithDICOMTags(DICOMTagsT&& value) { SetDICOMTags(std::forward<DICOMTagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag to determine whether the image set is primary or not.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline ImageSetsMetadataSummary& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    DICOMTags m_dICOMTags;
    bool m_dICOMTagsHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
