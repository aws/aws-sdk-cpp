/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/FilterConfiguration.h>
#include <aws/mediapackagev2/model/MssManifestLayout.h>
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
   * <p>Configuration parameters for creating a Microsoft Smooth Streaming (MSS)
   * manifest. MSS is a streaming media format developed by Microsoft that delivers
   * adaptive bitrate streaming content to compatible players and
   * devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateMssManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateMssManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateMssManifestConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API CreateMssManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CreateMssManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL to create a unique path to
     * this MSS manifest. The manifest name must be unique within the origin endpoint
     * and can contain letters, numbers, hyphens, and underscores.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    CreateMssManifestConfiguration& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration (in seconds) of the manifest window. This determines how
     * much content is available in the manifest at any given time. The manifest window
     * slides forward as new segments become available, maintaining a consistent
     * duration of content. The minimum value is 30 seconds.</p>
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline CreateMssManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = FilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = FilterConfiguration>
    CreateMssManifestConfiguration& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the layout format of the MSS manifest. This controls how the
     * manifest is structured and presented to client players, affecting compatibility
     * with different MSS-compatible devices and applications.</p>
     */
    inline MssManifestLayout GetManifestLayout() const { return m_manifestLayout; }
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }
    inline void SetManifestLayout(MssManifestLayout value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }
    inline CreateMssManifestConfiguration& WithManifestLayout(MssManifestLayout value) { SetManifestLayout(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    MssManifestLayout m_manifestLayout{MssManifestLayout::NOT_SET};
    bool m_manifestLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
