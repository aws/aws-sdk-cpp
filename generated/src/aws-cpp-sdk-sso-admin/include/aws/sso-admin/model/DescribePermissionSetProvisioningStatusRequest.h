/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DescribePermissionSetProvisioningStatusRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DescribePermissionSetProvisioningStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePermissionSetProvisioningStatus"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DescribePermissionSetProvisioningStatusRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that is provided by the <a>ProvisionPermissionSet</a> call to
     * retrieve the current status of the provisioning workflow.</p>
     */
    inline const Aws::String& GetProvisionPermissionSetRequestId() const { return m_provisionPermissionSetRequestId; }
    inline bool ProvisionPermissionSetRequestIdHasBeenSet() const { return m_provisionPermissionSetRequestIdHasBeenSet; }
    template<typename ProvisionPermissionSetRequestIdT = Aws::String>
    void SetProvisionPermissionSetRequestId(ProvisionPermissionSetRequestIdT&& value) { m_provisionPermissionSetRequestIdHasBeenSet = true; m_provisionPermissionSetRequestId = std::forward<ProvisionPermissionSetRequestIdT>(value); }
    template<typename ProvisionPermissionSetRequestIdT = Aws::String>
    DescribePermissionSetProvisioningStatusRequest& WithProvisionPermissionSetRequestId(ProvisionPermissionSetRequestIdT&& value) { SetProvisionPermissionSetRequestId(std::forward<ProvisionPermissionSetRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_provisionPermissionSetRequestId;
    bool m_provisionPermissionSetRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
