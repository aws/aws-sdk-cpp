/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{
  class GetActivityTaskResult
  {
  public:
    AWS_SFN_API GetActivityTaskResult() = default;
    AWS_SFN_API GetActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API GetActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const { return m_taskToken; }
    template<typename TaskTokenT = Aws::String>
    void SetTaskToken(TaskTokenT&& value) { m_taskTokenHasBeenSet = true; m_taskToken = std::forward<TaskTokenT>(value); }
    template<typename TaskTokenT = Aws::String>
    GetActivityTaskResult& WithTaskToken(TaskTokenT&& value) { SetTaskToken(std::forward<TaskTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    GetActivityTaskResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetActivityTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
