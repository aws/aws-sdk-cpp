﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/FraudsterRegistrationJob.h>
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
  class DescribeFraudsterRegistrationJobResult
  {
  public:
    AWS_VOICEID_API DescribeFraudsterRegistrationJobResult();
    AWS_VOICEID_API DescribeFraudsterRegistrationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeFraudsterRegistrationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline const FraudsterRegistrationJob& GetJob() const{ return m_job; }
    inline void SetJob(const FraudsterRegistrationJob& value) { m_job = value; }
    inline void SetJob(FraudsterRegistrationJob&& value) { m_job = std::move(value); }
    inline DescribeFraudsterRegistrationJobResult& WithJob(const FraudsterRegistrationJob& value) { SetJob(value); return *this;}
    inline DescribeFraudsterRegistrationJobResult& WithJob(FraudsterRegistrationJob&& value) { SetJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFraudsterRegistrationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFraudsterRegistrationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFraudsterRegistrationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FraudsterRegistrationJob m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
