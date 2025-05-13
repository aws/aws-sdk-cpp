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
    AWS_SERVICECATALOG_API TerminateProvisionedProductRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateProvisionedProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    TerminateProvisionedProductRequest& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    TerminateProvisionedProductRequest& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the provisioned
     * product is terminated, subsequent requests to terminate the same provisioned
     * product always return <b>ResourceNotFound</b>.</p>
     */
    inline const Aws::String& GetTerminateToken() const { return m_terminateToken; }
    inline bool TerminateTokenHasBeenSet() const { return m_terminateTokenHasBeenSet; }
    template<typename TerminateTokenT = Aws::String>
    void SetTerminateToken(TerminateTokenT&& value) { m_terminateTokenHasBeenSet = true; m_terminateToken = std::forward<TerminateTokenT>(value); }
    template<typename TerminateTokenT = Aws::String>
    TerminateProvisionedProductRequest& WithTerminateToken(TerminateTokenT&& value) { SetTerminateToken(std::forward<TerminateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, Service Catalog stops managing the specified provisioned
     * product even if it cannot delete the underlying resources.</p>
     */
    inline bool GetIgnoreErrors() const { return m_ignoreErrors; }
    inline bool IgnoreErrorsHasBeenSet() const { return m_ignoreErrorsHasBeenSet; }
    inline void SetIgnoreErrors(bool value) { m_ignoreErrorsHasBeenSet = true; m_ignoreErrors = value; }
    inline TerminateProvisionedProductRequest& WithIgnoreErrors(bool value) { SetIgnoreErrors(value); return *this;}
    ///@}

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
    TerminateProvisionedProductRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this boolean parameter is set to true, the
     * <code>TerminateProvisionedProduct</code> API deletes the Service Catalog
     * provisioned product. However, it does not remove the CloudFormation stack, stack
     * set, or the underlying resources of the deleted provisioned product. The default
     * value is false.</p>
     */
    inline bool GetRetainPhysicalResources() const { return m_retainPhysicalResources; }
    inline bool RetainPhysicalResourcesHasBeenSet() const { return m_retainPhysicalResourcesHasBeenSet; }
    inline void SetRetainPhysicalResources(bool value) { m_retainPhysicalResourcesHasBeenSet = true; m_retainPhysicalResources = value; }
    inline TerminateProvisionedProductRequest& WithRetainPhysicalResources(bool value) { SetRetainPhysicalResources(value); return *this;}
    ///@}
  private:

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_terminateToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_terminateTokenHasBeenSet = true;

    bool m_ignoreErrors{false};
    bool m_ignoreErrorsHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    bool m_retainPhysicalResources{false};
    bool m_retainPhysicalResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
