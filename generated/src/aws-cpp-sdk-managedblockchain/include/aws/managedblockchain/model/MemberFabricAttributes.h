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
   * <p>Attributes of Hyperledger Fabric for a member in a Managed Blockchain network
   * using the Hyperledger Fabric framework.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberFabricAttributes">AWS
   * API Reference</a></p>
   */
  class MemberFabricAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes() = default;
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API MemberFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name for the initial administrator user for the member.</p>
     */
    inline const Aws::String& GetAdminUsername() const { return m_adminUsername; }
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }
    template<typename AdminUsernameT = Aws::String>
    void SetAdminUsername(AdminUsernameT&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::forward<AdminUsernameT>(value); }
    template<typename AdminUsernameT = Aws::String>
    MemberFabricAttributes& WithAdminUsername(AdminUsernameT&& value) { SetAdminUsername(std::forward<AdminUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to access the member's certificate authority.</p>
     */
    inline const Aws::String& GetCaEndpoint() const { return m_caEndpoint; }
    inline bool CaEndpointHasBeenSet() const { return m_caEndpointHasBeenSet; }
    template<typename CaEndpointT = Aws::String>
    void SetCaEndpoint(CaEndpointT&& value) { m_caEndpointHasBeenSet = true; m_caEndpoint = std::forward<CaEndpointT>(value); }
    template<typename CaEndpointT = Aws::String>
    MemberFabricAttributes& WithCaEndpoint(CaEndpointT&& value) { SetCaEndpoint(std::forward<CaEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_caEndpoint;
    bool m_caEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
