/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ActionSummary.h>
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
  class ListActionsResult
  {
  public:
    AWS_SAGEMAKER_API ListActionsResult();
    AWS_SAGEMAKER_API ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of actions and their properties.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const{ return m_actionSummaries; }

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline void SetActionSummaries(const Aws::Vector<ActionSummary>& value) { m_actionSummaries = value; }

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline void SetActionSummaries(Aws::Vector<ActionSummary>&& value) { m_actionSummaries = std::move(value); }

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline ListActionsResult& WithActionSummaries(const Aws::Vector<ActionSummary>& value) { SetActionSummaries(value); return *this;}

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline ListActionsResult& WithActionSummaries(Aws::Vector<ActionSummary>&& value) { SetActionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline ListActionsResult& AddActionSummaries(const ActionSummary& value) { m_actionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of actions and their properties.</p>
     */
    inline ListActionsResult& AddActionSummaries(ActionSummary&& value) { m_actionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of actions, if there are any.</p>
     */
    inline ListActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActionSummary> m_actionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
