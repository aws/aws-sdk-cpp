/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/TemplateShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListTemplateSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListTemplateSharesResult() = default;
    AWS_WELLARCHITECTED_API ListTemplateSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListTemplateSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    ListTemplateSharesResult& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A review template share summary return object.</p>
     */
    inline const Aws::Vector<TemplateShareSummary>& GetTemplateShareSummaries() const { return m_templateShareSummaries; }
    template<typename TemplateShareSummariesT = Aws::Vector<TemplateShareSummary>>
    void SetTemplateShareSummaries(TemplateShareSummariesT&& value) { m_templateShareSummariesHasBeenSet = true; m_templateShareSummaries = std::forward<TemplateShareSummariesT>(value); }
    template<typename TemplateShareSummariesT = Aws::Vector<TemplateShareSummary>>
    ListTemplateSharesResult& WithTemplateShareSummaries(TemplateShareSummariesT&& value) { SetTemplateShareSummaries(std::forward<TemplateShareSummariesT>(value)); return *this;}
    template<typename TemplateShareSummariesT = TemplateShareSummary>
    ListTemplateSharesResult& AddTemplateShareSummaries(TemplateShareSummariesT&& value) { m_templateShareSummariesHasBeenSet = true; m_templateShareSummaries.emplace_back(std::forward<TemplateShareSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTemplateSharesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::Vector<TemplateShareSummary> m_templateShareSummaries;
    bool m_templateShareSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
