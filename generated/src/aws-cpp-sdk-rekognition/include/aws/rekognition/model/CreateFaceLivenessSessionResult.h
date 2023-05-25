/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Rekognition
{
namespace Model
{
  class CreateFaceLivenessSessionResult
  {
  public:
    AWS_REKOGNITION_API CreateFaceLivenessSessionResult();
    AWS_REKOGNITION_API CreateFaceLivenessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateFaceLivenessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline CreateFaceLivenessSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline CreateFaceLivenessSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique 128-bit UUID identifying a Face Liveness session.</p>
     */
    inline CreateFaceLivenessSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFaceLivenessSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFaceLivenessSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFaceLivenessSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sessionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
