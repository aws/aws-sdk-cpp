/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/HttpPackageConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class UpdateVodSourceRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API UpdateVodSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVodSource"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of HTTP package configurations for the VOD source on this account.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const { return m_httpPackageConfigurations; }
    inline bool HttpPackageConfigurationsHasBeenSet() const { return m_httpPackageConfigurationsHasBeenSet; }
    template<typename HttpPackageConfigurationsT = Aws::Vector<HttpPackageConfiguration>>
    void SetHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = std::forward<HttpPackageConfigurationsT>(value); }
    template<typename HttpPackageConfigurationsT = Aws::Vector<HttpPackageConfiguration>>
    UpdateVodSourceRequest& WithHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { SetHttpPackageConfigurations(std::forward<HttpPackageConfigurationsT>(value)); return *this;}
    template<typename HttpPackageConfigurationsT = HttpPackageConfiguration>
    UpdateVodSourceRequest& AddHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.emplace_back(std::forward<HttpPackageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the source location associated with this VOD Source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    UpdateVodSourceRequest& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    UpdateVodSourceRequest& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;
    bool m_httpPackageConfigurationsHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
