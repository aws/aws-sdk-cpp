/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsControlAssociationSummary.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListStandardsControlAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult() = default;
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array that provides the enablement status and other details for each
     * security control that applies to each enabled standard. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationSummary>& GetStandardsControlAssociationSummaries() const { return m_standardsControlAssociationSummaries; }
    template<typename StandardsControlAssociationSummariesT = Aws::Vector<StandardsControlAssociationSummary>>
    void SetStandardsControlAssociationSummaries(StandardsControlAssociationSummariesT&& value) { m_standardsControlAssociationSummariesHasBeenSet = true; m_standardsControlAssociationSummaries = std::forward<StandardsControlAssociationSummariesT>(value); }
    template<typename StandardsControlAssociationSummariesT = Aws::Vector<StandardsControlAssociationSummary>>
    ListStandardsControlAssociationsResult& WithStandardsControlAssociationSummaries(StandardsControlAssociationSummariesT&& value) { SetStandardsControlAssociationSummaries(std::forward<StandardsControlAssociationSummariesT>(value)); return *this;}
    template<typename StandardsControlAssociationSummariesT = StandardsControlAssociationSummary>
    ListStandardsControlAssociationsResult& AddStandardsControlAssociationSummaries(StandardsControlAssociationSummariesT&& value) { m_standardsControlAssociationSummariesHasBeenSet = true; m_standardsControlAssociationSummaries.emplace_back(std::forward<StandardsControlAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStandardsControlAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStandardsControlAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StandardsControlAssociationSummary> m_standardsControlAssociationSummaries;
    bool m_standardsControlAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
