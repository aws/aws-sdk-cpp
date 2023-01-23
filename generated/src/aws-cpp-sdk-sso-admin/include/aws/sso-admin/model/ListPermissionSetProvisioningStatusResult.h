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
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult();
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListPermissionSetProvisioningStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline const Aws::Vector<PermissionSetProvisioningStatusMetadata>& GetPermissionSetsProvisioningStatus() const{ return m_permissionSetsProvisioningStatus; }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline void SetPermissionSetsProvisioningStatus(const Aws::Vector<PermissionSetProvisioningStatusMetadata>& value) { m_permissionSetsProvisioningStatus = value; }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline void SetPermissionSetsProvisioningStatus(Aws::Vector<PermissionSetProvisioningStatusMetadata>&& value) { m_permissionSetsProvisioningStatus = std::move(value); }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& WithPermissionSetsProvisioningStatus(const Aws::Vector<PermissionSetProvisioningStatusMetadata>& value) { SetPermissionSetsProvisioningStatus(value); return *this;}

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& WithPermissionSetsProvisioningStatus(Aws::Vector<PermissionSetProvisioningStatusMetadata>&& value) { SetPermissionSetsProvisioningStatus(std::move(value)); return *this;}

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& AddPermissionSetsProvisioningStatus(const PermissionSetProvisioningStatusMetadata& value) { m_permissionSetsProvisioningStatus.push_back(value); return *this; }

    /**
     * <p>The status object for the permission set provisioning operation.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& AddPermissionSetsProvisioningStatus(PermissionSetProvisioningStatusMetadata&& value) { m_permissionSetsProvisioningStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListPermissionSetProvisioningStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PermissionSetProvisioningStatusMetadata> m_permissionSetsProvisioningStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
