/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetSegmentsResult
  {
  public:
    AWS_PINPOINT_API GetSegmentsResult() = default;
    AWS_PINPOINT_API GetSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const SegmentsResponse& GetSegmentsResponse() const { return m_segmentsResponse; }
    template<typename SegmentsResponseT = SegmentsResponse>
    void SetSegmentsResponse(SegmentsResponseT&& value) { m_segmentsResponseHasBeenSet = true; m_segmentsResponse = std::forward<SegmentsResponseT>(value); }
    template<typename SegmentsResponseT = SegmentsResponse>
    GetSegmentsResult& WithSegmentsResponse(SegmentsResponseT&& value) { SetSegmentsResponse(std::forward<SegmentsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SegmentsResponse m_segmentsResponse;
    bool m_segmentsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
