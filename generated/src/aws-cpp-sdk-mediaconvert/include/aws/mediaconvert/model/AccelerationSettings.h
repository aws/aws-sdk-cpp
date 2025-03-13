/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AccelerationMode.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Accelerated transcoding can significantly speed up jobs with long, visually
   * complex content.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AccelerationSettings">AWS
   * API Reference</a></p>
   */
  class AccelerationSettings
  {
  public:
    AWS_MEDIACONVERT_API AccelerationSettings() = default;
    AWS_MEDIACONVERT_API AccelerationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AccelerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the conditions when the service will run your job with accelerated
     * transcoding.
     */
    inline AccelerationMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AccelerationMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline AccelerationSettings& WithMode(AccelerationMode value) { SetMode(value); return *this;}
    ///@}
  private:

    AccelerationMode m_mode{AccelerationMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
