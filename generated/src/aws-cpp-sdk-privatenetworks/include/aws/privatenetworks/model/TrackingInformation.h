/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about tracking a shipment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/TrackingInformation">AWS
   * API Reference</a></p>
   */
  class TrackingInformation
  {
  public:
    AWS_PRIVATENETWORKS_API TrackingInformation() = default;
    AWS_PRIVATENETWORKS_API TrackingInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API TrackingInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tracking number of the shipment.</p>
     */
    inline const Aws::String& GetTrackingNumber() const { return m_trackingNumber; }
    inline bool TrackingNumberHasBeenSet() const { return m_trackingNumberHasBeenSet; }
    template<typename TrackingNumberT = Aws::String>
    void SetTrackingNumber(TrackingNumberT&& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = std::forward<TrackingNumberT>(value); }
    template<typename TrackingNumberT = Aws::String>
    TrackingInformation& WithTrackingNumber(TrackingNumberT&& value) { SetTrackingNumber(std::forward<TrackingNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingNumber;
    bool m_trackingNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
