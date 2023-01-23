/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PermissionSetProvisioningStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{
  class ProvisionPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API ProvisionPermissionSetResult();
    AWS_SSOADMIN_API ProvisionPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ProvisionPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline const PermissionSetProvisioningStatus& GetPermissionSetProvisioningStatus() const{ return m_permissionSetProvisioningStatus; }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline void SetPermissionSetProvisioningStatus(const PermissionSetProvisioningStatus& value) { m_permissionSetProvisioningStatus = value; }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline void SetPermissionSetProvisioningStatus(PermissionSetProvisioningStatus&& value) { m_permissionSetProvisioningStatus = std::move(value); }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ProvisionPermissionSetResult& WithPermissionSetProvisioningStatus(const PermissionSetProvisioningStatus& value) { SetPermissionSetProvisioningStatus(value); return *this;}

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ProvisionPermissionSetResult& WithPermissionSetProvisioningStatus(PermissionSetProvisioningStatus&& value) { SetPermissionSetProvisioningStatus(std::move(value)); return *this;}

  private:

    PermissionSetProvisioningStatus m_permissionSetProvisioningStatus;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
