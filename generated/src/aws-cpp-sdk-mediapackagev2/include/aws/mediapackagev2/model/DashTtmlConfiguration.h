/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/DashTtmlProfile.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The settings for TTML subtitles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashTtmlConfiguration">AWS
   * API Reference</a></p>
   */
  class DashTtmlConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashTtmlConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API DashTtmlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashTtmlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile that MediaPackage uses when signaling subtitles in the manifest.
     * <code>IMSC</code> is the default profile. <code>EBU-TT-D</code> produces
     * subtitles that are compliant with the EBU-TT-D TTML profile. MediaPackage passes
     * through subtitle styles to the manifest. For more information about EBU-TT-D
     * subtitles, see <a href="https://tech.ebu.ch/publications/tech3380">EBU-TT-D
     * Subtitling Distribution Format</a>.</p>
     */
    inline DashTtmlProfile GetTtmlProfile() const { return m_ttmlProfile; }
    inline bool TtmlProfileHasBeenSet() const { return m_ttmlProfileHasBeenSet; }
    inline void SetTtmlProfile(DashTtmlProfile value) { m_ttmlProfileHasBeenSet = true; m_ttmlProfile = value; }
    inline DashTtmlConfiguration& WithTtmlProfile(DashTtmlProfile value) { SetTtmlProfile(value); return *this;}
    ///@}
  private:

    DashTtmlProfile m_ttmlProfile{DashTtmlProfile::NOT_SET};
    bool m_ttmlProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
