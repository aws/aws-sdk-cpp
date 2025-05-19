/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/DashTtmlConfiguration.h>
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
   * <p>The configuration for DASH subtitles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashSubtitleConfiguration">AWS
   * API Reference</a></p>
   */
  class DashSubtitleConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashSubtitleConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API DashSubtitleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashSubtitleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for TTML subtitles.</p>
     */
    inline const DashTtmlConfiguration& GetTtmlConfiguration() const { return m_ttmlConfiguration; }
    inline bool TtmlConfigurationHasBeenSet() const { return m_ttmlConfigurationHasBeenSet; }
    template<typename TtmlConfigurationT = DashTtmlConfiguration>
    void SetTtmlConfiguration(TtmlConfigurationT&& value) { m_ttmlConfigurationHasBeenSet = true; m_ttmlConfiguration = std::forward<TtmlConfigurationT>(value); }
    template<typename TtmlConfigurationT = DashTtmlConfiguration>
    DashSubtitleConfiguration& WithTtmlConfiguration(TtmlConfigurationT&& value) { SetTtmlConfiguration(std::forward<TtmlConfigurationT>(value)); return *this;}
    ///@}
  private:

    DashTtmlConfiguration m_ttmlConfiguration;
    bool m_ttmlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
