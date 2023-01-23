/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureGroupSummary.h>
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
  class ListFeatureGroupsResult
  {
  public:
    AWS_SAGEMAKER_API ListFeatureGroupsResult();
    AWS_SAGEMAKER_API ListFeatureGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListFeatureGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A summary of feature groups.</p>
     */
    inline const Aws::Vector<FeatureGroupSummary>& GetFeatureGroupSummaries() const{ return m_featureGroupSummaries; }

    /**
     * <p>A summary of feature groups.</p>
     */
    inline void SetFeatureGroupSummaries(const Aws::Vector<FeatureGroupSummary>& value) { m_featureGroupSummaries = value; }

    /**
     * <p>A summary of feature groups.</p>
     */
    inline void SetFeatureGroupSummaries(Aws::Vector<FeatureGroupSummary>&& value) { m_featureGroupSummaries = std::move(value); }

    /**
     * <p>A summary of feature groups.</p>
     */
    inline ListFeatureGroupsResult& WithFeatureGroupSummaries(const Aws::Vector<FeatureGroupSummary>& value) { SetFeatureGroupSummaries(value); return *this;}

    /**
     * <p>A summary of feature groups.</p>
     */
    inline ListFeatureGroupsResult& WithFeatureGroupSummaries(Aws::Vector<FeatureGroupSummary>&& value) { SetFeatureGroupSummaries(std::move(value)); return *this;}

    /**
     * <p>A summary of feature groups.</p>
     */
    inline ListFeatureGroupsResult& AddFeatureGroupSummaries(const FeatureGroupSummary& value) { m_featureGroupSummaries.push_back(value); return *this; }

    /**
     * <p>A summary of feature groups.</p>
     */
    inline ListFeatureGroupsResult& AddFeatureGroupSummaries(FeatureGroupSummary&& value) { m_featureGroupSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline ListFeatureGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline ListFeatureGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline ListFeatureGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FeatureGroupSummary> m_featureGroupSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
