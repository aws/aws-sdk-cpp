﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Solution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeSolutionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeSolutionResult();
    AWS_PERSONALIZE_API DescribeSolutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeSolutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the solution.</p>
     */
    inline const Solution& GetSolution() const{ return m_solution; }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline void SetSolution(const Solution& value) { m_solution = value; }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline void SetSolution(Solution&& value) { m_solution = std::move(value); }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline DescribeSolutionResult& WithSolution(const Solution& value) { SetSolution(value); return *this;}

    /**
     * <p>An object that describes the solution.</p>
     */
    inline DescribeSolutionResult& WithSolution(Solution&& value) { SetSolution(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSolutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSolutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSolutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Solution m_solution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
