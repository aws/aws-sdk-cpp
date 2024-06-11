/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/PlacementStatistics.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that describes how email sent during the predictive inbox placement
   * test was handled by a certain email provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/IspPlacement">AWS
   * API Reference</a></p>
   */
  class IspPlacement
  {
  public:
    AWS_PINPOINTEMAIL_API IspPlacement();
    AWS_PINPOINTEMAIL_API IspPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API IspPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline const Aws::String& GetIspName() const{ return m_ispName; }
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }
    inline void SetIspName(const Aws::String& value) { m_ispNameHasBeenSet = true; m_ispName = value; }
    inline void SetIspName(Aws::String&& value) { m_ispNameHasBeenSet = true; m_ispName = std::move(value); }
    inline void SetIspName(const char* value) { m_ispNameHasBeenSet = true; m_ispName.assign(value); }
    inline IspPlacement& WithIspName(const Aws::String& value) { SetIspName(value); return *this;}
    inline IspPlacement& WithIspName(Aws::String&& value) { SetIspName(std::move(value)); return *this;}
    inline IspPlacement& WithIspName(const char* value) { SetIspName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline const PlacementStatistics& GetPlacementStatistics() const{ return m_placementStatistics; }
    inline bool PlacementStatisticsHasBeenSet() const { return m_placementStatisticsHasBeenSet; }
    inline void SetPlacementStatistics(const PlacementStatistics& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = value; }
    inline void SetPlacementStatistics(PlacementStatistics&& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = std::move(value); }
    inline IspPlacement& WithPlacementStatistics(const PlacementStatistics& value) { SetPlacementStatistics(value); return *this;}
    inline IspPlacement& WithPlacementStatistics(PlacementStatistics&& value) { SetPlacementStatistics(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet = false;

    PlacementStatistics m_placementStatistics;
    bool m_placementStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
