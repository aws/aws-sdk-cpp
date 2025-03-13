/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/TraceSegmentDestination.h>
#include <aws/xray/model/TraceSegmentDestinationStatus.h>
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
namespace XRay
{
namespace Model
{
  class UpdateTraceSegmentDestinationResult
  {
  public:
    AWS_XRAY_API UpdateTraceSegmentDestinationResult() = default;
    AWS_XRAY_API UpdateTraceSegmentDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API UpdateTraceSegmentDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The destination of the trace segments. </p>
     */
    inline TraceSegmentDestination GetDestination() const { return m_destination; }
    inline void SetDestination(TraceSegmentDestination value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline UpdateTraceSegmentDestinationResult& WithDestination(TraceSegmentDestination value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the update. </p>
     */
    inline TraceSegmentDestinationStatus GetStatus() const { return m_status; }
    inline void SetStatus(TraceSegmentDestinationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateTraceSegmentDestinationResult& WithStatus(TraceSegmentDestinationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTraceSegmentDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TraceSegmentDestination m_destination{TraceSegmentDestination::NOT_SET};
    bool m_destinationHasBeenSet = false;

    TraceSegmentDestinationStatus m_status{TraceSegmentDestinationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
