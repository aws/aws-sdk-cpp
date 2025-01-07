/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/SolutionBase.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class ListSolutionsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult();
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSolutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSolutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSolutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array with minimal details for solutions matching the request
     * criteria.</p>
     */
    inline const Aws::Vector<SolutionBase>& GetSolutionSummaries() const{ return m_solutionSummaries; }
    inline void SetSolutionSummaries(const Aws::Vector<SolutionBase>& value) { m_solutionSummaries = value; }
    inline void SetSolutionSummaries(Aws::Vector<SolutionBase>&& value) { m_solutionSummaries = std::move(value); }
    inline ListSolutionsResult& WithSolutionSummaries(const Aws::Vector<SolutionBase>& value) { SetSolutionSummaries(value); return *this;}
    inline ListSolutionsResult& WithSolutionSummaries(Aws::Vector<SolutionBase>&& value) { SetSolutionSummaries(std::move(value)); return *this;}
    inline ListSolutionsResult& AddSolutionSummaries(const SolutionBase& value) { m_solutionSummaries.push_back(value); return *this; }
    inline ListSolutionsResult& AddSolutionSummaries(SolutionBase&& value) { m_solutionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSolutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSolutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSolutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SolutionBase> m_solutionSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
