﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The <code>Status</code> and <code>TrackingNumber</code> information for an
   * inbound or outbound shipment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/Shipment">AWS
   * API Reference</a></p>
   */
  class Shipment
  {
  public:
    AWS_SNOWBALL_API Shipment() = default;
    AWS_SNOWBALL_API Shipment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Shipment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status information for a shipment.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Shipment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tracking number for this job. Using this tracking number with your
     * region's carrier's website, you can track a Snow device as the carrier
     * transports it.</p> <p>For India, the carrier is Amazon Logistics. For all other
     * regions, UPS is the carrier.</p>
     */
    inline const Aws::String& GetTrackingNumber() const { return m_trackingNumber; }
    inline bool TrackingNumberHasBeenSet() const { return m_trackingNumberHasBeenSet; }
    template<typename TrackingNumberT = Aws::String>
    void SetTrackingNumber(TrackingNumberT&& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = std::forward<TrackingNumberT>(value); }
    template<typename TrackingNumberT = Aws::String>
    Shipment& WithTrackingNumber(TrackingNumberT&& value) { SetTrackingNumber(std::forward<TrackingNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_trackingNumber;
    bool m_trackingNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
