/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/SequenceStoreStatus.h>
#include <aws/omics/model/SequenceStoreS3Access.h>
#include <aws/omics/model/ETagAlgorithmFamily.h>
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
namespace Omics
{
namespace Model
{
  class UpdateSequenceStoreResult
  {
  public:
    AWS_OMICS_API UpdateSequenceStoreResult();
    AWS_OMICS_API UpdateSequenceStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API UpdateSequenceStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the sequence store.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateSequenceStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateSequenceStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sequence store.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateSequenceStoreResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateSequenceStoreResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sequence store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateSequenceStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateSequenceStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the sequence store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateSequenceStoreResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSequenceStoreResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfig = std::move(value); }
    inline UpdateSequenceStoreResult& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline UpdateSequenceStoreResult& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline UpdateSequenceStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UpdateSequenceStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-updated time of the Sequence Store.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline UpdateSequenceStoreResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline UpdateSequenceStoreResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const{ return m_propagatedSetLevelTags; }
    inline void SetPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { m_propagatedSetLevelTags = value; }
    inline void SetPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { m_propagatedSetLevelTags = std::move(value); }
    inline UpdateSequenceStoreResult& WithPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { SetPropagatedSetLevelTags(value); return *this;}
    inline UpdateSequenceStoreResult& WithPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { SetPropagatedSetLevelTags(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& AddPropagatedSetLevelTags(const Aws::String& value) { m_propagatedSetLevelTags.push_back(value); return *this; }
    inline UpdateSequenceStoreResult& AddPropagatedSetLevelTags(Aws::String&& value) { m_propagatedSetLevelTags.push_back(std::move(value)); return *this; }
    inline UpdateSequenceStoreResult& AddPropagatedSetLevelTags(const char* value) { m_propagatedSetLevelTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the sequence store.</p>
     */
    inline const SequenceStoreStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SequenceStoreStatus& value) { m_status = value; }
    inline void SetStatus(SequenceStoreStatus&& value) { m_status = std::move(value); }
    inline UpdateSequenceStoreResult& WithStatus(const SequenceStoreStatus& value) { SetStatus(value); return *this;}
    inline UpdateSequenceStoreResult& WithStatus(SequenceStoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the sequence store.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline UpdateSequenceStoreResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline UpdateSequenceStoreResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of a bucket and folder to store Read Sets that fail to upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocation = value; }
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocation = std::move(value); }
    inline void SetFallbackLocation(const char* value) { m_fallbackLocation.assign(value); }
    inline UpdateSequenceStoreResult& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}
    inline UpdateSequenceStoreResult& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const SequenceStoreS3Access& GetS3Access() const{ return m_s3Access; }
    inline void SetS3Access(const SequenceStoreS3Access& value) { m_s3Access = value; }
    inline void SetS3Access(SequenceStoreS3Access&& value) { m_s3Access = std::move(value); }
    inline UpdateSequenceStoreResult& WithS3Access(const SequenceStoreS3Access& value) { SetS3Access(value); return *this;}
    inline UpdateSequenceStoreResult& WithS3Access(SequenceStoreS3Access&& value) { SetS3Access(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag algorithm family to use on ingested read sets.</p>
     */
    inline const ETagAlgorithmFamily& GetETagAlgorithmFamily() const{ return m_eTagAlgorithmFamily; }
    inline void SetETagAlgorithmFamily(const ETagAlgorithmFamily& value) { m_eTagAlgorithmFamily = value; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily&& value) { m_eTagAlgorithmFamily = std::move(value); }
    inline UpdateSequenceStoreResult& WithETagAlgorithmFamily(const ETagAlgorithmFamily& value) { SetETagAlgorithmFamily(value); return *this;}
    inline UpdateSequenceStoreResult& WithETagAlgorithmFamily(ETagAlgorithmFamily&& value) { SetETagAlgorithmFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSequenceStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSequenceStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSequenceStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    SseConfig m_sseConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::Vector<Aws::String> m_propagatedSetLevelTags;

    SequenceStoreStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_fallbackLocation;

    SequenceStoreS3Access m_s3Access;

    ETagAlgorithmFamily m_eTagAlgorithmFamily;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
