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
    AWS_MEDIACONVERT_API ProbeSdkResult();
    AWS_MEDIACONVERT_API ProbeSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ProbeSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of probe results for the input media file(s).
     */
    inline const Aws::Vector<ProbeResult>& GetProbeResults() const{ return m_probeResults; }
    inline void SetProbeResults(const Aws::Vector<ProbeResult>& value) { m_probeResults = value; }
    inline void SetProbeResults(Aws::Vector<ProbeResult>&& value) { m_probeResults = std::move(value); }
    inline ProbeSdkResult& WithProbeResults(const Aws::Vector<ProbeResult>& value) { SetProbeResults(value); return *this;}
    inline ProbeSdkResult& WithProbeResults(Aws::Vector<ProbeResult>&& value) { SetProbeResults(std::move(value)); return *this;}
    inline ProbeSdkResult& AddProbeResults(const ProbeResult& value) { m_probeResults.push_back(value); return *this; }
    inline ProbeSdkResult& AddProbeResults(ProbeResult&& value) { m_probeResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ProbeSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ProbeSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ProbeSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProbeResult> m_probeResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
