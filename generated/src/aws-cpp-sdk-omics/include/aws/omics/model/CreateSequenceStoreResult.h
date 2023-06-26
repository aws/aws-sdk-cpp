/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
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


    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline CreateSequenceStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline CreateSequenceStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline CreateSequenceStoreResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The store's ARN.</p>
     */
    inline CreateSequenceStoreResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The store's ARN.</p>
     */
    inline CreateSequenceStoreResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The store's ARN.</p>
     */
    inline CreateSequenceStoreResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The store's name.</p>
     */
    inline CreateSequenceStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline CreateSequenceStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline CreateSequenceStoreResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The store's description.</p>
     */
    inline CreateSequenceStoreResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The store's description.</p>
     */
    inline CreateSequenceStoreResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The store's description.</p>
     */
    inline CreateSequenceStoreResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The store's SSE settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }

    /**
     * <p>The store's SSE settings.</p>
     */
    inline void SetSseConfig(const SseConfig& value) { m_sseConfig = value; }

    /**
     * <p>The store's SSE settings.</p>
     */
    inline void SetSseConfig(SseConfig&& value) { m_sseConfig = std::move(value); }

    /**
     * <p>The store's SSE settings.</p>
     */
    inline CreateSequenceStoreResult& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}

    /**
     * <p>The store's SSE settings.</p>
     */
    inline CreateSequenceStoreResult& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}


    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the store was created.</p>
     */
    inline CreateSequenceStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the store was created.</p>
     */
    inline CreateSequenceStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocation = value; }

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocation = std::move(value); }

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline void SetFallbackLocation(const char* value) { m_fallbackLocation.assign(value); }

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline CreateSequenceStoreResult& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline CreateSequenceStoreResult& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}

    /**
     * <p> An S3 location that is used to store files that have failed a direct upload.
     * </p>
     */
    inline CreateSequenceStoreResult& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSequenceStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSequenceStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSequenceStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    SseConfig m_sseConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_fallbackLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
