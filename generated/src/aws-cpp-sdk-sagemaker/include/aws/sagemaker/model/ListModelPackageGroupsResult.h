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
    AWS_SAGEMAKER_API ListModelPackageGroupsResult() = default;
    AWS_SAGEMAKER_API ListModelPackageGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelPackageGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries of the model groups in your Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<ModelPackageGroupSummary>& GetModelPackageGroupSummaryList() const { return m_modelPackageGroupSummaryList; }
    template<typename ModelPackageGroupSummaryListT = Aws::Vector<ModelPackageGroupSummary>>
    void SetModelPackageGroupSummaryList(ModelPackageGroupSummaryListT&& value) { m_modelPackageGroupSummaryListHasBeenSet = true; m_modelPackageGroupSummaryList = std::forward<ModelPackageGroupSummaryListT>(value); }
    template<typename ModelPackageGroupSummaryListT = Aws::Vector<ModelPackageGroupSummary>>
    ListModelPackageGroupsResult& WithModelPackageGroupSummaryList(ModelPackageGroupSummaryListT&& value) { SetModelPackageGroupSummaryList(std::forward<ModelPackageGroupSummaryListT>(value)); return *this;}
    template<typename ModelPackageGroupSummaryListT = ModelPackageGroupSummary>
    ListModelPackageGroupsResult& AddModelPackageGroupSummaryList(ModelPackageGroupSummaryListT&& value) { m_modelPackageGroupSummaryListHasBeenSet = true; m_modelPackageGroupSummaryList.emplace_back(std::forward<ModelPackageGroupSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model groups, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelPackageGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelPackageGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelPackageGroupSummary> m_modelPackageGroupSummaryList;
    bool m_modelPackageGroupSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
