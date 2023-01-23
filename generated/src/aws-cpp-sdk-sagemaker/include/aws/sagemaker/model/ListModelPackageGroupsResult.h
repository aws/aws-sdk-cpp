/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelPackageGroupSummary.h>
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
  class ListModelPackageGroupsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelPackageGroupsResult();
    AWS_SAGEMAKER_API ListModelPackageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelPackageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<ModelPackageGroupSummary>& GetModelPackageGroupSummaryList() const{ return m_modelPackageGroupSummaryList; }

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline void SetModelPackageGroupSummaryList(const Aws::Vector<ModelPackageGroupSummary>& value) { m_modelPackageGroupSummaryList = value; }

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline void SetModelPackageGroupSummaryList(Aws::Vector<ModelPackageGroupSummary>&& value) { m_modelPackageGroupSummaryList = std::move(value); }

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline ListModelPackageGroupsResult& WithModelPackageGroupSummaryList(const Aws::Vector<ModelPackageGroupSummary>& value) { SetModelPackageGroupSummaryList(value); return *this;}

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline ListModelPackageGroupsResult& WithModelPackageGroupSummaryList(Aws::Vector<ModelPackageGroupSummary>&& value) { SetModelPackageGroupSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline ListModelPackageGroupsResult& AddModelPackageGroupSummaryList(const ModelPackageGroupSummary& value) { m_modelPackageGroupSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline ListModelPackageGroupsResult& AddModelPackageGroupSummaryList(ModelPackageGroupSummary&& value) { m_modelPackageGroupSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline ListModelPackageGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline ListModelPackageGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline ListModelPackageGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelPackageGroupSummary> m_modelPackageGroupSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
