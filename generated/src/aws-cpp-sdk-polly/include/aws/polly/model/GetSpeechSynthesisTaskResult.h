﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/SynthesisTask.h>
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
namespace Polly
{
namespace Model
{
  class GetSpeechSynthesisTaskResult
  {
  public:
    AWS_POLLY_API GetSpeechSynthesisTaskResult();
    AWS_POLLY_API GetSpeechSynthesisTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API GetSpeechSynthesisTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>SynthesisTask object that provides information from the requested task,
     * including output format, creation time, task status, and so on.</p>
     */
    inline const SynthesisTask& GetSynthesisTask() const{ return m_synthesisTask; }
    inline void SetSynthesisTask(const SynthesisTask& value) { m_synthesisTask = value; }
    inline void SetSynthesisTask(SynthesisTask&& value) { m_synthesisTask = std::move(value); }
    inline GetSpeechSynthesisTaskResult& WithSynthesisTask(const SynthesisTask& value) { SetSynthesisTask(value); return *this;}
    inline GetSpeechSynthesisTaskResult& WithSynthesisTask(SynthesisTask&& value) { SetSynthesisTask(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSpeechSynthesisTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSpeechSynthesisTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSpeechSynthesisTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SynthesisTask m_synthesisTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
