/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>List the low-latency HTTP live streaming (HLS) manifest
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListLowLatencyHlsManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class ListLowLatencyHlsManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API ListLowLatencyHlsManifestConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API ListLowLatencyHlsManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ListLowLatencyHlsManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short short string that's appended to the endpoint URL. The manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default manifest name, index. MediaPackage automatically inserts the
     * format extension, such as .m3u8. You can't use the same manifest name if you use
     * HLS manifest and low-latency HLS manifest. The manifestName on the HLSManifest
     * object overrides the manifestName you provided on the originEndpoint object.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    ListLowLatencyHlsManifestConfiguration& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default child manifest name, index_1. The manifestName on the
     * HLSManifest object overrides the manifestName you provided on the originEndpoint
     * object.</p>
     */
    inline const Aws::String& GetChildManifestName() const { return m_childManifestName; }
    inline bool ChildManifestNameHasBeenSet() const { return m_childManifestNameHasBeenSet; }
    template<typename ChildManifestNameT = Aws::String>
    void SetChildManifestName(ChildManifestNameT&& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = std::forward<ChildManifestNameT>(value); }
    template<typename ChildManifestNameT = Aws::String>
    ListLowLatencyHlsManifestConfiguration& WithChildManifestName(ChildManifestNameT&& value) { SetChildManifestName(std::forward<ChildManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    ListLowLatencyHlsManifestConfiguration& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_childManifestName;
    bool m_childManifestNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
