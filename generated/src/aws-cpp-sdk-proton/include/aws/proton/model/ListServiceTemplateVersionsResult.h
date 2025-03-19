/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceTemplateVersionSummary.h>
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
  class ListServiceTemplateVersionsResult
  {
  public:
    AWS_PROTON_API ListServiceTemplateVersionsResult() = default;
    AWS_PROTON_API ListServiceTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceTemplateVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline const Aws::Vector<ServiceTemplateVersionSummary>& GetTemplateVersions() const { return m_templateVersions; }
    template<typename TemplateVersionsT = Aws::Vector<ServiceTemplateVersionSummary>>
    void SetTemplateVersions(TemplateVersionsT&& value) { m_templateVersionsHasBeenSet = true; m_templateVersions = std::forward<TemplateVersionsT>(value); }
    template<typename TemplateVersionsT = Aws::Vector<ServiceTemplateVersionSummary>>
    ListServiceTemplateVersionsResult& WithTemplateVersions(TemplateVersionsT&& value) { SetTemplateVersions(std::forward<TemplateVersionsT>(value)); return *this;}
    template<typename TemplateVersionsT = ServiceTemplateVersionSummary>
    ListServiceTemplateVersionsResult& AddTemplateVersions(TemplateVersionsT&& value) { m_templateVersionsHasBeenSet = true; m_templateVersions.emplace_back(std::forward<TemplateVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceTemplateVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceTemplateVersionSummary> m_templateVersions;
    bool m_templateVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
