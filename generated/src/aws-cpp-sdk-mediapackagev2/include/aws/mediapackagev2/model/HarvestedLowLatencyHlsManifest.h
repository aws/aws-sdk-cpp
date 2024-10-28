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
   * <p>Information about a harvested Low-Latency HLS manifest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/HarvestedLowLatencyHlsManifest">AWS
   * API Reference</a></p>
   */
  class HarvestedLowLatencyHlsManifest
  {
  public:
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest();
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the harvested Low-Latency HLS manifest.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline HarvestedLowLatencyHlsManifest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline HarvestedLowLatencyHlsManifest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline HarvestedLowLatencyHlsManifest& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
