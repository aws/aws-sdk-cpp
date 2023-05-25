/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TemporalFilterSettings.h>
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
   * H265 Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H265FilterSettings">AWS
   * API Reference</a></p>
   */
  class H265FilterSettings
  {
  public:
    AWS_MEDIALIVE_API H265FilterSettings();
    AWS_MEDIALIVE_API H265FilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H265FilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TemporalFilterSettings& GetTemporalFilterSettings() const{ return m_temporalFilterSettings; }

    
    inline bool TemporalFilterSettingsHasBeenSet() const { return m_temporalFilterSettingsHasBeenSet; }

    
    inline void SetTemporalFilterSettings(const TemporalFilterSettings& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = value; }

    
    inline void SetTemporalFilterSettings(TemporalFilterSettings&& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = std::move(value); }

    
    inline H265FilterSettings& WithTemporalFilterSettings(const TemporalFilterSettings& value) { SetTemporalFilterSettings(value); return *this;}

    
    inline H265FilterSettings& WithTemporalFilterSettings(TemporalFilterSettings&& value) { SetTemporalFilterSettings(std::move(value)); return *this;}

  private:

    TemporalFilterSettings m_temporalFilterSettings;
    bool m_temporalFilterSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
