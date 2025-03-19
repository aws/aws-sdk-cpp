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
  class DescribeProvisioningArtifactRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisioningArtifactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProvisioningArtifact"; }

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
    DescribeProvisioningArtifactRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    DescribeProvisioningArtifactRequest& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    DescribeProvisioningArtifactRequest& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning artifact name.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const { return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    template<typename ProvisioningArtifactNameT = Aws::String>
    void SetProvisioningArtifactName(ProvisioningArtifactNameT&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::forward<ProvisioningArtifactNameT>(value); }
    template<typename ProvisioningArtifactNameT = Aws::String>
    DescribeProvisioningArtifactRequest& WithProvisioningArtifactName(ProvisioningArtifactNameT&& value) { SetProvisioningArtifactName(std::forward<ProvisioningArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product name.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    DescribeProvisioningArtifactRequest& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a verbose level of detail is enabled.</p>
     */
    inline bool GetVerbose() const { return m_verbose; }
    inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }
    inline DescribeProvisioningArtifactRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the API call response does or does not include additional
     * details about the provisioning parameters. </p>
     */
    inline bool GetIncludeProvisioningArtifactParameters() const { return m_includeProvisioningArtifactParameters; }
    inline bool IncludeProvisioningArtifactParametersHasBeenSet() const { return m_includeProvisioningArtifactParametersHasBeenSet; }
    inline void SetIncludeProvisioningArtifactParameters(bool value) { m_includeProvisioningArtifactParametersHasBeenSet = true; m_includeProvisioningArtifactParameters = value; }
    inline DescribeProvisioningArtifactRequest& WithIncludeProvisioningArtifactParameters(bool value) { SetIncludeProvisioningArtifactParameters(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactName;
    bool m_provisioningArtifactNameHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    bool m_verbose{false};
    bool m_verboseHasBeenSet = false;

    bool m_includeProvisioningArtifactParameters{false};
    bool m_includeProvisioningArtifactParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
