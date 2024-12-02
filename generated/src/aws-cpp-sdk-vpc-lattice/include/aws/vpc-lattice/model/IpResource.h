/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes an IP resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/IpResource">AWS
   * API Reference</a></p>
   */
  class IpResource
  {
  public:
    AWS_VPCLATTICE_API IpResource();
    AWS_VPCLATTICE_API IpResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API IpResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of the IP resource.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline IpResource& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline IpResource& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline IpResource& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
