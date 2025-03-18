/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ConstraintDetail.h>
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
  class ListConstraintsForPortfolioResult
  {
  public:
    AWS_SERVICECATALOG_API ListConstraintsForPortfolioResult() = default;
    AWS_SERVICECATALOG_API ListConstraintsForPortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListConstraintsForPortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the constraints.</p>
     */
    inline const Aws::Vector<ConstraintDetail>& GetConstraintDetails() const { return m_constraintDetails; }
    template<typename ConstraintDetailsT = Aws::Vector<ConstraintDetail>>
    void SetConstraintDetails(ConstraintDetailsT&& value) { m_constraintDetailsHasBeenSet = true; m_constraintDetails = std::forward<ConstraintDetailsT>(value); }
    template<typename ConstraintDetailsT = Aws::Vector<ConstraintDetail>>
    ListConstraintsForPortfolioResult& WithConstraintDetails(ConstraintDetailsT&& value) { SetConstraintDetails(std::forward<ConstraintDetailsT>(value)); return *this;}
    template<typename ConstraintDetailsT = ConstraintDetail>
    ListConstraintsForPortfolioResult& AddConstraintDetails(ConstraintDetailsT&& value) { m_constraintDetailsHasBeenSet = true; m_constraintDetails.emplace_back(std::forward<ConstraintDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListConstraintsForPortfolioResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConstraintsForPortfolioResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConstraintDetail> m_constraintDetails;
    bool m_constraintDetailsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
