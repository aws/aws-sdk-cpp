/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAssociationsResult
  {
  public:
    AWS_SAGEMAKER_API ListAssociationsResult() = default;
    AWS_SAGEMAKER_API ListAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of associations and their properties.</p>
     */
    inline const Aws::Vector<AssociationSummary>& GetAssociationSummaries() const { return m_associationSummaries; }
    template<typename AssociationSummariesT = Aws::Vector<AssociationSummary>>
    void SetAssociationSummaries(AssociationSummariesT&& value) { m_associationSummariesHasBeenSet = true; m_associationSummaries = std::forward<AssociationSummariesT>(value); }
    template<typename AssociationSummariesT = Aws::Vector<AssociationSummary>>
    ListAssociationsResult& WithAssociationSummaries(AssociationSummariesT&& value) { SetAssociationSummaries(std::forward<AssociationSummariesT>(value)); return *this;}
    template<typename AssociationSummariesT = AssociationSummary>
    ListAssociationsResult& AddAssociationSummaries(AssociationSummariesT&& value) { m_associationSummariesHasBeenSet = true; m_associationSummaries.emplace_back(std::forward<AssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of associations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationSummary> m_associationSummaries;
    bool m_associationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
