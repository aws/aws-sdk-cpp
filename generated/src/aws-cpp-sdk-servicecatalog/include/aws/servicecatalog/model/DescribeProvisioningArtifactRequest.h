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
    AWS_SERVICECATALOG_API DescribeProvisioningArtifactRequest();

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
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline DescribeProvisioningArtifactRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline DescribeProvisioningArtifactRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline DescribeProvisioningArtifactRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline DescribeProvisioningArtifactRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning artifact name.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const{ return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    inline void SetProvisioningArtifactName(const Aws::String& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = value; }
    inline void SetProvisioningArtifactName(Aws::String&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::move(value); }
    inline void SetProvisioningArtifactName(const char* value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName.assign(value); }
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product name.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }
    inline DescribeProvisioningArtifactRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline DescribeProvisioningArtifactRequest& WithProductName(const char* value) { SetProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a verbose level of detail is enabled.</p>
     */
    inline bool GetVerbose() const{ return m_verbose; }
    inline bool VerboseHasBeenSet() const { return m_verboseHasBeenSet; }
    inline void SetVerbose(bool value) { m_verboseHasBeenSet = true; m_verbose = value; }
    inline DescribeProvisioningArtifactRequest& WithVerbose(bool value) { SetVerbose(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the API call response does or does not include additional
     * details about the provisioning parameters. </p>
     */
    inline bool GetIncludeProvisioningArtifactParameters() const{ return m_includeProvisioningArtifactParameters; }
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

    bool m_verbose;
    bool m_verboseHasBeenSet = false;

    bool m_includeProvisioningArtifactParameters;
    bool m_includeProvisioningArtifactParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
