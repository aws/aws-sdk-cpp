/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/ProbeResult.h>
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
namespace MediaConvert
{
namespace Model
{
  class ProbeSdkResult
  {
  public:
    AWS_MEDIACONVERT_API ProbeSdkResult() = default;
    AWS_MEDIACONVERT_API ProbeSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ProbeSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Probe results for your media file.
     */
    inline const Aws::Vector<ProbeResult>& GetProbeResults() const { return m_probeResults; }
    template<typename ProbeResultsT = Aws::Vector<ProbeResult>>
    void SetProbeResults(ProbeResultsT&& value) { m_probeResultsHasBeenSet = true; m_probeResults = std::forward<ProbeResultsT>(value); }
    template<typename ProbeResultsT = Aws::Vector<ProbeResult>>
    ProbeSdkResult& WithProbeResults(ProbeResultsT&& value) { SetProbeResults(std::forward<ProbeResultsT>(value)); return *this;}
    template<typename ProbeResultsT = ProbeResult>
    ProbeSdkResult& AddProbeResults(ProbeResultsT&& value) { m_probeResultsHasBeenSet = true; m_probeResults.emplace_back(std::forward<ProbeResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ProbeSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProbeResult> m_probeResults;
    bool m_probeResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
