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
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary();
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API ImageSetsMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }

    /**
     * <p>The image set identifier.</p>
     */
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline ImageSetsMetadataSummary& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ImageSetsMetadataSummary& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ImageSetsMetadataSummary& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The image set version.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The image set version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The image set version.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The image set version.</p>
     */
    inline ImageSetsMetadataSummary& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline ImageSetsMetadataSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time an image set is created. Sample creation date is provided in
     * <code>1985-04-12T23:20:50.52Z</code> format.</p>
     */
    inline ImageSetsMetadataSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time an image set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time an image set was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time an image set was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time an image set was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time an image set was last updated.</p>
     */
    inline ImageSetsMetadataSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time an image set was last updated.</p>
     */
    inline ImageSetsMetadataSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline const DICOMTags& GetDICOMTags() const{ return m_dICOMTags; }

    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline bool DICOMTagsHasBeenSet() const { return m_dICOMTagsHasBeenSet; }

    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline void SetDICOMTags(const DICOMTags& value) { m_dICOMTagsHasBeenSet = true; m_dICOMTags = value; }

    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline void SetDICOMTags(DICOMTags&& value) { m_dICOMTagsHasBeenSet = true; m_dICOMTags = std::move(value); }

    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline ImageSetsMetadataSummary& WithDICOMTags(const DICOMTags& value) { SetDICOMTags(value); return *this;}

    /**
     * <p>The DICOM tags associated with the image set.</p>
     */
    inline ImageSetsMetadataSummary& WithDICOMTags(DICOMTags&& value) { SetDICOMTags(std::move(value)); return *this;}

  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    DICOMTags m_dICOMTags;
    bool m_dICOMTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
