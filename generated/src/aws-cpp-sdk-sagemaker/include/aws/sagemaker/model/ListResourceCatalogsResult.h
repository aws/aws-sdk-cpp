/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ResourceCatalog.h>
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
  class ListResourceCatalogsResult
  {
  public:
    AWS_SAGEMAKER_API ListResourceCatalogsResult() = default;
    AWS_SAGEMAKER_API ListResourceCatalogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListResourceCatalogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline const Aws::Vector<ResourceCatalog>& GetResourceCatalogs() const { return m_resourceCatalogs; }
    template<typename ResourceCatalogsT = Aws::Vector<ResourceCatalog>>
    void SetResourceCatalogs(ResourceCatalogsT&& value) { m_resourceCatalogsHasBeenSet = true; m_resourceCatalogs = std::forward<ResourceCatalogsT>(value); }
    template<typename ResourceCatalogsT = Aws::Vector<ResourceCatalog>>
    ListResourceCatalogsResult& WithResourceCatalogs(ResourceCatalogsT&& value) { SetResourceCatalogs(std::forward<ResourceCatalogsT>(value)); return *this;}
    template<typename ResourceCatalogsT = ResourceCatalog>
    ListResourceCatalogsResult& AddResourceCatalogs(ResourceCatalogsT&& value) { m_resourceCatalogsHasBeenSet = true; m_resourceCatalogs.emplace_back(std::forward<ResourceCatalogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceCatalogsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceCatalogsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceCatalog> m_resourceCatalogs;
    bool m_resourceCatalogsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
