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
    AWS_NETWORKMANAGER_API AWSLocation();
    AWS_NETWORKMANAGER_API AWSLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API AWSLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline const Aws::String& GetZone() const{ return m_zone; }

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline bool ZoneHasBeenSet() const { return m_zoneHasBeenSet; }

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline void SetZone(const Aws::String& value) { m_zoneHasBeenSet = true; m_zone = value; }

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline void SetZone(Aws::String&& value) { m_zoneHasBeenSet = true; m_zone = std::move(value); }

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline void SetZone(const char* value) { m_zoneHasBeenSet = true; m_zone.assign(value); }

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline AWSLocation& WithZone(const Aws::String& value) { SetZone(value); return *this;}

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline AWSLocation& WithZone(Aws::String&& value) { SetZone(std::move(value)); return *this;}

    /**
     * <p>The Zone that the device is located in. Specify the ID of an Availability
     * Zone, Local Zone, Wavelength Zone, or an Outpost.</p>
     */
    inline AWSLocation& WithZone(const char* value) { SetZone(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline AWSLocation& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline AWSLocation& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the subnet that the device is located
     * in.</p>
     */
    inline AWSLocation& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}

  private:

    Aws::String m_zone;
    bool m_zoneHasBeenSet = false;

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
