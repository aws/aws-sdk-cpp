/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/NielsenCBET.h>
#include <aws/medialive/model/NielsenWatermarksDistributionTypes.h>
#include <aws/medialive/model/NielsenNaesIiNw.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Nielsen Watermarks Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenWatermarksSettings">AWS
   * API Reference</a></p>
   */
  class NielsenWatermarksSettings
  {
  public:
    AWS_MEDIALIVE_API NielsenWatermarksSettings() = default;
    AWS_MEDIALIVE_API NielsenWatermarksSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenWatermarksSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline const NielsenCBET& GetNielsenCbetSettings() const { return m_nielsenCbetSettings; }
    inline bool NielsenCbetSettingsHasBeenSet() const { return m_nielsenCbetSettingsHasBeenSet; }
    template<typename NielsenCbetSettingsT = NielsenCBET>
    void SetNielsenCbetSettings(NielsenCbetSettingsT&& value) { m_nielsenCbetSettingsHasBeenSet = true; m_nielsenCbetSettings = std::forward<NielsenCbetSettingsT>(value); }
    template<typename NielsenCbetSettingsT = NielsenCBET>
    NielsenWatermarksSettings& WithNielsenCbetSettings(NielsenCbetSettingsT&& value) { SetNielsenCbetSettings(std::forward<NielsenCbetSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline NielsenWatermarksDistributionTypes GetNielsenDistributionType() const { return m_nielsenDistributionType; }
    inline bool NielsenDistributionTypeHasBeenSet() const { return m_nielsenDistributionTypeHasBeenSet; }
    inline void SetNielsenDistributionType(NielsenWatermarksDistributionTypes value) { m_nielsenDistributionTypeHasBeenSet = true; m_nielsenDistributionType = value; }
    inline NielsenWatermarksSettings& WithNielsenDistributionType(NielsenWatermarksDistributionTypes value) { SetNielsenDistributionType(value); return *this;}
    ///@}

    ///@{
    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline const NielsenNaesIiNw& GetNielsenNaesIiNwSettings() const { return m_nielsenNaesIiNwSettings; }
    inline bool NielsenNaesIiNwSettingsHasBeenSet() const { return m_nielsenNaesIiNwSettingsHasBeenSet; }
    template<typename NielsenNaesIiNwSettingsT = NielsenNaesIiNw>
    void SetNielsenNaesIiNwSettings(NielsenNaesIiNwSettingsT&& value) { m_nielsenNaesIiNwSettingsHasBeenSet = true; m_nielsenNaesIiNwSettings = std::forward<NielsenNaesIiNwSettingsT>(value); }
    template<typename NielsenNaesIiNwSettingsT = NielsenNaesIiNw>
    NielsenWatermarksSettings& WithNielsenNaesIiNwSettings(NielsenNaesIiNwSettingsT&& value) { SetNielsenNaesIiNwSettings(std::forward<NielsenNaesIiNwSettingsT>(value)); return *this;}
    ///@}
  private:

    NielsenCBET m_nielsenCbetSettings;
    bool m_nielsenCbetSettingsHasBeenSet = false;

    NielsenWatermarksDistributionTypes m_nielsenDistributionType{NielsenWatermarksDistributionTypes::NOT_SET};
    bool m_nielsenDistributionTypeHasBeenSet = false;

    NielsenNaesIiNw m_nielsenNaesIiNwSettings;
    bool m_nielsenNaesIiNwSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
