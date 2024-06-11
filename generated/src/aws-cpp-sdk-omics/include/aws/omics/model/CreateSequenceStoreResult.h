/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateSequenceStoreResult
  {
  public:
    AWS_OMICS_API CreateSequenceStoreResult();
    AWS_OMICS_API CreateSequenceStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateSequenceStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateSequenceStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateSequenceStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateSequenceStoreResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateSequenceStoreResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSequenceStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSequenceStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSequenceStoreResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSequenceStoreResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's SSE settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfig = std::move(value); }
    inline CreateSequenceStoreResult& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline CreateSequenceStoreResult& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateSequenceStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateSequenceStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 location that is used to store files that have failed a direct
     * upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocation = value; }
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocation = std::move(value); }
    inline void SetFallbackLocation(const char* value) { m_fallbackLocation.assign(value); }
    inline CreateSequenceStoreResult& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}
    inline CreateSequenceStoreResult& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm family of the ETag.</p>
     */
    inline const ETagAlgorithmFamily& GetETagAlgorithmFamily() const{ return m_eTagAlgorithmFamily; }
    inline void SetETagAlgorithmFamily(const ETagAlgorithmFamily& value) { m_eTagAlgorithmFamily = value; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily&& value) { m_eTagAlgorithmFamily = std::move(value); }
    inline CreateSequenceStoreResult& WithETagAlgorithmFamily(const ETagAlgorithmFamily& value) { SetETagAlgorithmFamily(value); return *this;}
    inline CreateSequenceStoreResult& WithETagAlgorithmFamily(ETagAlgorithmFamily&& value) { SetETagAlgorithmFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSequenceStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSequenceStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSequenceStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    SseConfig m_sseConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_fallbackLocation;

    ETagAlgorithmFamily m_eTagAlgorithmFamily;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
