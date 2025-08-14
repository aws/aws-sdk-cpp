/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class GetOperationRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API GetOperationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOperation"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the operation that you want to get more information about.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    GetOperationRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the namespace associated
     * with the operation, as specified in the namespace <code>ResourceOwner</code>
     * field. For operations associated with namespaces that are shared with your
     * account, you must specify an <code>OwnerAccount</code>.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    GetOperationRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
