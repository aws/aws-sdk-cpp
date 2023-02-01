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
    AWS_SERVICECATALOG_API DescribeProvisioningParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProvisioningParameters"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier. You must provide the product name or ID, but not
     * both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const{ return m_provisioningArtifactName; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const Aws::String& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = value; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(Aws::String&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::move(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const char* value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName.assign(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}


    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const{ return m_pathName; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const Aws::String& value) { m_pathNameHasBeenSet = true; m_pathName = value; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(Aws::String&& value) { m_pathNameHasBeenSet = true; m_pathName = std::move(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const char* value) { m_pathNameHasBeenSet = true; m_pathName.assign(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathName(const Aws::String& value) { SetPathName(value); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathName(Aws::String&& value) { SetPathName(std::move(value)); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathName(const char* value) { SetPathName(value); return *this;}

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
