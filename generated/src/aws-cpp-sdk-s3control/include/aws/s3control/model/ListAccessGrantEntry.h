/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/Grantee.h>
#include <aws/s3control/model/Permission.h>
#include <aws/s3control/model/AccessGrantsLocationConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Information about the access grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessGrantEntry">AWS
   * API Reference</a></p>
   */
  class ListAccessGrantEntry
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantEntry();
    AWS_S3CONTROL_API ListAccessGrantEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListAccessGrantEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListAccessGrantEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListAccessGrantEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline const Aws::String& GetAccessGrantId() const{ return m_accessGrantId; }
    inline bool AccessGrantIdHasBeenSet() const { return m_accessGrantIdHasBeenSet; }
    inline void SetAccessGrantId(const Aws::String& value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId = value; }
    inline void SetAccessGrantId(Aws::String&& value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId = std::move(value); }
    inline void SetAccessGrantId(const char* value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId.assign(value); }
    inline ListAccessGrantEntry& WithAccessGrantId(const Aws::String& value) { SetAccessGrantId(value); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantId(Aws::String&& value) { SetAccessGrantId(std::move(value)); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantId(const char* value) { SetAccessGrantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access grant. </p>
     */
    inline const Aws::String& GetAccessGrantArn() const{ return m_accessGrantArn; }
    inline bool AccessGrantArnHasBeenSet() const { return m_accessGrantArnHasBeenSet; }
    inline void SetAccessGrantArn(const Aws::String& value) { m_accessGrantArnHasBeenSet = true; m_accessGrantArn = value; }
    inline void SetAccessGrantArn(Aws::String&& value) { m_accessGrantArnHasBeenSet = true; m_accessGrantArn = std::move(value); }
    inline void SetAccessGrantArn(const char* value) { m_accessGrantArnHasBeenSet = true; m_accessGrantArn.assign(value); }
    inline ListAccessGrantEntry& WithAccessGrantArn(const Aws::String& value) { SetAccessGrantArn(value); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantArn(Aws::String&& value) { SetAccessGrantArn(std::move(value)); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantArn(const char* value) { SetAccessGrantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role to which you are granting access. You can grant
     * access to an IAM user or role. If you have added your corporate directory to
     * Amazon Web Services IAM Identity Center and associated your Identity Center
     * instance with your S3 Access Grants instance, the grantee can also be a
     * corporate directory user or group.</p>
     */
    inline const Grantee& GetGrantee() const{ return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    inline void SetGrantee(const Grantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }
    inline void SetGrantee(Grantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }
    inline ListAccessGrantEntry& WithGrantee(const Grantee& value) { SetGrantee(value); return *this;}
    inline ListAccessGrantEntry& WithGrantee(Grantee&& value) { SetGrantee(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of access granted to your S3 data, which can be set to one of the
     * following values:</p> <ul> <li> <p> <code>READ</code> – Grant read-only access
     * to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant write-only access
     * to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> – Grant both read and
     * write access to the S3 data.</p> </li> </ul>
     */
    inline const Permission& GetPermission() const{ return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }
    inline ListAccessGrantEntry& WithPermission(const Permission& value) { SetPermission(value); return *this;}
    inline ListAccessGrantEntry& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = value; }
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::move(value); }
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId.assign(value); }
    inline ListAccessGrantEntry& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options of the grant location. The grant location is the S3
     * path to the data to which you are granting access. </p>
     */
    inline const AccessGrantsLocationConfiguration& GetAccessGrantsLocationConfiguration() const{ return m_accessGrantsLocationConfiguration; }
    inline bool AccessGrantsLocationConfigurationHasBeenSet() const { return m_accessGrantsLocationConfigurationHasBeenSet; }
    inline void SetAccessGrantsLocationConfiguration(const AccessGrantsLocationConfiguration& value) { m_accessGrantsLocationConfigurationHasBeenSet = true; m_accessGrantsLocationConfiguration = value; }
    inline void SetAccessGrantsLocationConfiguration(AccessGrantsLocationConfiguration&& value) { m_accessGrantsLocationConfigurationHasBeenSet = true; m_accessGrantsLocationConfiguration = std::move(value); }
    inline ListAccessGrantEntry& WithAccessGrantsLocationConfiguration(const AccessGrantsLocationConfiguration& value) { SetAccessGrantsLocationConfiguration(value); return *this;}
    inline ListAccessGrantEntry& WithAccessGrantsLocationConfiguration(AccessGrantsLocationConfiguration&& value) { SetAccessGrantsLocationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data to which you are granting access. It is the result of
     * appending the <code>Subprefix</code> to the location scope.</p>
     */
    inline const Aws::String& GetGrantScope() const{ return m_grantScope; }
    inline bool GrantScopeHasBeenSet() const { return m_grantScopeHasBeenSet; }
    inline void SetGrantScope(const Aws::String& value) { m_grantScopeHasBeenSet = true; m_grantScope = value; }
    inline void SetGrantScope(Aws::String&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::move(value); }
    inline void SetGrantScope(const char* value) { m_grantScopeHasBeenSet = true; m_grantScope.assign(value); }
    inline ListAccessGrantEntry& WithGrantScope(const Aws::String& value) { SetGrantScope(value); return *this;}
    inline ListAccessGrantEntry& WithGrantScope(Aws::String&& value) { SetGrantScope(std::move(value)); return *this;}
    inline ListAccessGrantEntry& WithGrantScope(const char* value) { SetGrantScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If the grant includes
     * an application ARN, the grantee can only access the S3 data through this
     * application. </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline ListAccessGrantEntry& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline ListAccessGrantEntry& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline ListAccessGrantEntry& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_accessGrantId;
    bool m_accessGrantIdHasBeenSet = false;

    Aws::String m_accessGrantArn;
    bool m_accessGrantArnHasBeenSet = false;

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    AccessGrantsLocationConfiguration m_accessGrantsLocationConfiguration;
    bool m_accessGrantsLocationConfigurationHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
