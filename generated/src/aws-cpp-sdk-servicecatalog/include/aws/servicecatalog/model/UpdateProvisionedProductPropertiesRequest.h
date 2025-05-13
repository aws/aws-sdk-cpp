/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/PropertyKey.h>
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
  class UpdateProvisionedProductPropertiesRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedProductProperties"; }

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
    UpdateProvisionedProductPropertiesRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    UpdateProvisionedProductPropertiesRequest& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>LAUNCH_ROLE</code> key accepts role ARNs. This key allows an
     * administrator to call <code>UpdateProvisionedProductProperties</code> to update
     * the launch role that is associated with a provisioned product. This role is used
     * when an end user calls a provisioning operation such as
     * <code>UpdateProvisionedProduct</code>, <code>TerminateProvisionedProduct</code>,
     * or <code>ExecuteProvisionedProductServiceAction</code>. Only a role ARN is
     * valid. A user ARN is invalid. </p> <p>The <code>OWNER</code> key accepts user
     * ARNs, IAM role ARNs, and STS assumed-role ARNs. The owner is the user that has
     * permission to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM or STS entity within the same account. Both
     * end user owners and administrators can see ownership history of the provisioned
     * product using the <code>ListRecordHistory</code> API. The new owner can describe
     * all past records for the provisioned product using the
     * <code>DescribeRecord</code> API. The previous owner can no longer use
     * <code>DescribeRecord</code>, but can still see the product's history from when
     * he was an owner using <code>ListRecordHistory</code>.</p> <p>If a provisioned
     * product ownership is assigned to an end user, they can see and perform any
     * action through the API or Service Catalog console such as update, terminate, and
     * execute service actions. If an end user provisions a product and the owner is
     * updated to someone else, they will no longer be able to see or perform any
     * actions through API or the Service Catalog console on that provisioned
     * product.</p>
     */
    inline const Aws::Map<PropertyKey, Aws::String>& GetProvisionedProductProperties() const { return m_provisionedProductProperties; }
    inline bool ProvisionedProductPropertiesHasBeenSet() const { return m_provisionedProductPropertiesHasBeenSet; }
    template<typename ProvisionedProductPropertiesT = Aws::Map<PropertyKey, Aws::String>>
    void SetProvisionedProductProperties(ProvisionedProductPropertiesT&& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties = std::forward<ProvisionedProductPropertiesT>(value); }
    template<typename ProvisionedProductPropertiesT = Aws::Map<PropertyKey, Aws::String>>
    UpdateProvisionedProductPropertiesRequest& WithProvisionedProductProperties(ProvisionedProductPropertiesT&& value) { SetProvisionedProductProperties(std::forward<ProvisionedProductPropertiesT>(value)); return *this;}
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(PropertyKey key, Aws::String value) {
      m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    UpdateProvisionedProductPropertiesRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::Map<PropertyKey, Aws::String> m_provisionedProductProperties;
    bool m_provisionedProductPropertiesHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
