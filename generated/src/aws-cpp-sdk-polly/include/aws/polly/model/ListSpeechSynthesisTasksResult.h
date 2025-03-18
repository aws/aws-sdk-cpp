/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/SynthesisTask.h>
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
  class ListSpeechSynthesisTasksResult
  {
  public:
    AWS_POLLY_API ListSpeechSynthesisTasksResult() = default;
    AWS_POLLY_API ListSpeechSynthesisTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API ListSpeechSynthesisTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSpeechSynthesisTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline const Aws::Vector<SynthesisTask>& GetSynthesisTasks() const { return m_synthesisTasks; }
    template<typename SynthesisTasksT = Aws::Vector<SynthesisTask>>
    void SetSynthesisTasks(SynthesisTasksT&& value) { m_synthesisTasksHasBeenSet = true; m_synthesisTasks = std::forward<SynthesisTasksT>(value); }
    template<typename SynthesisTasksT = Aws::Vector<SynthesisTask>>
    ListSpeechSynthesisTasksResult& WithSynthesisTasks(SynthesisTasksT&& value) { SetSynthesisTasks(std::forward<SynthesisTasksT>(value)); return *this;}
    template<typename SynthesisTasksT = SynthesisTask>
    ListSpeechSynthesisTasksResult& AddSynthesisTasks(SynthesisTasksT&& value) { m_synthesisTasksHasBeenSet = true; m_synthesisTasks.emplace_back(std::forward<SynthesisTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSpeechSynthesisTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SynthesisTask> m_synthesisTasks;
    bool m_synthesisTasksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
