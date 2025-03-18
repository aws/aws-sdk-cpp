/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ResolutionContact.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListPageResolutionsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPageResolutionsResult() = default;
    AWS_SSMCONTACTS_API ListPageResolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPageResolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPageResolutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resolution for an engagement.</p>
     */
    inline const Aws::Vector<ResolutionContact>& GetPageResolutions() const { return m_pageResolutions; }
    template<typename PageResolutionsT = Aws::Vector<ResolutionContact>>
    void SetPageResolutions(PageResolutionsT&& value) { m_pageResolutionsHasBeenSet = true; m_pageResolutions = std::forward<PageResolutionsT>(value); }
    template<typename PageResolutionsT = Aws::Vector<ResolutionContact>>
    ListPageResolutionsResult& WithPageResolutions(PageResolutionsT&& value) { SetPageResolutions(std::forward<PageResolutionsT>(value)); return *this;}
    template<typename PageResolutionsT = ResolutionContact>
    ListPageResolutionsResult& AddPageResolutions(PageResolutionsT&& value) { m_pageResolutionsHasBeenSet = true; m_pageResolutions.emplace_back(std::forward<PageResolutionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPageResolutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResolutionContact> m_pageResolutions;
    bool m_pageResolutionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
