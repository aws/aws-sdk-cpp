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
  class GetPolicyTemplateRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicyTemplate"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store that contains the policy template that
     * you want information about.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline GetPolicyTemplateRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline GetPolicyTemplateRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline GetPolicyTemplateRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the policy template that you want information about.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }
    inline GetPolicyTemplateRequest& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}
    inline GetPolicyTemplateRequest& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}
    inline GetPolicyTemplateRequest& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
