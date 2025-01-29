/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeAudioEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeSessionControlEvent.h>
#include <aws/transcribestreaming/model/MedicalScribeConfigurationEvent.h>
#include <utility>
#include <aws/core/utils/event/EventStream.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>An encoded stream of events. The stream is encoded as HTTP/2 data frames.</p>
   * <p>An input stream consists of the following types of events. The first element
   * of the input stream must be the <code>MedicalScribeConfigurationEvent</code>
   * event type.</p> <ul> <li> <p> <code>MedicalScribeConfigurationEvent</code> </p>
   * </li> <li> <p> <code>MedicalScribeAudioEvent</code> </p> </li> <li> <p>
   * <code>MedicalScribeSessionControlEvent</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeInputStream">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeInputStream : public Aws::Utils::Event::EventEncoderStream
  {
  public:
    MedicalScribeInputStream& WriteMedicalScribeAudioEvent(const MedicalScribeAudioEvent& value)
    {
       Aws::Utils::Event::Message msg;
       if(!value.GetAudioChunk().empty())
       {
           msg.InsertEventHeader(":message-type", Aws::String("event"));
           msg.InsertEventHeader(":event-type", Aws::String("AudioEvent"));
           msg.InsertEventHeader(":content-type", Aws::String("application/octet-stream"));
           msg.WriteEventPayload(value.GetAudioChunk());
       }
       WriteEvent(msg);
       return *this;
    }
    MedicalScribeInputStream& WriteMedicalScribeSessionControlEvent(const MedicalScribeSessionControlEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("SessionControlEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    MedicalScribeInputStream& WriteMedicalScribeConfigurationEvent(const MedicalScribeConfigurationEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("ConfigurationEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
