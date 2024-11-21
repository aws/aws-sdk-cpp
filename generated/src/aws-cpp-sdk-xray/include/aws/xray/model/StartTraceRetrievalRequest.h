﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class StartTraceRetrievalRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API StartTraceRetrievalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTraceRetrieval"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specify the trace IDs of the traces to be retrieved. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceIds() const{ return m_traceIds; }
    inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }
    inline void SetTraceIds(const Aws::Vector<Aws::String>& value) { m_traceIdsHasBeenSet = true; m_traceIds = value; }
    inline void SetTraceIds(Aws::Vector<Aws::String>&& value) { m_traceIdsHasBeenSet = true; m_traceIds = std::move(value); }
    inline StartTraceRetrievalRequest& WithTraceIds(const Aws::Vector<Aws::String>& value) { SetTraceIds(value); return *this;}
    inline StartTraceRetrievalRequest& WithTraceIds(Aws::Vector<Aws::String>&& value) { SetTraceIds(std::move(value)); return *this;}
    inline StartTraceRetrievalRequest& AddTraceIds(const Aws::String& value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(value); return *this; }
    inline StartTraceRetrievalRequest& AddTraceIds(Aws::String&& value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(std::move(value)); return *this; }
    inline StartTraceRetrievalRequest& AddTraceIds(const char* value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The start of the time range to retrieve traces. The range is inclusive, so
     * the specified start time is included in the query. Specified as epoch time, the
     * number of seconds since January 1, 1970, 00:00:00 UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline StartTraceRetrievalRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline StartTraceRetrievalRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end of the time range to retrieve traces. The range is inclusive, so the
     * specified end time is included in the query. Specified as epoch time, the number
     * of seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline StartTraceRetrievalRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline StartTraceRetrievalRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_traceIds;
    bool m_traceIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
