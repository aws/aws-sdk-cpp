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
  class GetTraceGraphRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetTraceGraphRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTraceGraph"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Trace IDs of requests for which to generate a service graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceIds() const { return m_traceIds; }
    inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }
    template<typename TraceIdsT = Aws::Vector<Aws::String>>
    void SetTraceIds(TraceIdsT&& value) { m_traceIdsHasBeenSet = true; m_traceIds = std::forward<TraceIdsT>(value); }
    template<typename TraceIdsT = Aws::Vector<Aws::String>>
    GetTraceGraphRequest& WithTraceIds(TraceIdsT&& value) { SetTraceIds(std::forward<TraceIdsT>(value)); return *this;}
    template<typename TraceIdsT = Aws::String>
    GetTraceGraphRequest& AddTraceIds(TraceIdsT&& value) { m_traceIdsHasBeenSet = true; m_traceIds.emplace_back(std::forward<TraceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTraceGraphRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_traceIds;
    bool m_traceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
