/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelPackageSummary.h>
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
  class ListModelPackagesResult
  {
  public:
    AWS_SAGEMAKER_API ListModelPackagesResult();
    AWS_SAGEMAKER_API ListModelPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline const Aws::Vector<ModelPackageSummary>& GetModelPackageSummaryList() const{ return m_modelPackageSummaryList; }

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline void SetModelPackageSummaryList(const Aws::Vector<ModelPackageSummary>& value) { m_modelPackageSummaryList = value; }

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline void SetModelPackageSummaryList(Aws::Vector<ModelPackageSummary>&& value) { m_modelPackageSummaryList = std::move(value); }

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline ListModelPackagesResult& WithModelPackageSummaryList(const Aws::Vector<ModelPackageSummary>& value) { SetModelPackageSummaryList(value); return *this;}

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline ListModelPackagesResult& WithModelPackageSummaryList(Aws::Vector<ModelPackageSummary>&& value) { SetModelPackageSummaryList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline ListModelPackagesResult& AddModelPackageSummaryList(const ModelPackageSummary& value) { m_modelPackageSummaryList.push_back(value); return *this; }

    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline ListModelPackagesResult& AddModelPackageSummaryList(ModelPackageSummary&& value) { m_modelPackageSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline ListModelPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline ListModelPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline ListModelPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelPackageSummary> m_modelPackageSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
