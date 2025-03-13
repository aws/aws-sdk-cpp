/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Specifies a location in Amazon Web Services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AWSLocation">AWS
   * API Reference</a></p>
   */
  class AWSLocation
  {
  public:
    AWS_NETWORKMANAGER_API AWSLocation() = default;
    AWS_NETWORKMANAGER_API AWSLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API AWSLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline const Aws::String& GetZone() const { return m_zone; }
    inline bool ZoneHasBeenSet() const { return m_zoneHasBeenSet; }
    template<typename ZoneT = Aws::String>
    void SetZone(ZoneT&& value) { m_zoneHasBeenSet = true; m_zone = std::forward<ZoneT>(value); }
    template<typename ZoneT = Aws::String>
    AWSLocation& WithZone(ZoneT&& value) { SetZone(std::forward<ZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline const Aws::String& GetSubnetArn() const { return m_subnetArn; }
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }
    template<typename SubnetArnT = Aws::String>
    void SetSubnetArn(SubnetArnT&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::forward<SubnetArnT>(value); }
    template<typename SubnetArnT = Aws::String>
    AWSLocation& WithSubnetArn(SubnetArnT&& value) { SetSubnetArn(std::forward<SubnetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_zone;
    bool m_zoneHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
