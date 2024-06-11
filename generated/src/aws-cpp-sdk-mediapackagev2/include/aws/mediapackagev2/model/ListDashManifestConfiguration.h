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
   * <p>List the DASH manifest configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListDashManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class ListDashManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API ListDashManifestConfiguration();
    AWS_MEDIAPACKAGEV2_API ListDashManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ListDashManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline ListDashManifestConfiguration& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline ListDashManifestConfiguration& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline ListDashManifestConfiguration& WithManifestName(const char* value) { SetManifestName(value); return *this;}
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
    inline ListDashManifestConfiguration& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline ListDashManifestConfiguration& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline ListDashManifestConfiguration& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
