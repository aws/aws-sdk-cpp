/**
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
    AWS_SECURITYHUB_API NetworkPathComponentDetails();
    AWS_SECURITYHUB_API NetworkPathComponentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkPathComponentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP addresses of the destination.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::Vector<Aws::String>& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::Vector<Aws::String>&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline NetworkPathComponentDetails& WithAddress(const Aws::Vector<Aws::String>& value) { SetAddress(value); return *this;}
    inline NetworkPathComponentDetails& WithAddress(Aws::Vector<Aws::String>&& value) { SetAddress(std::move(value)); return *this;}
    inline NetworkPathComponentDetails& AddAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address.push_back(value); return *this; }
    inline NetworkPathComponentDetails& AddAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address.push_back(std::move(value)); return *this; }
    inline NetworkPathComponentDetails& AddAddress(const char* value) { m_addressHasBeenSet = true; m_address.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of port ranges for the destination.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<PortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<PortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline NetworkPathComponentDetails& WithPortRanges(const Aws::Vector<PortRange>& value) { SetPortRanges(value); return *this;}
    inline NetworkPathComponentDetails& WithPortRanges(Aws::Vector<PortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline NetworkPathComponentDetails& AddPortRanges(const PortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline NetworkPathComponentDetails& AddPortRanges(PortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
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
