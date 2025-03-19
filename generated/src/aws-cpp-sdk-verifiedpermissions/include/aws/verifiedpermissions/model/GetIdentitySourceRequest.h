/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class GetIdentitySourceRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentitySource"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store that contains the identity source you
     * want information about.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    GetIdentitySourceRequest& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the identity source you want information about.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const { return m_identitySourceId; }
    inline bool IdentitySourceIdHasBeenSet() const { return m_identitySourceIdHasBeenSet; }
    template<typename IdentitySourceIdT = Aws::String>
    void SetIdentitySourceId(IdentitySourceIdT&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::forward<IdentitySourceIdT>(value); }
    template<typename IdentitySourceIdT = Aws::String>
    GetIdentitySourceRequest& WithIdentitySourceId(IdentitySourceIdT&& value) { SetIdentitySourceId(std::forward<IdentitySourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
