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
  class AssociateFraudsterResult
  {
  public:
    AWS_VOICEID_API AssociateFraudsterResult();
    AWS_VOICEID_API AssociateFraudsterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API AssociateFraudsterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Fraudster& GetFraudster() const{ return m_fraudster; }

    
    inline void SetFraudster(const Fraudster& value) { m_fraudster = value; }

    
    inline void SetFraudster(Fraudster&& value) { m_fraudster = std::move(value); }

    
    inline AssociateFraudsterResult& WithFraudster(const Fraudster& value) { SetFraudster(value); return *this;}

    
    inline AssociateFraudsterResult& WithFraudster(Fraudster&& value) { SetFraudster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateFraudsterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateFraudsterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateFraudsterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Fraudster m_fraudster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
