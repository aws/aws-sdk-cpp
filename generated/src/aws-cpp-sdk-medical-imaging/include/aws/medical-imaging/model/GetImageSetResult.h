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
    AWS_MEDICALIMAGING_API GetImageSetResult();
    AWS_MEDICALIMAGING_API GetImageSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetImageSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }
    inline GetImageSetResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline GetImageSetResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline GetImageSetResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }
    inline void SetImageSetId(const Aws::String& value) { m_imageSetId = value; }
    inline void SetImageSetId(Aws::String&& value) { m_imageSetId = std::move(value); }
    inline void SetImageSetId(const char* value) { m_imageSetId.assign(value); }
    inline GetImageSetResult& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}
    inline GetImageSetResult& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}
    inline GetImageSetResult& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set version identifier.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline GetImageSetResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline GetImageSetResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline GetImageSetResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state.</p>
     */
    inline const ImageSetState& GetImageSetState() const{ return m_imageSetState; }
    inline void SetImageSetState(const ImageSetState& value) { m_imageSetState = value; }
    inline void SetImageSetState(ImageSetState&& value) { m_imageSetState = std::move(value); }
    inline GetImageSetResult& WithImageSetState(const ImageSetState& value) { SetImageSetState(value); return *this;}
    inline GetImageSetResult& WithImageSetState(ImageSetState&& value) { SetImageSetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set workflow status.</p>
     */
    inline const ImageSetWorkflowStatus& GetImageSetWorkflowStatus() const{ return m_imageSetWorkflowStatus; }
    inline void SetImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { m_imageSetWorkflowStatus = value; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { m_imageSetWorkflowStatus = std::move(value); }
    inline GetImageSetResult& WithImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { SetImageSetWorkflowStatus(value); return *this;}
    inline GetImageSetResult& WithImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { SetImageSetWorkflowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set properties were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetImageSetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetImageSetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set properties were updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetImageSetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetImageSetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the image set properties were deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAt = value; }
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAt = std::move(value); }
    inline GetImageSetResult& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}
    inline GetImageSetResult& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message thrown if an image set action fails.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetImageSetResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetImageSetResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetImageSetResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the image set.</p>
     */
    inline const Aws::String& GetImageSetArn() const{ return m_imageSetArn; }
    inline void SetImageSetArn(const Aws::String& value) { m_imageSetArn = value; }
    inline void SetImageSetArn(Aws::String&& value) { m_imageSetArn = std::move(value); }
    inline void SetImageSetArn(const char* value) { m_imageSetArn.assign(value); }
    inline GetImageSetResult& WithImageSetArn(const Aws::String& value) { SetImageSetArn(value); return *this;}
    inline GetImageSetResult& WithImageSetArn(Aws::String&& value) { SetImageSetArn(std::move(value)); return *this;}
    inline GetImageSetResult& WithImageSetArn(const char* value) { SetImageSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object contains the details of any overrides used while creating a
     * specific image set version. If an image set was copied or updated using the
     * <code>force</code> flag, this object will contain the <code>forced</code>
     * flag.</p>
     */
    inline const Overrides& GetOverrides() const{ return m_overrides; }
    inline void SetOverrides(const Overrides& value) { m_overrides = value; }
    inline void SetOverrides(Overrides&& value) { m_overrides = std::move(value); }
    inline GetImageSetResult& WithOverrides(const Overrides& value) { SetOverrides(value); return *this;}
    inline GetImageSetResult& WithOverrides(Overrides&& value) { SetOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetImageSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetImageSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetImageSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;

    Aws::String m_imageSetId;

    Aws::String m_versionId;

    ImageSetState m_imageSetState;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Utils::DateTime m_deletedAt;

    Aws::String m_message;

    Aws::String m_imageSetArn;

    Overrides m_overrides;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
