/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceTemplateSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListServiceTemplatesResult
  {
  public:
    AWS_PROTON_API ListServiceTemplatesResult() = default;
    AWS_PROTON_API ListServiceTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next service template in the array
     * of service templates, after the current requested list of service templates.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of service templates with detail data.</p>
     */
    inline const Aws::Vector<ServiceTemplateSummary>& GetTemplates() const { return m_templates; }
    template<typename TemplatesT = Aws::Vector<ServiceTemplateSummary>>
    void SetTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates = std::forward<TemplatesT>(value); }
    template<typename TemplatesT = Aws::Vector<ServiceTemplateSummary>>
    ListServiceTemplatesResult& WithTemplates(TemplatesT&& value) { SetTemplates(std::forward<TemplatesT>(value)); return *this;}
    template<typename TemplatesT = ServiceTemplateSummary>
    ListServiceTemplatesResult& AddTemplates(TemplatesT&& value) { m_templatesHasBeenSet = true; m_templates.emplace_back(std::forward<TemplatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceTemplateSummary> m_templates;
    bool m_templatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
