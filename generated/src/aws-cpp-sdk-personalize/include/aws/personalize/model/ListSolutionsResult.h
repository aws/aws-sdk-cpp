/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListSolutionsResult
  {
  public:
    AWS_PERSONALIZE_API ListSolutionsResult();
    AWS_PERSONALIZE_API ListSolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListSolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the current solutions.</p>
     */
    inline const Aws::Vector<SolutionSummary>& GetSolutions() const{ return m_solutions; }

    /**
     * <p>A list of the current solutions.</p>
     */
    inline void SetSolutions(const Aws::Vector<SolutionSummary>& value) { m_solutions = value; }

    /**
     * <p>A list of the current solutions.</p>
     */
    inline void SetSolutions(Aws::Vector<SolutionSummary>&& value) { m_solutions = std::move(value); }

    /**
     * <p>A list of the current solutions.</p>
     */
    inline ListSolutionsResult& WithSolutions(const Aws::Vector<SolutionSummary>& value) { SetSolutions(value); return *this;}

    /**
     * <p>A list of the current solutions.</p>
     */
    inline ListSolutionsResult& WithSolutions(Aws::Vector<SolutionSummary>&& value) { SetSolutions(std::move(value)); return *this;}

    /**
     * <p>A list of the current solutions.</p>
     */
    inline ListSolutionsResult& AddSolutions(const SolutionSummary& value) { m_solutions.push_back(value); return *this; }

    /**
     * <p>A list of the current solutions.</p>
     */
    inline ListSolutionsResult& AddSolutions(SolutionSummary&& value) { m_solutions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline ListSolutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline ListSolutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
     */
    inline ListSolutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SolutionSummary> m_solutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
