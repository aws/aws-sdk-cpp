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
    AWS_STORAGEGATEWAY_API SMBLocalGroups() = default;
    AWS_STORAGEGATEWAY_API SMBLocalGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API SMBLocalGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Active Directory users and groups that have local Gateway Admin
     * permissions. Acceptable formats include: <code>DOMAIN\User1</code>,
     * <code>user1</code>, <code>DOMAIN\group1</code>, and <code>group1</code>.</p>
     * <p>Gateway Admins can use the Shared Folders Microsoft Management Console
     * snap-in to force-close files that are open and locked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayAdmins() const { return m_gatewayAdmins; }
    inline bool GatewayAdminsHasBeenSet() const { return m_gatewayAdminsHasBeenSet; }
    template<typename GatewayAdminsT = Aws::Vector<Aws::String>>
    void SetGatewayAdmins(GatewayAdminsT&& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins = std::forward<GatewayAdminsT>(value); }
    template<typename GatewayAdminsT = Aws::Vector<Aws::String>>
    SMBLocalGroups& WithGatewayAdmins(GatewayAdminsT&& value) { SetGatewayAdmins(std::forward<GatewayAdminsT>(value)); return *this;}
    template<typename GatewayAdminsT = Aws::String>
    SMBLocalGroups& AddGatewayAdmins(GatewayAdminsT&& value) { m_gatewayAdminsHasBeenSet = true; m_gatewayAdmins.emplace_back(std::forward<GatewayAdminsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_gatewayAdmins;
    bool m_gatewayAdminsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
