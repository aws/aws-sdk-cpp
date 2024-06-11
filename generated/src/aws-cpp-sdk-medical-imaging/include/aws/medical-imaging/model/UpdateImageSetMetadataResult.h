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
  class UpdateImageSetMetadataResult
  {
  public:
    AWS_MEDICALIMAGING_API UpdateImageSetMetadataResult();
    AWS_MEDICALIMAGING_API UpdateImageSetMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API UpdateImageSetMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }
    inline UpdateImageSetMetadataResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline UpdateImageSetMetadataResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }
    inline void SetImageSetId(const Aws::String& value) { m_imageSetId = value; }
    inline void SetImageSetId(Aws::String&& value) { m_imageSetId = std::move(value); }
    inline void SetImageSetId(const char* value) { m_imageSetId.assign(value); }
    inline UpdateImageSetMetadataResult& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}
    inline UpdateImageSetMetadataResult& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataResult& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest image set version identifier.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionId = value; }
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionId = std::move(value); }
    inline void SetLatestVersionId(const char* value) { m_latestVersionId.assign(value); }
    inline UpdateImageSetMetadataResult& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}
    inline UpdateImageSetMetadataResult& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataResult& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set state.</p>
     */
    inline const ImageSetState& GetImageSetState() const{ return m_imageSetState; }
    inline void SetImageSetState(const ImageSetState& value) { m_imageSetState = value; }
    inline void SetImageSetState(ImageSetState&& value) { m_imageSetState = std::move(value); }
    inline UpdateImageSetMetadataResult& WithImageSetState(const ImageSetState& value) { SetImageSetState(value); return *this;}
    inline UpdateImageSetMetadataResult& WithImageSetState(ImageSetState&& value) { SetImageSetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image set workflow status.</p>
     */
    inline const ImageSetWorkflowStatus& GetImageSetWorkflowStatus() const{ return m_imageSetWorkflowStatus; }
    inline void SetImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { m_imageSetWorkflowStatus = value; }
    inline void SetImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { m_imageSetWorkflowStatus = std::move(value); }
    inline UpdateImageSetMetadataResult& WithImageSetWorkflowStatus(const ImageSetWorkflowStatus& value) { SetImageSetWorkflowStatus(value); return *this;}
    inline UpdateImageSetMetadataResult& WithImageSetWorkflowStatus(ImageSetWorkflowStatus&& value) { SetImageSetWorkflowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set metadata was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateImageSetMetadataResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateImageSetMetadataResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when image set metadata was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateImageSetMetadataResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateImageSetMetadataResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message thrown if an update image set metadata action fails.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline UpdateImageSetMetadataResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline UpdateImageSetMetadataResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline UpdateImageSetMetadataResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateImageSetMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateImageSetMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateImageSetMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;

    Aws::String m_imageSetId;

    Aws::String m_latestVersionId;

    ImageSetState m_imageSetState;

    ImageSetWorkflowStatus m_imageSetWorkflowStatus;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
