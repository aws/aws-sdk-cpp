/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/PlacementStatistics.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that describes how email sent during the predictive inbox placement
   * test was handled by a certain email provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/IspPlacement">AWS
   * API Reference</a></p>
   */
  class IspPlacement
  {
  public:
    AWS_SESV2_API IspPlacement() = default;
    AWS_SESV2_API IspPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API IspPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline const Aws::String& GetIspName() const { return m_ispName; }
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }
    template<typename IspNameT = Aws::String>
    void SetIspName(IspNameT&& value) { m_ispNameHasBeenSet = true; m_ispName = std::forward<IspNameT>(value); }
    template<typename IspNameT = Aws::String>
    IspPlacement& WithIspName(IspNameT&& value) { SetIspName(std::forward<IspNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline const PlacementStatistics& GetPlacementStatistics() const { return m_placementStatistics; }
    inline bool PlacementStatisticsHasBeenSet() const { return m_placementStatisticsHasBeenSet; }
    template<typename PlacementStatisticsT = PlacementStatistics>
    void SetPlacementStatistics(PlacementStatisticsT&& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = std::forward<PlacementStatisticsT>(value); }
    template<typename PlacementStatisticsT = PlacementStatistics>
    IspPlacement& WithPlacementStatistics(PlacementStatisticsT&& value) { SetPlacementStatistics(std::forward<PlacementStatisticsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet = false;

    PlacementStatistics m_placementStatistics;
    bool m_placementStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
