/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/DomainSuggestion.h>
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
namespace Route53Domains
{
namespace Model
{
  class GetDomainSuggestionsResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult() = default;
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetDomainSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of possible domain names. If you specified <code>true</code> for
     * <code>OnlyAvailable</code> in the request, the list contains only domains that
     * are available for registration.</p>
     */
    inline const Aws::Vector<DomainSuggestion>& GetSuggestionsList() const { return m_suggestionsList; }
    template<typename SuggestionsListT = Aws::Vector<DomainSuggestion>>
    void SetSuggestionsList(SuggestionsListT&& value) { m_suggestionsListHasBeenSet = true; m_suggestionsList = std::forward<SuggestionsListT>(value); }
    template<typename SuggestionsListT = Aws::Vector<DomainSuggestion>>
    GetDomainSuggestionsResult& WithSuggestionsList(SuggestionsListT&& value) { SetSuggestionsList(std::forward<SuggestionsListT>(value)); return *this;}
    template<typename SuggestionsListT = DomainSuggestion>
    GetDomainSuggestionsResult& AddSuggestionsList(SuggestionsListT&& value) { m_suggestionsListHasBeenSet = true; m_suggestionsList.emplace_back(std::forward<SuggestionsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainSuggestionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainSuggestion> m_suggestionsList;
    bool m_suggestionsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
