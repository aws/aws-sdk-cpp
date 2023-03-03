/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AvailSettings.h>
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
   * Avail Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AvailConfiguration">AWS
   * API Reference</a></p>
   */
  class AvailConfiguration
  {
  public:
    AWS_MEDIALIVE_API AvailConfiguration();
    AWS_MEDIALIVE_API AvailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AvailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline const AvailSettings& GetAvailSettings() const{ return m_availSettings; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline bool AvailSettingsHasBeenSet() const { return m_availSettingsHasBeenSet; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline void SetAvailSettings(const AvailSettings& value) { m_availSettingsHasBeenSet = true; m_availSettings = value; }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline void SetAvailSettings(AvailSettings&& value) { m_availSettingsHasBeenSet = true; m_availSettings = std::move(value); }

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline AvailConfiguration& WithAvailSettings(const AvailSettings& value) { SetAvailSettings(value); return *this;}

    /**
     * Controls how SCTE-35 messages create cues. Splice Insert mode treats all
     * segmentation signals traditionally. With Time Signal APOS mode only Time Signal
     * Placement Opportunity and Break messages create segment breaks. With ESAM mode,
     * signals are forwarded to an ESAM server for possible update.
     */
    inline AvailConfiguration& WithAvailSettings(AvailSettings&& value) { SetAvailSettings(std::move(value)); return *this;}

  private:

    AvailSettings m_availSettings;
    bool m_availSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
