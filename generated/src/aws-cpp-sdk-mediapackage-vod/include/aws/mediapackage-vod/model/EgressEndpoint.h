/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * The endpoint URL used to access an Asset using one
   * PackagingConfiguration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/EgressEndpoint">AWS
   * API Reference</a></p>
   */
  class EgressEndpoint
  {
  public:
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint() = default;
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline const Aws::String& GetPackagingConfigurationId() const { return m_packagingConfigurationId; }
    inline bool PackagingConfigurationIdHasBeenSet() const { return m_packagingConfigurationIdHasBeenSet; }
    template<typename PackagingConfigurationIdT = Aws::String>
    void SetPackagingConfigurationId(PackagingConfigurationIdT&& value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId = std::forward<PackagingConfigurationIdT>(value); }
    template<typename PackagingConfigurationIdT = Aws::String>
    EgressEndpoint& WithPackagingConfigurationId(PackagingConfigurationIdT&& value) { SetPackagingConfigurationId(std::forward<PackagingConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EgressEndpoint& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    EgressEndpoint& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packagingConfigurationId;
    bool m_packagingConfigurationIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
