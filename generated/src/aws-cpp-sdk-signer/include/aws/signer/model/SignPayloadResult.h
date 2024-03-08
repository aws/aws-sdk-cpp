/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Array.h>
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
namespace signer
{
namespace Model
{
  class SignPayloadResult
  {
  public:
    AWS_SIGNER_API SignPayloadResult();
    AWS_SIGNER_API SignPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API SignPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline SignPayloadResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline SignPayloadResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the signing job.</p>
     */
    inline SignPayloadResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const{ return m_jobOwner; }

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(const Aws::String& value) { m_jobOwner = value; }

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(Aws::String&& value) { m_jobOwner = std::move(value); }

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(const char* value) { m_jobOwner.assign(value); }

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline SignPayloadResult& WithJobOwner(const Aws::String& value) { SetJobOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline SignPayloadResult& WithJobOwner(Aws::String&& value) { SetJobOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline SignPayloadResult& WithJobOwner(const char* value) { SetJobOwner(value); return *this;}


    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata = std::move(value); }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(const char* key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(Aws::String&& key, const char* value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information including the signing profile ARN and the signing job ID.</p>
     */
    inline SignPayloadResult& AddMetadata(const char* key, const char* value) { m_metadata.emplace(key, value); return *this; }


    /**
     * <p>A cryptographic signature.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const{ return m_signature; }

    /**
     * <p>A cryptographic signature.</p>
     */
    inline void SetSignature(const Aws::Utils::ByteBuffer& value) { m_signature = value; }

    /**
     * <p>A cryptographic signature.</p>
     */
    inline void SetSignature(Aws::Utils::ByteBuffer&& value) { m_signature = std::move(value); }

    /**
     * <p>A cryptographic signature.</p>
     */
    inline SignPayloadResult& WithSignature(const Aws::Utils::ByteBuffer& value) { SetSignature(value); return *this;}

    /**
     * <p>A cryptographic signature.</p>
     */
    inline SignPayloadResult& WithSignature(Aws::Utils::ByteBuffer&& value) { SetSignature(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SignPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SignPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SignPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_jobOwner;

    Aws::Map<Aws::String, Aws::String> m_metadata;

    Aws::Utils::ByteBuffer m_signature;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
