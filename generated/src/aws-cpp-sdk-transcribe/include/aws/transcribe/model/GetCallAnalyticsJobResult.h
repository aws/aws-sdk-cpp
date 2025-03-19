/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CallAnalyticsJob.h>
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
namespace TranscribeService
{
namespace Model
{
  class GetCallAnalyticsJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetCallAnalyticsJobResult() = default;
    AWS_TRANSCRIBESERVICE_API GetCallAnalyticsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetCallAnalyticsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides detailed information about the specified Call Analytics job,
     * including job status and, if applicable, failure reason.</p>
     */
    inline const CallAnalyticsJob& GetCallAnalyticsJob() const { return m_callAnalyticsJob; }
    template<typename CallAnalyticsJobT = CallAnalyticsJob>
    void SetCallAnalyticsJob(CallAnalyticsJobT&& value) { m_callAnalyticsJobHasBeenSet = true; m_callAnalyticsJob = std::forward<CallAnalyticsJobT>(value); }
    template<typename CallAnalyticsJobT = CallAnalyticsJob>
    GetCallAnalyticsJobResult& WithCallAnalyticsJob(CallAnalyticsJobT&& value) { SetCallAnalyticsJob(std::forward<CallAnalyticsJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCallAnalyticsJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CallAnalyticsJob m_callAnalyticsJob;
    bool m_callAnalyticsJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
