/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>An over-the-air update (OTA) job configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/OTAJobConfig">AWS
   * API Reference</a></p>
   */
  class OTAJobConfig
  {
  public:
    AWS_PANORAMA_API OTAJobConfig() = default;
    AWS_PANORAMA_API OTAJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API OTAJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to apply the update if it is a major version change.</p>
     */
    inline bool GetAllowMajorVersionUpdate() const { return m_allowMajorVersionUpdate; }
    inline bool AllowMajorVersionUpdateHasBeenSet() const { return m_allowMajorVersionUpdateHasBeenSet; }
    inline void SetAllowMajorVersionUpdate(bool value) { m_allowMajorVersionUpdateHasBeenSet = true; m_allowMajorVersionUpdate = value; }
    inline OTAJobConfig& WithAllowMajorVersionUpdate(bool value) { SetAllowMajorVersionUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
    inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
    template<typename ImageVersionT = Aws::String>
    void SetImageVersion(ImageVersionT&& value) { m_imageVersionHasBeenSet = true; m_imageVersion = std::forward<ImageVersionT>(value); }
    template<typename ImageVersionT = Aws::String>
    OTAJobConfig& WithImageVersion(ImageVersionT&& value) { SetImageVersion(std::forward<ImageVersionT>(value)); return *this;}
    ///@}
  private:

    bool m_allowMajorVersionUpdate{false};
    bool m_allowMajorVersionUpdateHasBeenSet = false;

    Aws::String m_imageVersion;
    bool m_imageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
