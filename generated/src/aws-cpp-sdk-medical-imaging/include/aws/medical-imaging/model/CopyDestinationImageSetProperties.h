﻿/**
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
   * <p>Copy the image set properties of the destination image set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopyDestinationImageSetProperties">AWS
   * API Reference</a></p>
   */
  class CopyDestinationImageSetProperties
  {
  public:
    AWS_MEDICALIMAGING_API CopyDestinationImageSetProperties();
    AWS_MEDICALIMAGING_API CopyDestinationImageSetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopyDestinationImageSetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image set identifier of the copied image set properties.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }
    inline CopyDestinationImageSetProperties& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version identifier for the destination image set properties.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }
    inline CopyDestinationImageSetProperties& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}
    inline CopyDestinationImageSetProperties& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}
    inline CopyDestinationImageSetProperties& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state of the destination image set properties.</p>
     */
    inline const ImageSetState& GetImageSetState() const{ return m_imageSetState; }
    inline bool ImageSetStateHasBeenSet() const { return m_imageSetStateHasBeenSet; }
    inline void SetImageSetState(const ImageSetState& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }
    inline void SetImageSetState(ImageSetState&& value) { m_imageSetStateHasBeenSet = true; m_imageSetState = std::move(value); }
    inline CopyDestinationImageSetProperties& WithImageSetState(const ImageSetState& value) { SetImageSetState(value); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetState(ImageSetState&& value) { SetImageSetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set workflow status of the destination image set properties.</p>
     */
    inline const ImageSetWorkflowStatus& GetImageSetWorkflowStatus() const{ return m_imageSetWorkflowStatus; }
    inline bool ImageSetWorkflowStatusHasBeenSet() const { return m_imageSetWorkflowStatusHasBeenSet; }
    inline void SetImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = std::move(value); }
    inline CopyDestinationImageSetProperties& WithImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { SetImageSetWorkflowStatus(value); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { SetImageSetWorkflowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the destination image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline CopyDestinationImageSetProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CopyDestinationImageSetProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the destination image set properties were last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline CopyDestinationImageSetProperties& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline CopyDestinationImageSetProperties& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the destination image set.</p>
     */
    inline const Aws::String& GetImageSetArn() const{ return m_imageSetArn; }
    inline bool ImageSetArnHasBeenSet() const { return m_imageSetArnHasBeenSet; }
    inline void SetImageSetArn(const Aws::String& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = value; }
    inline void SetImageSetArn(Aws::String&& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = std::move(value); }
    inline void SetImageSetArn(const char* value) { m_imageSetArnHasBeenSet = true; m_imageSetArn.assign(value); }
    inline CopyDestinationImageSetProperties& WithImageSetArn(const Aws::String& value) { SetImageSetArn(value); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetArn(Aws::String&& value) { SetImageSetArn(std::move(value)); return *this;}
    inline CopyDestinationImageSetProperties& WithImageSetArn(const char* value) { SetImageSetArn(value); return *this;}
    ///@}
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
