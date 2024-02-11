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
  class GetPolicyRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicy"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline GetPolicyRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline GetPolicyRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the policy that you want
     * information about.</p>
     */
    inline GetPolicyRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline GetPolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline GetPolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy you want information about.</p>
     */
    inline GetPolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
