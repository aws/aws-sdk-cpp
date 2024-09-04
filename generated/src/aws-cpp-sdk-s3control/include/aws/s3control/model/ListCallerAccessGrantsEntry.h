/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/Permission.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Part of <code>ListCallerAccessGrantsResult</code>. Each entry includes the
   * permission level (READ, WRITE, or READWRITE) and the grant scope of the access
   * grant. If the grant also includes an application ARN, the grantee can only
   * access the S3 data through this application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListCallerAccessGrantsEntry">AWS
   * API Reference</a></p>
   */
  class ListCallerAccessGrantsEntry
  {
  public:
    AWS_S3CONTROL_API ListCallerAccessGrantsEntry();
    AWS_S3CONTROL_API ListCallerAccessGrantsEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListCallerAccessGrantsEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of permission granted, which can be one of the following values:</p>
     * <ul> <li> <p> <code>READ</code> - Grants read-only access to the S3 data.</p>
     * </li> <li> <p> <code>WRITE</code> - Grants write-only access to the S3 data.</p>
     * </li> <li> <p> <code>READWRITE</code> - Grants both read and write access to the
     * S3 data.</p> </li> </ul>
     */
    inline const Permission& GetPermission() const{ return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }
    inline ListCallerAccessGrantsEntry& WithPermission(const Permission& value) { SetPermission(value); return *this;}
    inline ListCallerAccessGrantsEntry& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path of the data to which you have been granted access. </p>
     */
    inline const Aws::String& GetGrantScope() const{ return m_grantScope; }
    inline bool GrantScopeHasBeenSet() const { return m_grantScopeHasBeenSet; }
    inline void SetGrantScope(const Aws::String& value) { m_grantScopeHasBeenSet = true; m_grantScope = value; }
    inline void SetGrantScope(Aws::String&& value) { m_grantScopeHasBeenSet = true; m_grantScope = std::move(value); }
    inline void SetGrantScope(const char* value) { m_grantScopeHasBeenSet = true; m_grantScope.assign(value); }
    inline ListCallerAccessGrantsEntry& WithGrantScope(const Aws::String& value) { SetGrantScope(value); return *this;}
    inline ListCallerAccessGrantsEntry& WithGrantScope(Aws::String&& value) { SetGrantScope(std::move(value)); return *this;}
    inline ListCallerAccessGrantsEntry& WithGrantScope(const char* value) { SetGrantScope(value); return *this;}
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
    inline ListCallerAccessGrantsEntry& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline ListCallerAccessGrantsEntry& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline ListCallerAccessGrantsEntry& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}
  private:

    Permission m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::String m_grantScope;
    bool m_grantScopeHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
