/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ThumbnailDetail.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeThumbnailsResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeThumbnailsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThumbnailsResult
  {
  public:
    AWS_MEDIALIVE_API DescribeThumbnailsResult() = default;
    AWS_MEDIALIVE_API DescribeThumbnailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeThumbnailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<ThumbnailDetail>& GetThumbnailDetails() const { return m_thumbnailDetails; }
    template<typename ThumbnailDetailsT = Aws::Vector<ThumbnailDetail>>
    void SetThumbnailDetails(ThumbnailDetailsT&& value) { m_thumbnailDetailsHasBeenSet = true; m_thumbnailDetails = std::forward<ThumbnailDetailsT>(value); }
    template<typename ThumbnailDetailsT = Aws::Vector<ThumbnailDetail>>
    DescribeThumbnailsResult& WithThumbnailDetails(ThumbnailDetailsT&& value) { SetThumbnailDetails(std::forward<ThumbnailDetailsT>(value)); return *this;}
    template<typename ThumbnailDetailsT = ThumbnailDetail>
    DescribeThumbnailsResult& AddThumbnailDetails(ThumbnailDetailsT&& value) { m_thumbnailDetailsHasBeenSet = true; m_thumbnailDetails.emplace_back(std::forward<ThumbnailDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThumbnailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThumbnailDetail> m_thumbnailDetails;
    bool m_thumbnailDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
