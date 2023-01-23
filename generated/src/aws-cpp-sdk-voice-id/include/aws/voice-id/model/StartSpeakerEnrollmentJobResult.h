/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/SpeakerEnrollmentJob.h>
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
  class StartSpeakerEnrollmentJobResult
  {
  public:
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult();
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API StartSpeakerEnrollmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline const SpeakerEnrollmentJob& GetJob() const{ return m_job; }

    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline void SetJob(const SpeakerEnrollmentJob& value) { m_job = value; }

    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline void SetJob(SpeakerEnrollmentJob&& value) { m_job = std::move(value); }

    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline StartSpeakerEnrollmentJobResult& WithJob(const SpeakerEnrollmentJob& value) { SetJob(value); return *this;}

    /**
     * <p>Details about the started speaker enrollment job.</p>
     */
    inline StartSpeakerEnrollmentJobResult& WithJob(SpeakerEnrollmentJob&& value) { SetJob(std::move(value)); return *this;}

  private:

    SpeakerEnrollmentJob m_job;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
