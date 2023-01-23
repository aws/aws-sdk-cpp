/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobSummary.h>
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
  class ListLabelingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListLabelingJobsResult();
    AWS_SAGEMAKER_API ListLabelingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListLabelingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline const Aws::Vector<LabelingJobSummary>& GetLabelingJobSummaryList() const{ return m_labelingJobSummaryList; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline void SetLabelingJobSummaryList(const Aws::Vector<LabelingJobSummary>& value) { m_labelingJobSummaryList = value; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline void SetLabelingJobSummaryList(Aws::Vector<LabelingJobSummary>&& value) { m_labelingJobSummaryList = std::move(value); }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsResult& WithLabelingJobSummaryList(const Aws::Vector<LabelingJobSummary>& value) { SetLabelingJobSummaryList(value); return *this;}

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsResult& WithLabelingJobSummaryList(Aws::Vector<LabelingJobSummary>&& value) { SetLabelingJobSummaryList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsResult& AddLabelingJobSummaryList(const LabelingJobSummary& value) { m_labelingJobSummaryList.push_back(value); return *this; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsResult& AddLabelingJobSummaryList(LabelingJobSummary&& value) { m_labelingJobSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LabelingJobSummary> m_labelingJobSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
