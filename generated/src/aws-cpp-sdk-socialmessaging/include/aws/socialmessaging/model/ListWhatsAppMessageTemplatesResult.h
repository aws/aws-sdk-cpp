/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/model/TemplateSummary.h>
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
namespace SocialMessaging
{
namespace Model
{
  class ListWhatsAppMessageTemplatesResult
  {
  public:
    AWS_SOCIALMESSAGING_API ListWhatsAppMessageTemplatesResult() = default;
    AWS_SOCIALMESSAGING_API ListWhatsAppMessageTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API ListWhatsAppMessageTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of template summaries.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplates() const { return m_templates; }
    template<typename TemplatesT = Aws::Vector<TemplateSummary>>
    void SetTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates = std::forward<TemplatesT>(value); }
    template<typename TemplatesT = Aws::Vector<TemplateSummary>>
    ListWhatsAppMessageTemplatesResult& WithTemplates(TemplatesT&& value) { SetTemplates(std::forward<TemplatesT>(value)); return *this;}
    template<typename TemplatesT = TemplateSummary>
    ListWhatsAppMessageTemplatesResult& AddTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates.emplace_back(std::forward<TemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results, if any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWhatsAppMessageTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWhatsAppMessageTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateSummary> m_templates;
    bool m_templatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
