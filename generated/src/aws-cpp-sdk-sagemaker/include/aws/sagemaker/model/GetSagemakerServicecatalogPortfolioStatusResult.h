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
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult();
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetSagemakerServicecatalogPortfolioStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline const SagemakerServicecatalogStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline void SetStatus(const SagemakerServicecatalogStatus& value) { m_status = value; }

    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline void SetStatus(SagemakerServicecatalogStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithStatus(const SagemakerServicecatalogStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether Service Catalog is enabled or disabled in SageMaker.</p>
     */
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithStatus(SagemakerServicecatalogStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSagemakerServicecatalogPortfolioStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SagemakerServicecatalogStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
