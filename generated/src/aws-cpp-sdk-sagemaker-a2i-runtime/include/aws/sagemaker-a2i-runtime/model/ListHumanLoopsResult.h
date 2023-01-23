/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopSummary.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{
  class ListHumanLoopsResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult();
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API ListHumanLoopsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline const Aws::Vector<HumanLoopSummary>& GetHumanLoopSummaries() const{ return m_humanLoopSummaries; }

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline void SetHumanLoopSummaries(const Aws::Vector<HumanLoopSummary>& value) { m_humanLoopSummaries = value; }

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline void SetHumanLoopSummaries(Aws::Vector<HumanLoopSummary>&& value) { m_humanLoopSummaries = std::move(value); }

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline ListHumanLoopsResult& WithHumanLoopSummaries(const Aws::Vector<HumanLoopSummary>& value) { SetHumanLoopSummaries(value); return *this;}

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline ListHumanLoopsResult& WithHumanLoopSummaries(Aws::Vector<HumanLoopSummary>&& value) { SetHumanLoopSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline ListHumanLoopsResult& AddHumanLoopSummaries(const HumanLoopSummary& value) { m_humanLoopSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain information about the human loops.</p>
     */
    inline ListHumanLoopsResult& AddHumanLoopSummaries(HumanLoopSummary&& value) { m_humanLoopSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to display the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to display the next page of results.</p>
     */
    inline ListHumanLoopsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HumanLoopSummary> m_humanLoopSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
