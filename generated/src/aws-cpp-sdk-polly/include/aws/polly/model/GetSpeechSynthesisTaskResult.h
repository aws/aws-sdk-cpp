/**
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
    AWS_POLLY_API GetSpeechSynthesisTaskResult() = default;
    AWS_POLLY_API GetSpeechSynthesisTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API GetSpeechSynthesisTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>SynthesisTask object that provides information from the requested task,
     * including output format, creation time, task status, and so on.</p>
     */
    inline const SynthesisTask& GetSynthesisTask() const { return m_synthesisTask; }
    template<typename SynthesisTaskT = SynthesisTask>
    void SetSynthesisTask(SynthesisTaskT&& value) { m_synthesisTaskHasBeenSet = true; m_synthesisTask = std::forward<SynthesisTaskT>(value); }
    template<typename SynthesisTaskT = SynthesisTask>
    GetSpeechSynthesisTaskResult& WithSynthesisTask(SynthesisTaskT&& value) { SetSynthesisTask(std::forward<SynthesisTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSpeechSynthesisTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SynthesisTask m_synthesisTask;
    bool m_synthesisTaskHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
