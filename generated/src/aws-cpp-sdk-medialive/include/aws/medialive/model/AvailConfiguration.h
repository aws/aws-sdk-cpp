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
     * Ad avail settings.
     */
    inline const AvailSettings& GetAvailSettings() const{ return m_availSettings; }

    /**
     * Ad avail settings.
     */
    inline bool AvailSettingsHasBeenSet() const { return m_availSettingsHasBeenSet; }

    /**
     * Ad avail settings.
     */
    inline void SetAvailSettings(const AvailSettings& value) { m_availSettingsHasBeenSet = true; m_availSettings = value; }

    /**
     * Ad avail settings.
     */
    inline void SetAvailSettings(AvailSettings&& value) { m_availSettingsHasBeenSet = true; m_availSettings = std::move(value); }

    /**
     * Ad avail settings.
     */
    inline AvailConfiguration& WithAvailSettings(const AvailSettings& value) { SetAvailSettings(value); return *this;}

    /**
     * Ad avail settings.
     */
    inline AvailConfiguration& WithAvailSettings(AvailSettings&& value) { SetAvailSettings(std::move(value)); return *this;}

  private:

    AvailSettings m_availSettings;
    bool m_availSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
