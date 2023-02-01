/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/CheckSummary.h>
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
  class ListCheckSummariesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListCheckSummariesResult();
    AWS_WELLARCHITECTED_API ListCheckSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListCheckSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline const Aws::Vector<CheckSummary>& GetCheckSummaries() const{ return m_checkSummaries; }

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline void SetCheckSummaries(const Aws::Vector<CheckSummary>& value) { m_checkSummaries = value; }

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline void SetCheckSummaries(Aws::Vector<CheckSummary>&& value) { m_checkSummaries = std::move(value); }

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline ListCheckSummariesResult& WithCheckSummaries(const Aws::Vector<CheckSummary>& value) { SetCheckSummaries(value); return *this;}

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline ListCheckSummariesResult& WithCheckSummaries(Aws::Vector<CheckSummary>&& value) { SetCheckSummaries(std::move(value)); return *this;}

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline ListCheckSummariesResult& AddCheckSummaries(const CheckSummary& value) { m_checkSummaries.push_back(value); return *this; }

    /**
     * <p>List of Trusted Advisor summaries related to the Well-Architected best
     * practice.</p>
     */
    inline ListCheckSummariesResult& AddCheckSummaries(CheckSummary&& value) { m_checkSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListCheckSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCheckSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCheckSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CheckSummary> m_checkSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
