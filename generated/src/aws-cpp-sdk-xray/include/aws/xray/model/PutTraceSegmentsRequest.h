/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class PutTraceSegmentsRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API PutTraceSegmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTraceSegments"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceSegmentDocuments() const { return m_traceSegmentDocuments; }
    inline bool TraceSegmentDocumentsHasBeenSet() const { return m_traceSegmentDocumentsHasBeenSet; }
    template<typename TraceSegmentDocumentsT = Aws::Vector<Aws::String>>
    void SetTraceSegmentDocuments(TraceSegmentDocumentsT&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments = std::forward<TraceSegmentDocumentsT>(value); }
    template<typename TraceSegmentDocumentsT = Aws::Vector<Aws::String>>
    PutTraceSegmentsRequest& WithTraceSegmentDocuments(TraceSegmentDocumentsT&& value) { SetTraceSegmentDocuments(std::forward<TraceSegmentDocumentsT>(value)); return *this;}
    template<typename TraceSegmentDocumentsT = Aws::String>
    PutTraceSegmentsRequest& AddTraceSegmentDocuments(TraceSegmentDocumentsT&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.emplace_back(std::forward<TraceSegmentDocumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_traceSegmentDocuments;
    bool m_traceSegmentDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
