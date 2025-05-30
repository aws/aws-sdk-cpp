﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/PortRange.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the destination of the next component in the network
   * path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkPathComponentDetails">AWS
   * API Reference</a></p>
   */
  class NetworkPathComponentDetails
  {
  public:
    AWS_SECURITYHUB_API NetworkPathComponentDetails() = default;
    AWS_SECURITYHUB_API NetworkPathComponentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkPathComponentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP addresses of the destination.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::Vector<Aws::String>>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::Vector<Aws::String>>
    NetworkPathComponentDetails& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    template<typename AddressT = Aws::String>
    NetworkPathComponentDetails& AddAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address.emplace_back(std::forward<AddressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of port ranges for the destination.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    NetworkPathComponentDetails& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = PortRange>
    NetworkPathComponentDetails& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<PortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
