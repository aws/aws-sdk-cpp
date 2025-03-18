/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/Grantee.h>
#include <aws/s3control/model/AccessGrantsLocationConfiguration.h>
#include <aws/s3control/model/Permission.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class CreateAccessGrantResult
  {
  public:
    AWS_S3CONTROL_API CreateAccessGrantResult() = default;
    AWS_S3CONTROL_API CreateAccessGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateAccessGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The date and time when you created the access grant. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateAccessGrantResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline const Aws::String& GetAccessGrantId() const { return m_accessGrantId; }
    template<typename AccessGrantIdT = Aws::String>
    void SetAccessGrantId(AccessGrantIdT&& value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId = std::forward<AccessGrantIdT>(value); }
    template<typename AccessGrantIdT = Aws::String>
    CreateAccessGrantResult& WithAccessGrantId(AccessGrantIdT&& value) { SetAccessGrantId(std::forward<AccessGrantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access grant. </p>
     */
    inline const Aws::String& GetAccessGrantArn() const { return m_accessGrantArn; }
    template<typename AccessGrantArnT = Aws::String>
    void SetAccessGrantArn(AccessGrantArnT&& value) { m_accessGrantArnHasBeenSet = true; m_accessGrantArn = std::forward<AccessGrantArnT>(value); }
    template<typename AccessGrantArnT = Aws::String>
    CreateAccessGrantResult& WithAccessGrantArn(AccessGrantArnT&& value) { SetAccessGrantArn(std::forward<AccessGrantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role to which you are granting access. You can grant
     * access to an IAM user or role. If you have added your corporate directory to
     * Amazon Web Services IAM Identity Center and associated your Identity Center
     * instance with your S3 Access Grants instance, the grantee can also be a
     * corporate directory user or group.</p>
     */
    inline const Grantee& GetGrantee() const { return m_grantee; }
    template<typename GranteeT = Grantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Grantee>
    CreateAccessGrantResult& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const { return m_accessGrantsLocationId; }
    template<typename AccessGrantsLocationIdT = Aws::String>
    void SetAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::forward<AccessGrantsLocationIdT>(value); }
    template<typename AccessGrantsLocationIdT = Aws::String>
    CreateAccessGrantResult& WithAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { SetAccessGrantsLocationId(std::forward<AccessGrantsLocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options of the grant location. The grant location is the S3
     * path to the data to which you are granting access. </p>
     */
    inline const AccessGrantsLocationConfiguration& GetAccessGrantsLocationConfiguration() const { return m_accessGrantsLocationConfiguration; }
    template<typename AccessGrantsLocationConfigurationT = AccessGrantsLocationConfiguration>
    void SetAccessGrantsLocationConfiguration(AccessGrantsLocationConfigurationT&& value) { m_accessGrantsLocationConfigurationHasBeenSet = true; m_accessGrantsLocationConfiguration = std::forward<AccessGrantsLocationConfigurationT>(value); }
    template<typename AccessGrantsLocationConfigurationT = AccessGrantsLocationConfiguration>
    CreateAccessGrantResult& WithAccessGrantsLocationConfiguration(AccessGrantsLocationConfigurationT&& value) { SetAccessGrantsLocationConfiguration(std::forward<AccessGrantsLocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of access that you are granting to your S3 data, which can be set to
     * one of the following values:</p> <ul> <li> <p> <code>READ</code> – Grant
     * read-only access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant
     * write-only access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> –
     * Grant both read and write access to the S3 data.</p> </li> </ul>
     */
    inline Permission GetPermission() const { return m_permission; }
    inline void SetPermission(Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline CreateAccessGrantResult& WithPermission(Permission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    CreateAccessGrantResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope. </p>
     */
    inline const Aws::String& GetGrantScope() const { return m_grantScope; }
    template<typename GrantScopeT = Aws::String>
    void SetGrantScope(GrantScopeT&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::forward<GrantScopeT>(value); }
    template<typename GrantScopeT = Aws::String>
    CreateAccessGrantResult& WithGrantScope(GrantScopeT&& value) { SetGrantScope(std::forward<GrantScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessGrantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    CreateAccessGrantResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_accessGrantId;
    bool m_accessGrantIdHasBeenSet = false;

    Aws::String m_accessGrantArn;
    bool m_accessGrantArnHasBeenSet = false;

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    AccessGrantsLocationConfiguration m_accessGrantsLocationConfiguration;
    bool m_accessGrantsLocationConfigurationHasBeenSet = false;

    Permission m_permission{Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
