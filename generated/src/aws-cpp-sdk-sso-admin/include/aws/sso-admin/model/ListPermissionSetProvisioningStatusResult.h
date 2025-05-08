/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PermissionSetProvisioningStatusMetadata.h>
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
  class ListPermissionSetProvisioningStatusResult
  {
  public:
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult() = default;
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline const Aws::Vector<PermissionSetProvisioningStatusMetadata>& GetPermissionSetsProvisioningStatus() const { return m_permissionSetsProvisioningStatus; }
    template<typename PermissionSetsProvisioningStatusT = Aws::Vector<PermissionSetProvisioningStatusMetadata>>
    void SetPermissionSetsProvisioningStatus(PermissionSetsProvisioningStatusT&& value) { m_permissionSetsProvisioningStatusHasBeenSet = true; m_permissionSetsProvisioningStatus = std::forward<PermissionSetsProvisioningStatusT>(value); }
    template<typename PermissionSetsProvisioningStatusT = Aws::Vector<PermissionSetProvisioningStatusMetadata>>
    ListPermissionSetProvisioningStatusResult& WithPermissionSetsProvisioningStatus(PermissionSetsProvisioningStatusT&& value) { SetPermissionSetsProvisioningStatus(std::forward<PermissionSetsProvisioningStatusT>(value)); return *this;}
    template<typename PermissionSetsProvisioningStatusT = PermissionSetProvisioningStatusMetadata>
    ListPermissionSetProvisioningStatusResult& AddPermissionSetsProvisioningStatus(PermissionSetsProvisioningStatusT&& value) { m_permissionSetsProvisioningStatusHasBeenSet = true; m_permissionSetsProvisioningStatus.emplace_back(std::forward<PermissionSetsProvisioningStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPermissionSetProvisioningStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPermissionSetProvisioningStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PermissionSetProvisioningStatusMetadata> m_permissionSetsProvisioningStatus;
    bool m_permissionSetsProvisioningStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
