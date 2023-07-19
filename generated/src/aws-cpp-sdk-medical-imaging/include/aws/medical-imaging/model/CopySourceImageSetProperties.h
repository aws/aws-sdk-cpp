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
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties();
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopySourceImageSetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}

    /**
     * <p>The latest version identifier for the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}


    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline const ImageSetState& GetImageSetState() const{ return m_imageSetState; }

    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline bool ImageSetStateHasBeenSet() const { return m_imageSetStateHasBeenSet; }

    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline void SetImageSetState(const ImageSetState& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }

    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline void SetImageSetState(ImageSetState&& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = std::move(value); }

    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetState(const ImageSetState& value) { SetImageSetState(value); return *this;}

    /**
     * <p>The image set state of the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetState(ImageSetState&& value) { SetImageSetState(std::move(value)); return *this;}


    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline const ImageSetWorkflowStatus& GetImageSetWorkflowStatus() const{ return m_imageSetWorkflowStatus; }

    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline bool ImageSetWorkflowStatusHasBeenSet() const { return m_imageSetWorkflowStatusHasBeenSet; }

    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline void SetImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }

    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = std::move(value); }

    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { SetImageSetWorkflowStatus(value); return *this;}

    /**
     * <p>The workflow status of the copied source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { SetImageSetWorkflowStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline CopySourceImageSetProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the source image set properties were created.</p>
     */
    inline CopySourceImageSetProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline CopySourceImageSetProperties& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp when the source image set properties were updated.</p>
     */
    inline CopySourceImageSetProperties& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline const Aws::String& GetImageSetArn() const{ return m_imageSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline bool ImageSetArnHasBeenSet() const { return m_imageSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline void SetImageSetArn(const Aws::String& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline void SetImageSetArn(Aws::String&& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline void SetImageSetArn(const char* value) { m_imageSetArnHasBeenSet = true; m_imageSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetArn(const Aws::String& value) { SetImageSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetArn(Aws::String&& value) { SetImageSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the source image set.</p>
     */
    inline CopySourceImageSetProperties& WithImageSetArn(const char* value) { SetImageSetArn(value); return *this;}

  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    ImageSetState m_imageSetState;
    bool m_imageSetStateHasBeenSet = false;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus;
    bool m_imageSetWorkflowStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_imageSetArn;
    bool m_imageSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
