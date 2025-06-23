/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines private IP address configuration for network interface.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/PrivateIpAddressSpecification">AWS
   * API Reference</a></p>
   */
  class PrivateIpAddressSpecification
  {
  public:
    AWS_WORKSPACESINSTANCES_API PrivateIpAddressSpecification() = default;
    AWS_WORKSPACESINSTANCES_API PrivateIpAddressSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API PrivateIpAddressSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if this is the primary private IP address.</p>
     */
    inline bool GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline PrivateIpAddressSpecification& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific private IP address for the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    PrivateIpAddressSpecification& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}
  private:

    bool m_primary{false};
    bool m_primaryHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
