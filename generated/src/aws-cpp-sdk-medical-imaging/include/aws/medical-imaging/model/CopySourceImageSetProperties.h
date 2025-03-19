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
   * <p>Copy source image set properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopySourceImageSetProperties">AWS
   * API Reference</a></p>
   */
  class CopySourceImageSetProperties
  {
  public:
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties() = default;
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline const Aws::String& GetImageSetId() const { return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    template<typename ImageSetIdT = Aws::String>
    void SetImageSetId(ImageSetIdT&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::forward<ImageSetIdT>(value); }
    template<typename ImageSetIdT = Aws::String>
    CopySourceImageSetProperties& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const { return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    template<typename LatestVersionIdT = Aws::String>
    void SetLatestVersionId(LatestVersionIdT&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::forward<LatestVersionIdT>(value); }
    template<typename LatestVersionIdT = Aws::String>
    CopySourceImageSetProperties& WithLatestVersionId(LatestVersionIdT&& value) { SetLatestVersionId(std::forward<LatestVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline ImageSetState GetImageSetState() const { return m_imageSetState; }
    inline bool ImageSetStateHasBeenSet() const { return m_imageSetStateHasBeenSet; }
    inline void SetImageSetState(ImageSetState value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }
    inline CopySourceImageSetProperties& WithImageSetState(ImageSetState value) { SetImageSetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline ImageSetWorkflowStatus GetImageSetWorkflowStatus() const { return m_imageSetWorkflowStatus; }
    inline bool ImageSetWorkflowStatusHasBeenSet() const { return m_imageSetWorkflowStatusHasBeenSet; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }
    inline CopySourceImageSetProperties& WithImageSetWorkflowStatus(ImageSetWorkflowStatus value) { SetImageSetWorkflowStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CopySourceImageSetProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CopySourceImageSetProperties& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline const Aws::String& GetImageSetArn() const { return m_imageSetArn; }
    inline bool ImageSetArnHasBeenSet() const { return m_imageSetArnHasBeenSet; }
    template<typename ImageSetArnT = Aws::String>
    void SetImageSetArn(ImageSetArnT&& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = std::forward<ImageSetArnT>(value); }
    template<typename ImageSetArnT = Aws::String>
    CopySourceImageSetProperties& WithImageSetArn(ImageSetArnT&& value) { SetImageSetArn(std::forward<ImageSetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    ImageSetState m_imageSetState{ImageSetState::NOT_SET};
    bool m_imageSetStateHasBeenSet = false;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus{ImageSetWorkflowStatus::NOT_SET};
    bool m_imageSetWorkflowStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_imageSetArn;
    bool m_imageSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
