/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/FraudsterRegistrationJob.h>
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


    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline const FraudsterRegistrationJob& GetJob() const{ return m_job; }

    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline void SetJob(const FraudsterRegistrationJob& value) { m_job = value; }

    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline void SetJob(FraudsterRegistrationJob&& value) { m_job = std::move(value); }

    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline DescribeFraudsterRegistrationJobResult& WithJob(const FraudsterRegistrationJob& value) { SetJob(value); return *this;}

    /**
     * <p>Contains details about the specified fraudster registration job.</p>
     */
    inline DescribeFraudsterRegistrationJobResult& WithJob(FraudsterRegistrationJob&& value) { SetJob(std::move(value)); return *this;}

  private:

    FraudsterRegistrationJob m_job;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
