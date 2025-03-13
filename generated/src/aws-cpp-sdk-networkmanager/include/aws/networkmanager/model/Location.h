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
   * <p>Describes a location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Location">AWS
   * API Reference</a></p>
   */
  class Location
  {
  public:
    AWS_NETWORKMANAGER_API Location() = default;
    AWS_NETWORKMANAGER_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The physical address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Location& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude.</p>
     */
    inline const Aws::String& GetLatitude() const { return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    template<typename LatitudeT = Aws::String>
    void SetLatitude(LatitudeT&& value) { m_latitudeHasBeenSet = true; m_latitude = std::forward<LatitudeT>(value); }
    template<typename LatitudeT = Aws::String>
    Location& WithLatitude(LatitudeT&& value) { SetLatitude(std::forward<LatitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude.</p>
     */
    inline const Aws::String& GetLongitude() const { return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    template<typename LongitudeT = Aws::String>
    void SetLongitude(LongitudeT&& value) { m_longitudeHasBeenSet = true; m_longitude = std::forward<LongitudeT>(value); }
    template<typename LongitudeT = Aws::String>
    Location& WithLongitude(LongitudeT&& value) { SetLongitude(std::forward<LongitudeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_latitude;
    bool m_latitudeHasBeenSet = false;

    Aws::String m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
