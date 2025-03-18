/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListTagOptionsResult
  {
  public:
    AWS_SERVICECATALOG_API ListTagOptionsResult() = default;
    AWS_SERVICECATALOG_API ListTagOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListTagOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the TagOptions.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptionDetails() const { return m_tagOptionDetails; }
    template<typename TagOptionDetailsT = Aws::Vector<TagOptionDetail>>
    void SetTagOptionDetails(TagOptionDetailsT&& value) { m_tagOptionDetailsHasBeenSet = true; m_tagOptionDetails = std::forward<TagOptionDetailsT>(value); }
    template<typename TagOptionDetailsT = Aws::Vector<TagOptionDetail>>
    ListTagOptionsResult& WithTagOptionDetails(TagOptionDetailsT&& value) { SetTagOptionDetails(std::forward<TagOptionDetailsT>(value)); return *this;}
    template<typename TagOptionDetailsT = TagOptionDetail>
    ListTagOptionsResult& AddTagOptionDetails(TagOptionDetailsT&& value) { m_tagOptionDetailsHasBeenSet = true; m_tagOptionDetails.emplace_back(std::forward<TagOptionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListTagOptionsResult& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTagOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagOptionDetail> m_tagOptionDetails;
    bool m_tagOptionDetailsHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
