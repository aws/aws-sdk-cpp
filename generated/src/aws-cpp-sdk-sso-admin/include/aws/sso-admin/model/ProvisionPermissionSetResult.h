/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PermissionSetProvisioningStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SSOADMIN_API ProvisionPermissionSetResult() = default;
    AWS_SSOADMIN_API ProvisionPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ProvisionPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline const PermissionSetProvisioningStatus& GetPermissionSetProvisioningStatus() const { return m_permissionSetProvisioningStatus; }
    template<typename PermissionSetProvisioningStatusT = PermissionSetProvisioningStatus>
    void SetPermissionSetProvisioningStatus(PermissionSetProvisioningStatusT&& value) { m_permissionSetProvisioningStatusHasBeenSet = true; m_permissionSetProvisioningStatus = std::forward<PermissionSetProvisioningStatusT>(value); }
    template<typename PermissionSetProvisioningStatusT = PermissionSetProvisioningStatus>
    ProvisionPermissionSetResult& WithPermissionSetProvisioningStatus(PermissionSetProvisioningStatusT&& value) { SetPermissionSetProvisioningStatus(std::forward<PermissionSetProvisioningStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ProvisionPermissionSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PermissionSetProvisioningStatus m_permissionSetProvisioningStatus;
    bool m_permissionSetProvisioningStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
