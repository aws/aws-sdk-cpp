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
   * <p>Configuration details for a Microsoft Smooth Streaming (MSS) manifest
   * associated with an origin endpoint. This includes all the settings and
   * properties that define how the MSS content is packaged and
   * delivered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetMssManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class GetMssManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetMssManifestConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API GetMssManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API GetMssManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the MSS manifest. This name is appended to the origin endpoint
     * URL to create the unique path for accessing this specific MSS manifest.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    GetMssManifestConfiguration& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete URL for accessing the MSS manifest. Client players use this URL
     * to retrieve the manifest and begin streaming the Microsoft Smooth Streaming
     * content.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetMssManifestConfiguration& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = FilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = FilterConfiguration>
    GetMssManifestConfiguration& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration (in seconds) of the manifest window. This represents the total
     * amount of content available in the manifest at any given time.</p>
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline GetMssManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layout format of the MSS manifest, which determines how the manifest is
     * structured for client compatibility.</p>
     */
    inline MssManifestLayout GetManifestLayout() const { return m_manifestLayout; }
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }
    inline void SetManifestLayout(MssManifestLayout value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }
    inline GetMssManifestConfiguration& WithManifestLayout(MssManifestLayout value) { SetManifestLayout(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    MssManifestLayout m_manifestLayout{MssManifestLayout::NOT_SET};
    bool m_manifestLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
