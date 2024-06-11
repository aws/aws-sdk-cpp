﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobForWorkteamSummary.h>
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
  class ListLabelingJobsForWorkteamResult
  {
  public:
    AWS_SAGEMAKER_API ListLabelingJobsForWorkteamResult();
    AWS_SAGEMAKER_API ListLabelingJobsForWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListLabelingJobsForWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline const Aws::Vector<LabelingJobForWorkteamSummary>& GetLabelingJobSummaryList() const{ return m_labelingJobSummaryList; }
    inline void SetLabelingJobSummaryList(const Aws::Vector<LabelingJobForWorkteamSummary>& value) { m_labelingJobSummaryList = value; }
    inline void SetLabelingJobSummaryList(Aws::Vector<LabelingJobForWorkteamSummary>&& value) { m_labelingJobSummaryList = std::move(value); }
    inline ListLabelingJobsForWorkteamResult& WithLabelingJobSummaryList(const Aws::Vector<LabelingJobForWorkteamSummary>& value) { SetLabelingJobSummaryList(value); return *this;}
    inline ListLabelingJobsForWorkteamResult& WithLabelingJobSummaryList(Aws::Vector<LabelingJobForWorkteamSummary>&& value) { SetLabelingJobSummaryList(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamResult& AddLabelingJobSummaryList(const LabelingJobForWorkteamSummary& value) { m_labelingJobSummaryList.push_back(value); return *this; }
    inline ListLabelingJobsForWorkteamResult& AddLabelingJobSummaryList(LabelingJobForWorkteamSummary&& value) { m_labelingJobSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLabelingJobsForWorkteamResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLabelingJobsForWorkteamResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLabelingJobsForWorkteamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLabelingJobsForWorkteamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LabelingJobForWorkteamSummary> m_labelingJobSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
