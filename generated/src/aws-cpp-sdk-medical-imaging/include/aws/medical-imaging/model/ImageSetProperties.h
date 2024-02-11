/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/ImageSetState.h>
#include <aws/medical-imaging/model/ImageSetWorkflowStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The image set properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ImageSetProperties">AWS
   * API Reference</a></p>
   */
  class ImageSetProperties
  {
  public:
    AWS_MEDICALIMAGING_API ImageSetProperties();
    AWS_MEDICALIMAGING_API ImageSetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API ImageSetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ImageSetProperties& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ImageSetProperties& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ImageSetProperties& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The image set version identifier.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The image set version identifier.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The image set version identifier.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The image set version identifier.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The image set version identifier.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The image set version identifier.</p>
     */
    inline ImageSetProperties& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The image set version identifier.</p>
     */
    inline ImageSetProperties& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The image set version identifier.</p>
     */
    inline ImageSetProperties& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The image set state.</p>
     */
    inline const ImageSetState& GetImageSetState() const{ return m_imageSetState; }

    /**
     * <p>The image set state.</p>
     */
    inline bool ImageSetStateHasBeenSet() const { return m_imageSetStateHasBeenSet; }

    /**
     * <p>The image set state.</p>
     */
    inline void SetImageSetState(const ImageSetState& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }

    /**
     * <p>The image set state.</p>
     */
    inline void SetImageSetState(ImageSetState&& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = std::move(value); }

    /**
     * <p>The image set state.</p>
     */
    inline ImageSetProperties& WithImageSetState(const ImageSetState& value) { SetImageSetState(value); return *this;}

    /**
     * <p>The image set state.</p>
     */
    inline ImageSetProperties& WithImageSetState(ImageSetState&& value) { SetImageSetState(std::move(value)); return *this;}


    /**
     * <p>The image set workflow status.</p>
     */
    inline const ImageSetWorkflowStatus& GetImageSetWorkflowStatus() const{ return m_imageSetWorkflowStatus; }

    /**
     * <p>The image set workflow status.</p>
     */
    inline bool ImageSetWorkflowStatusHasBeenSet() const { return m_imageSetWorkflowStatusHasBeenSet; }

    /**
     * <p>The image set workflow status.</p>
     */
    inline void SetImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }

    /**
     * <p>The image set workflow status.</p>
     */
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = std::move(value); }

    /**
     * <p>The image set workflow status.</p>
     */
    inline ImageSetProperties& WithImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { SetImageSetWorkflowStatus(value); return *this;}

    /**
     * <p>The image set workflow status.</p>
     */
    inline ImageSetProperties& WithImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { SetImageSetWorkflowStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline ImageSetProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline ImageSetProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline ImageSetProperties& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline ImageSetProperties& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }

    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }

    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }

    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }

    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline ImageSetProperties& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}

    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline ImageSetProperties& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}


    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline ImageSetProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline ImageSetProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline ImageSetProperties& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    ImageSetState m_imageSetState;
    bool m_imageSetStateHasBeenSet = false;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus;
    bool m_imageSetWorkflowStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
