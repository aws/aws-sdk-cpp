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
#include <aws/medical-imaging/model/Overrides.h>
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
    AWS_MEDICALIMAGING_API ImageSetProperties() = default;
    AWS_MEDICALIMAGING_API ImageSetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API ImageSetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ImageSetProperties& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set version identifier.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    ImageSetProperties& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state.</p>
     */
    inline ImageSetState GetImageSetState() const { return m_imageSetState; }
    inline bool ImageSetStateHasBeenSet() const { return m_imageSetStateHasBeenSet; }
    inline void SetImageSetState(ImageSetState value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }
    inline ImageSetProperties& WithImageSetState(ImageSetState value) { SetImageSetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set workflow status.</p>
     */
    inline ImageSetWorkflowStatus GetImageSetWorkflowStatus() const { return m_imageSetWorkflowStatus; }
    inline bool ImageSetWorkflowStatusHasBeenSet() const { return m_imageSetWorkflowStatusHasBeenSet; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }
    inline ImageSetProperties& WithImageSetWorkflowStatus(ImageSetWorkflowStatus value) { SetImageSetWorkflowStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ImageSetProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ImageSetProperties& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    ImageSetProperties& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ImageSetProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details on overrides used when creating the returned version of an
     * image set. For example, if <code>forced</code> exists, the <code>forced</code>
     * flag was used when creating the image set.</p>
     */
    inline const Overrides& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Overrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Overrides>
    ImageSetProperties& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag to determine whether the image set is primary or not.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline ImageSetProperties& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    ImageSetState m_imageSetState{ImageSetState::NOT_SET};
    bool m_imageSetStateHasBeenSet = false;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus{ImageSetWorkflowStatus::NOT_SET};
    bool m_imageSetWorkflowStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Overrides m_overrides;
    bool m_overridesHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
