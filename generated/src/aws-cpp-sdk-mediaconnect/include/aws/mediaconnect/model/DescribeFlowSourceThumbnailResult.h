/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ThumbnailDetails.h>
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
namespace MediaConnect
{
namespace Model
{
  class DescribeFlowSourceThumbnailResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult() = default;
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the thumbnail, including thumbnail base64 string, timecode and
     * the time when thumbnail was generated. </p>
     */
    inline const ThumbnailDetails& GetThumbnailDetails() const { return m_thumbnailDetails; }
    template<typename ThumbnailDetailsT = ThumbnailDetails>
    void SetThumbnailDetails(ThumbnailDetailsT&& value) { m_thumbnailDetailsHasBeenSet = true; m_thumbnailDetails = std::forward<ThumbnailDetailsT>(value); }
    template<typename ThumbnailDetailsT = ThumbnailDetails>
    DescribeFlowSourceThumbnailResult& WithThumbnailDetails(ThumbnailDetailsT&& value) { SetThumbnailDetails(std::forward<ThumbnailDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowSourceThumbnailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ThumbnailDetails m_thumbnailDetails;
    bool m_thumbnailDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
