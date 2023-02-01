/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35DescriptorSettings.h>
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
   * Holds one set of SCTE-35 Descriptor Settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35Descriptor">AWS
   * API Reference</a></p>
   */
  class Scte35Descriptor
  {
  public:
    AWS_MEDIALIVE_API Scte35Descriptor();
    AWS_MEDIALIVE_API Scte35Descriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35Descriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * SCTE-35 Descriptor Settings.
     */
    inline const Scte35DescriptorSettings& GetScte35DescriptorSettings() const{ return m_scte35DescriptorSettings; }

    /**
     * SCTE-35 Descriptor Settings.
     */
    inline bool Scte35DescriptorSettingsHasBeenSet() const { return m_scte35DescriptorSettingsHasBeenSet; }

    /**
     * SCTE-35 Descriptor Settings.
     */
    inline void SetScte35DescriptorSettings(const Scte35DescriptorSettings& value) { m_scte35DescriptorSettingsHasBeenSet = true; m_scte35DescriptorSettings = value; }

    /**
     * SCTE-35 Descriptor Settings.
     */
    inline void SetScte35DescriptorSettings(Scte35DescriptorSettings&& value) { m_scte35DescriptorSettingsHasBeenSet = true; m_scte35DescriptorSettings = std::move(value); }

    /**
     * SCTE-35 Descriptor Settings.
     */
    inline Scte35Descriptor& WithScte35DescriptorSettings(const Scte35DescriptorSettings& value) { SetScte35DescriptorSettings(value); return *this;}

    /**
     * SCTE-35 Descriptor Settings.
     */
    inline Scte35Descriptor& WithScte35DescriptorSettings(Scte35DescriptorSettings&& value) { SetScte35DescriptorSettings(std::move(value)); return *this;}

  private:

    Scte35DescriptorSettings m_scte35DescriptorSettings;
    bool m_scte35DescriptorSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
