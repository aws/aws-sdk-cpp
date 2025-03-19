/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperience.h>
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
namespace QBusiness
{
namespace Model
{
  class ListWebExperiencesResult
  {
  public:
    AWS_QBUSINESS_API ListWebExperiencesResult() = default;
    AWS_QBUSINESS_API ListWebExperiencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListWebExperiencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more Amazon Q Business
     * experiences.</p>
     */
    inline const Aws::Vector<WebExperience>& GetWebExperiences() const { return m_webExperiences; }
    template<typename WebExperiencesT = Aws::Vector<WebExperience>>
    void SetWebExperiences(WebExperiencesT&& value) { m_webExperiencesHasBeenSet = true; m_webExperiences = std::forward<WebExperiencesT>(value); }
    template<typename WebExperiencesT = Aws::Vector<WebExperience>>
    ListWebExperiencesResult& WithWebExperiences(WebExperiencesT&& value) { SetWebExperiences(std::forward<WebExperiencesT>(value)); return *this;}
    template<typename WebExperiencesT = WebExperience>
    ListWebExperiencesResult& AddWebExperiences(WebExperiencesT&& value) { m_webExperiencesHasBeenSet = true; m_webExperiences.emplace_back(std::forward<WebExperiencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token, which you
     * can use in a later request to list the next set of messages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWebExperiencesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWebExperiencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WebExperience> m_webExperiences;
    bool m_webExperiencesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
