/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/AllocationType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Provides information of the IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/IpAddressMember">AWS
   * API Reference</a></p>
   */
  class IpAddressMember
  {
  public:
    AWS_SSMSAP_API IpAddressMember() = default;
    AWS_SSMSAP_API IpAddressMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API IpAddressMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    IpAddressMember& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IP address.</p>
     */
    inline bool GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline IpAddressMember& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline AllocationType GetAllocationType() const { return m_allocationType; }
    inline bool AllocationTypeHasBeenSet() const { return m_allocationTypeHasBeenSet; }
    inline void SetAllocationType(AllocationType value) { m_allocationTypeHasBeenSet = true; m_allocationType = value; }
    inline IpAddressMember& WithAllocationType(AllocationType value) { SetAllocationType(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    bool m_primary{false};
    bool m_primaryHasBeenSet = false;

    AllocationType m_allocationType{AllocationType::NOT_SET};
    bool m_allocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
