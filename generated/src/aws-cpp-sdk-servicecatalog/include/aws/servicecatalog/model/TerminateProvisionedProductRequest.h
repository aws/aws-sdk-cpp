/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class TerminateProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API TerminateProvisionedProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateProvisionedProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline const Aws::String& GetTerminateToken() const{ return m_terminateToken; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline bool TerminateTokenHasBeenSet() const { return m_terminateTokenHasBeenSet; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline void SetTerminateToken(const Aws::String& value) { m_terminateTokenHasBeenSet = true; m_terminateToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline void SetTerminateToken(Aws::String&& value) { m_terminateTokenHasBeenSet = true; m_terminateToken = std::move(value); }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline void SetTerminateToken(const char* value) { m_terminateTokenHasBeenSet = true; m_terminateToken.assign(value); }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(const Aws::String& value) { SetTerminateToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(Aws::String&& value) { SetTerminateToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(const char* value) { SetTerminateToken(value); return *this;}


    /**
     * <p>If set to true, Service Catalog stops managing the specified provisioned
     * product even if it cannot delete the underlying resources.</p>
     */
    inline bool GetIgnoreErrors() const{ return m_ignoreErrors; }

    /**
     * <p>If set to true, Service Catalog stops managing the specified provisioned
     * product even if it cannot delete the underlying resources.</p>
     */
    inline bool IgnoreErrorsHasBeenSet() const { return m_ignoreErrorsHasBeenSet; }

    /**
     * <p>If set to true, Service Catalog stops managing the specified provisioned
     * product even if it cannot delete the underlying resources.</p>
     */
    inline void SetIgnoreErrors(bool value) { m_ignoreErrorsHasBeenSet = true; m_ignoreErrors = value; }

    /**
     * <p>If set to true, Service Catalog stops managing the specified provisioned
     * product even if it cannot delete the underlying resources.</p>
     */
    inline TerminateProvisionedProductRequest& WithIgnoreErrors(bool value) { SetIgnoreErrors(value); return *this;}


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
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>When this boolean parameter is set to true, the
     * <code>TerminateProvisionedProduct</code> API deletes the Service Catalog
     * provisioned product. However, it does not remove the CloudFormation stack, stack
     * set, or the underlying resources of the deleted provisioned product. The default
     * value is false.</p>
     */
    inline bool GetRetainPhysicalResources() const{ return m_retainPhysicalResources; }

    /**
     * <p>When this boolean parameter is set to true, the
     * <code>TerminateProvisionedProduct</code> API deletes the Service Catalog
     * provisioned product. However, it does not remove the CloudFormation stack, stack
     * set, or the underlying resources of the deleted provisioned product. The default
     * value is false.</p>
     */
    inline bool RetainPhysicalResourcesHasBeenSet() const { return m_retainPhysicalResourcesHasBeenSet; }

    /**
     * <p>When this boolean parameter is set to true, the
     * <code>TerminateProvisionedProduct</code> API deletes the Service Catalog
     * provisioned product. However, it does not remove the CloudFormation stack, stack
     * set, or the underlying resources of the deleted provisioned product. The default
     * value is false.</p>
     */
    inline void SetRetainPhysicalResources(bool value) { m_retainPhysicalResourcesHasBeenSet = true; m_retainPhysicalResources = value; }

    /**
     * <p>When this boolean parameter is set to true, the
     * <code>TerminateProvisionedProduct</code> API deletes the Service Catalog
     * provisioned product. However, it does not remove the CloudFormation stack, stack
     * set, or the underlying resources of the deleted provisioned product. The default
     * value is false.</p>
     */
    inline TerminateProvisionedProductRequest& WithRetainPhysicalResources(bool value) { SetRetainPhysicalResources(value); return *this;}

  private:

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_terminateToken;
    bool m_terminateTokenHasBeenSet = false;

    bool m_ignoreErrors;
    bool m_ignoreErrorsHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    bool m_retainPhysicalResources;
    bool m_retainPhysicalResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
