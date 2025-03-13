/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DescribeProvisioningParametersRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisioningParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProvisioningParameters"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    DescribeProvisioningParametersRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    DescribeProvisioningParametersRequest& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    DescribeProvisioningParametersRequest& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    DescribeProvisioningParametersRequest& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const { return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    template<typename ProvisioningArtifactNameT = Aws::String>
    void SetProvisioningArtifactName(ProvisioningArtifactNameT&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::forward<ProvisioningArtifactNameT>(value); }
    template<typename ProvisioningArtifactNameT = Aws::String>
    DescribeProvisioningParametersRequest& WithProvisioningArtifactName(ProvisioningArtifactNameT&& value) { SetProvisioningArtifactName(std::forward<ProvisioningArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const { return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    template<typename PathIdT = Aws::String>
    void SetPathId(PathIdT&& value) { m_pathIdHasBeenSet = true; m_pathId = std::forward<PathIdT>(value); }
    template<typename PathIdT = Aws::String>
    DescribeProvisioningParametersRequest& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const { return m_pathName; }
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }
    template<typename PathNameT = Aws::String>
    void SetPathName(PathNameT&& value) { m_pathNameHasBeenSet = true; m_pathName = std::forward<PathNameT>(value); }
    template<typename PathNameT = Aws::String>
    DescribeProvisioningParametersRequest& WithPathName(PathNameT&& value) { SetPathName(std::forward<PathNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_provisioningArtifactName;
    bool m_provisioningArtifactNameHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::String m_pathName;
    bool m_pathNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
