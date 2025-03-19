/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProductViewResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductViewResult() = default;
    AWS_SERVICECATALOG_API DescribeProductViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the product.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const { return m_productViewSummary; }
    template<typename ProductViewSummaryT = ProductViewSummary>
    void SetProductViewSummary(ProductViewSummaryT&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::forward<ProductViewSummaryT>(value); }
    template<typename ProductViewSummaryT = ProductViewSummary>
    DescribeProductViewResult& WithProductViewSummary(ProductViewSummaryT&& value) { SetProductViewSummary(std::forward<ProductViewSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifacts for the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifact>& GetProvisioningArtifacts() const { return m_provisioningArtifacts; }
    template<typename ProvisioningArtifactsT = Aws::Vector<ProvisioningArtifact>>
    void SetProvisioningArtifacts(ProvisioningArtifactsT&& value) { m_provisioningArtifactsHasBeenSet = true; m_provisioningArtifacts = std::forward<ProvisioningArtifactsT>(value); }
    template<typename ProvisioningArtifactsT = Aws::Vector<ProvisioningArtifact>>
    DescribeProductViewResult& WithProvisioningArtifacts(ProvisioningArtifactsT&& value) { SetProvisioningArtifacts(std::forward<ProvisioningArtifactsT>(value)); return *this;}
    template<typename ProvisioningArtifactsT = ProvisioningArtifact>
    DescribeProductViewResult& AddProvisioningArtifacts(ProvisioningArtifactsT&& value) { m_provisioningArtifactsHasBeenSet = true; m_provisioningArtifacts.emplace_back(std::forward<ProvisioningArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProductViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet = false;

    Aws::Vector<ProvisioningArtifact> m_provisioningArtifacts;
    bool m_provisioningArtifactsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
