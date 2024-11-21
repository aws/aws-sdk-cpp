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
    AWS_XRAY_API UpdateTraceSegmentDestinationResult();
    AWS_XRAY_API UpdateTraceSegmentDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API UpdateTraceSegmentDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The destination of the trace segments. </p>
     */
    inline const TraceSegmentDestination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const TraceSegmentDestination& value) { m_destination = value; }
    inline void SetDestination(TraceSegmentDestination&& value) { m_destination = std::move(value); }
    inline UpdateTraceSegmentDestinationResult& WithDestination(const TraceSegmentDestination& value) { SetDestination(value); return *this;}
    inline UpdateTraceSegmentDestinationResult& WithDestination(TraceSegmentDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the update. </p>
     */
    inline const TraceSegmentDestinationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TraceSegmentDestinationStatus& value) { m_status = value; }
    inline void SetStatus(TraceSegmentDestinationStatus&& value) { m_status = std::move(value); }
    inline UpdateTraceSegmentDestinationResult& WithStatus(const TraceSegmentDestinationStatus& value) { SetStatus(value); return *this;}
    inline UpdateTraceSegmentDestinationResult& WithStatus(TraceSegmentDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTraceSegmentDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTraceSegmentDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTraceSegmentDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TraceSegmentDestination m_destination;

    TraceSegmentDestinationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
