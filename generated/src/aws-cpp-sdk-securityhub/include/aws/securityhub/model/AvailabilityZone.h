/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_SECURITYHUB_API AvailabilityZone();
    AWS_SECURITYHUB_API AvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline AvailabilityZone& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline AvailabilityZone& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline AvailabilityZone& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}
  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
