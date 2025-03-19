/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/UnprocessedTraceSegment.h>
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
namespace XRay
{
namespace Model
{
  class PutTraceSegmentsResult
  {
  public:
    AWS_XRAY_API PutTraceSegmentsResult() = default;
    AWS_XRAY_API PutTraceSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API PutTraceSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Segments that failed processing.</p>
     */
    inline const Aws::Vector<UnprocessedTraceSegment>& GetUnprocessedTraceSegments() const { return m_unprocessedTraceSegments; }
    template<typename UnprocessedTraceSegmentsT = Aws::Vector<UnprocessedTraceSegment>>
    void SetUnprocessedTraceSegments(UnprocessedTraceSegmentsT&& value) { m_unprocessedTraceSegmentsHasBeenSet = true; m_unprocessedTraceSegments = std::forward<UnprocessedTraceSegmentsT>(value); }
    template<typename UnprocessedTraceSegmentsT = Aws::Vector<UnprocessedTraceSegment>>
    PutTraceSegmentsResult& WithUnprocessedTraceSegments(UnprocessedTraceSegmentsT&& value) { SetUnprocessedTraceSegments(std::forward<UnprocessedTraceSegmentsT>(value)); return *this;}
    template<typename UnprocessedTraceSegmentsT = UnprocessedTraceSegment>
    PutTraceSegmentsResult& AddUnprocessedTraceSegments(UnprocessedTraceSegmentsT&& value) { m_unprocessedTraceSegmentsHasBeenSet = true; m_unprocessedTraceSegments.emplace_back(std::forward<UnprocessedTraceSegmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutTraceSegmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnprocessedTraceSegment> m_unprocessedTraceSegments;
    bool m_unprocessedTraceSegmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
