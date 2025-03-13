/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class CreateProductResult
  {
  public:
    AWS_SERVICECATALOG_API CreateProductResult() = default;
    AWS_SERVICECATALOG_API CreateProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product view.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const { return m_productViewDetail; }
    template<typename ProductViewDetailT = ProductViewDetail>
    void SetProductViewDetail(ProductViewDetailT&& value) { m_productViewDetailHasBeenSet = true; m_productViewDetail = std::forward<ProductViewDetailT>(value); }
    template<typename ProductViewDetailT = ProductViewDetail>
    CreateProductResult& WithProductViewDetail(ProductViewDetailT&& value) { SetProductViewDetail(std::forward<ProductViewDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifact. </p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const { return m_provisioningArtifactDetail; }
    template<typename ProvisioningArtifactDetailT = ProvisioningArtifactDetail>
    void SetProvisioningArtifactDetail(ProvisioningArtifactDetailT&& value) { m_provisioningArtifactDetailHasBeenSet = true; m_provisioningArtifactDetail = std::forward<ProvisioningArtifactDetailT>(value); }
    template<typename ProvisioningArtifactDetailT = ProvisioningArtifactDetail>
    CreateProductResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetailT&& value) { SetProvisioningArtifactDetail(std::forward<ProvisioningArtifactDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProductResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProductResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProductViewDetail m_productViewDetail;
    bool m_productViewDetailHasBeenSet = false;

    ProvisioningArtifactDetail m_provisioningArtifactDetail;
    bool m_provisioningArtifactDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
