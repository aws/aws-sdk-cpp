﻿/**
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
    AWS_MEDIAPACKAGEV2_API ListLowLatencyHlsManifestConfiguration();
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
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline ListLowLatencyHlsManifestConfiguration& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint. If you don't enter a value, MediaPackage
     * uses the default child manifest name, index_1. The manifestName on the
     * HLSManifest object overrides the manifestName you provided on the originEndpoint
     * object.</p>
     */
    inline const Aws::String& GetChildManifestName() const{ return m_childManifestName; }
    inline bool ChildManifestNameHasBeenSet() const { return m_childManifestNameHasBeenSet; }
    inline void SetChildManifestName(const Aws::String& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = value; }
    inline void SetChildManifestName(Aws::String&& value) { m_childManifestNameHasBeenSet = true; m_childManifestName = std::move(value); }
    inline void SetChildManifestName(const char* value) { m_childManifestNameHasBeenSet = true; m_childManifestName.assign(value); }
    inline ListLowLatencyHlsManifestConfiguration& WithChildManifestName(const Aws::String& value) { SetChildManifestName(value); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithChildManifestName(Aws::String&& value) { SetChildManifestName(std::move(value)); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithChildManifestName(const char* value) { SetChildManifestName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline ListLowLatencyHlsManifestConfiguration& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline ListLowLatencyHlsManifestConfiguration& WithUrl(const char* value) { SetUrl(value); return *this;}
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
