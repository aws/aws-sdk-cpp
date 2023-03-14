/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Fraudster.h>
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
namespace VoiceID
{
namespace Model
{
  class DescribeFraudsterResult
  {
  public:
    AWS_VOICEID_API DescribeFraudsterResult();
    AWS_VOICEID_API DescribeFraudsterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeFraudsterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline const Fraudster& GetFraudster() const{ return m_fraudster; }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline void SetFraudster(const Fraudster& value) { m_fraudster = value; }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline void SetFraudster(Fraudster&& value) { m_fraudster = std::move(value); }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline DescribeFraudsterResult& WithFraudster(const Fraudster& value) { SetFraudster(value); return *this;}

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline DescribeFraudsterResult& WithFraudster(Fraudster&& value) { SetFraudster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFraudsterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFraudsterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFraudsterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Fraudster m_fraudster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
