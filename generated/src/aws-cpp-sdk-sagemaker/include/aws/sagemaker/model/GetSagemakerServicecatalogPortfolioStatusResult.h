/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SagemakerServicecatalogStatus.h>
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
namespace SageMaker
{
namespace Model
{
  class GetSagemakerServicecatalogPortfolioStatusResult
  {
  public:
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult() = default;
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline SagemakerServicecatalogStatus GetStatus() const { return m_status; }
    inline void SetStatus(SagemakerServicecatalogStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithStatus(SagemakerServicecatalogStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSagemakerServicecatalogPortfolioStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SagemakerServicecatalogStatus m_status{SagemakerServicecatalogStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
