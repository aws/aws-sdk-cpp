/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveContainerSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Archive Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveOutputSettings">AWS
   * API Reference</a></p>
   */
  class ArchiveOutputSettings
  {
  public:
    AWS_MEDIALIVE_API ArchiveOutputSettings();
    AWS_MEDIALIVE_API ArchiveOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ArchiveOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Settings specific to the container type of the file.
     */
    inline const ArchiveContainerSettings& GetContainerSettings() const{ return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    inline void SetContainerSettings(const ArchiveContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }
    inline void SetContainerSettings(ArchiveContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }
    inline ArchiveOutputSettings& WithContainerSettings(const ArchiveContainerSettings& value) { SetContainerSettings(value); return *this;}
    inline ArchiveOutputSettings& WithContainerSettings(ArchiveContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Output file extension. If excluded, this will be auto-selected from the
     * container type.
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }
    inline ArchiveOutputSettings& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}
    inline ArchiveOutputSettings& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}
    inline ArchiveOutputSettings& WithExtension(const char* value) { SetExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }
    inline ArchiveOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}
    inline ArchiveOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}
    inline ArchiveOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}
    ///@}
  private:

    ArchiveContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    Aws::String m_extension;
    bool m_extensionHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
