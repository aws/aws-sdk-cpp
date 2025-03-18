/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure representing a screenshot that is used as a baseline during
   * visual monitoring comparisons made by the canary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/BaseScreenshot">AWS
   * API Reference</a></p>
   */
  class BaseScreenshot
  {
  public:
    AWS_SYNTHETICS_API BaseScreenshot() = default;
    AWS_SYNTHETICS_API BaseScreenshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API BaseScreenshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline const Aws::String& GetScreenshotName() const { return m_screenshotName; }
    inline bool ScreenshotNameHasBeenSet() const { return m_screenshotNameHasBeenSet; }
    template<typename ScreenshotNameT = Aws::String>
    void SetScreenshotName(ScreenshotNameT&& value) { m_screenshotNameHasBeenSet = true; m_screenshotName = std::forward<ScreenshotNameT>(value); }
    template<typename ScreenshotNameT = Aws::String>
    BaseScreenshot& WithScreenshotName(ScreenshotNameT&& value) { SetScreenshotName(std::forward<ScreenshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreCoordinates() const { return m_ignoreCoordinates; }
    inline bool IgnoreCoordinatesHasBeenSet() const { return m_ignoreCoordinatesHasBeenSet; }
    template<typename IgnoreCoordinatesT = Aws::Vector<Aws::String>>
    void SetIgnoreCoordinates(IgnoreCoordinatesT&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates = std::forward<IgnoreCoordinatesT>(value); }
    template<typename IgnoreCoordinatesT = Aws::Vector<Aws::String>>
    BaseScreenshot& WithIgnoreCoordinates(IgnoreCoordinatesT&& value) { SetIgnoreCoordinates(std::forward<IgnoreCoordinatesT>(value)); return *this;}
    template<typename IgnoreCoordinatesT = Aws::String>
    BaseScreenshot& AddIgnoreCoordinates(IgnoreCoordinatesT&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.emplace_back(std::forward<IgnoreCoordinatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_screenshotName;
    bool m_screenshotNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ignoreCoordinates;
    bool m_ignoreCoordinatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
