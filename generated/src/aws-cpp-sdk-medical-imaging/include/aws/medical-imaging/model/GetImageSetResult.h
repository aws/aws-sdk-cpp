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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MedicalImaging
{
namespace Model
{
  class GetImageSetResult
  {
  public:
    AWS_MEDICALIMAGING_API GetImageSetResult() = default;
    AWS_MEDICALIMAGING_API GetImageSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetImageSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    GetImageSetResult& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const { return m_imageSetId; }
    template<typename ImageSetIdT = Aws::String>
    void SetImageSetId(ImageSetIdT&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::forward<ImageSetIdT>(value); }
    template<typename ImageSetIdT = Aws::String>
    GetImageSetResult& WithImageSetId(ImageSetIdT&& value) { SetImageSetId(std::forward<ImageSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set version identifier.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetImageSetResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state.</p>
     */
    inline ImageSetState GetImageSetState() const { return m_imageSetState; }
    inline void SetImageSetState(ImageSetState value) { m_imageSetStateHasBeenSet = true; m_imageSetState = value; }
    inline GetImageSetResult& WithImageSetState(ImageSetState value) { SetImageSetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set workflow status.</p>
     */
    inline ImageSetWorkflowStatus GetImageSetWorkflowStatus() const { return m_imageSetWorkflowStatus; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus value) { m_imageSetWorkflowStatusHasBeenSet = true; m_imageSetWorkflowStatus = value; }
    inline GetImageSetResult& WithImageSetWorkflowStatus(ImageSetWorkflowStatus value) { SetImageSetWorkflowStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetImageSetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetImageSetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    GetImageSetResult& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetImageSetResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the image set.</p>
     */
    inline const Aws::String& GetImageSetArn() const { return m_imageSetArn; }
    template<typename ImageSetArnT = Aws::String>
    void SetImageSetArn(ImageSetArnT&& value) { m_imageSetArnHasBeenSet = true; m_imageSetArn = std::forward<ImageSetArnT>(value); }
    template<typename ImageSetArnT = Aws::String>
    GetImageSetResult& WithImageSetArn(ImageSetArnT&& value) { SetImageSetArn(std::forward<ImageSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object contains the details of any overrides used while creating a
     * specific image set version. If an image set was copied or updated using the
     * <code>force</code> flag, this object will contain the <code>forced</code>
     * flag.</p>
     */
    inline const Overrides& GetOverrides() const { return m_overrides; }
    template<typename OverridesT = Overrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Overrides>
    GetImageSetResult& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag to determine whether the image set is primary or not.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline GetImageSetResult& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImageSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

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

    Aws::String m_imageSetArn;
    bool m_imageSetArnHasBeenSet = false;

    Overrides m_overrides;
    bool m_overridesHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
