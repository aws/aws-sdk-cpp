/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A list of Active Directory users and groups that have special permissions for
   * SMB file shares on the gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SMBLocalGroups">AWS
   * API Reference</a></p>
   */
  class SMBLocalGroups
  {
  public:
    AWS_STORAGEGATEWAY_API SMBLocalGroups();
    AWS_STORAGEGATEWAY_API SMBLocalGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API SMBLocalGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayAdmins() const{ return m_gatewayAdmins; }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline bool GatewayAdminsHasBeenSet() const { return m_gatewayAdminsHasBeenSet; }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline void SetGatewayAdmins(const Aws::Vector<Aws::String>& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins = value; }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline void SetGatewayAdmins(Aws::Vector<Aws::String>&& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins = std::move(value); }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline SMBLocalGroups& WithGatewayAdmins(const Aws::Vector<Aws::String>& value) { SetGatewayAdmins(value); return *this;}

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline SMBLocalGroups& WithGatewayAdmins(Aws::Vector<Aws::String>&& value) { SetGatewayAdmins(std::move(value)); return *this;}

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline SMBLocalGroups& AddGatewayAdmins(const Aws::String& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins.push_back(value); return *this; }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline SMBLocalGroups& AddGatewayAdmins(Aws::String&& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline SMBLocalGroups& AddGatewayAdmins(const char* value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_gatewayAdmins;
    bool m_gatewayAdminsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
