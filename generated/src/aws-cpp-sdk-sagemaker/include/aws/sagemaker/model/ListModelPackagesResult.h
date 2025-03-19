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
    AWS_SAGEMAKER_API ListModelPackagesResult() = default;
    AWS_SAGEMAKER_API ListModelPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ModelPackageSummary</code> objects, each of which lists a
     * model package.</p>
     */
    inline const Aws::Vector<ModelPackageSummary>& GetModelPackageSummaryList() const { return m_modelPackageSummaryList; }
    template<typename ModelPackageSummaryListT = Aws::Vector<ModelPackageSummary>>
    void SetModelPackageSummaryList(ModelPackageSummaryListT&& value) { m_modelPackageSummaryListHasBeenSet = true; m_modelPackageSummaryList = std::forward<ModelPackageSummaryListT>(value); }
    template<typename ModelPackageSummaryListT = Aws::Vector<ModelPackageSummary>>
    ListModelPackagesResult& WithModelPackageSummaryList(ModelPackageSummaryListT&& value) { SetModelPackageSummaryList(std::forward<ModelPackageSummaryListT>(value)); return *this;}
    template<typename ModelPackageSummaryListT = ModelPackageSummary>
    ListModelPackagesResult& AddModelPackageSummaryList(ModelPackageSummaryListT&& value) { m_modelPackageSummaryListHasBeenSet = true; m_modelPackageSummaryList.emplace_back(std::forward<ModelPackageSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model packages, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelPackageSummary> m_modelPackageSummaryList;
    bool m_modelPackageSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
