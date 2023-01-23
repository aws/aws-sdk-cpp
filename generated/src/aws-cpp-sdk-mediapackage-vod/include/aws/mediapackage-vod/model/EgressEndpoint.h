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
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint();
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API EgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline const Aws::String& GetPackagingConfigurationId() const{ return m_packagingConfigurationId; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline bool PackagingConfigurationIdHasBeenSet() const { return m_packagingConfigurationIdHasBeenSet; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(const Aws::String& value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId = value; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(Aws::String&& value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId = std::move(value); }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(const char* value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId.assign(value); }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(const Aws::String& value) { SetPackagingConfigurationId(value); return *this;}

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(Aws::String&& value) { SetPackagingConfigurationId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(const char* value) { SetPackagingConfigurationId(value); return *this;}


    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline EgressEndpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline EgressEndpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * The current processing status of the asset used for the packaging configuration.
     * The status can be either QUEUED, PROCESSING, PLAYABLE, or FAILED. Status
     * information won't be available for most assets ingested before 2021-09-30.
     */
    inline EgressEndpoint& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

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
