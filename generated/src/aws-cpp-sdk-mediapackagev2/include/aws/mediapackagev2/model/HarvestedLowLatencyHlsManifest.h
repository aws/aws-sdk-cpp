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
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest() = default;
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvestedLowLatencyHlsManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the harvested Low-Latency HLS manifest.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    HarvestedLowLatencyHlsManifest& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
