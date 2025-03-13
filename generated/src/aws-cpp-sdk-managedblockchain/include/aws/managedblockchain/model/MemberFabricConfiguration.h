/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Configuration properties for Hyperledger Fabric for a member in a Managed
   * Blockchain network that is using the Hyperledger Fabric framework.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberFabricConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricConfiguration() = default;
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name for the member's initial administrative user.</p>
     */
    inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    template<typename AdminUsernameT = Aws::String>
    void SetAdminUsername(AdminUsernameT&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::forward<AdminUsernameT>(value); }
    template<typename AdminUsernameT = Aws::String>
    MemberFabricConfiguration& WithAdminUsername(AdminUsernameT&& value) { SetAdminUsername(std::forward<AdminUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the member's initial administrative user. The
     * <code>AdminPassword</code> must be at least 8 characters long and no more than
     * 32 characters. It must contain at least one uppercase letter, one lowercase
     * letter, and one digit. It cannot have a single quotation mark (‘), a double
     * quotation marks (“), a forward slash(/), a backward slash(\), @, or a space.</p>
     */
    inline const Aws::String& GetAdminPassword() const { return m_adminPassword; }
    inline bool AdminPasswordHasBeenSet() const { return m_adminPasswordHasBeenSet; }
    template<typename AdminPasswordT = Aws::String>
    void SetAdminPassword(AdminPasswordT&& value) { m_adminPasswordHasBeenSet = true; m_adminPassword = std::forward<AdminPasswordT>(value); }
    template<typename AdminPasswordT = Aws::String>
    MemberFabricConfiguration& WithAdminPassword(AdminPasswordT&& value) { SetAdminPassword(std::forward<AdminPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_adminPassword;
    bool m_adminPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
