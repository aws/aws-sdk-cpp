/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AccessibilityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CaptionDestinationSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/DvbDashAccessibility.h>
#include <aws/medialive/model/DashRoleCaption.h>
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
   * Caption Description<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionDescription">AWS
   * API Reference</a></p>
   */
  class CaptionDescription
  {
  public:
    AWS_MEDIALIVE_API CaptionDescription() = default;
    AWS_MEDIALIVE_API CaptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Indicates whether the caption track implements accessibility features such as
     * written descriptions of spoken dialog, music, and sounds. This signaling is
     * added to HLS output group and MediaPackage output group.
     */
    inline AccessibilityType GetAccessibility() const { return m_accessibility; }
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }
    inline void SetAccessibility(AccessibilityType value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }
    inline CaptionDescription& WithAccessibility(AccessibilityType value) { SetAccessibility(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline const Aws::String& GetCaptionSelectorName() const { return m_captionSelectorName; }
    inline bool CaptionSelectorNameHasBeenSet() const { return m_captionSelectorNameHasBeenSet; }
    template<typename CaptionSelectorNameT = Aws::String>
    void SetCaptionSelectorName(CaptionSelectorNameT&& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = std::forward<CaptionSelectorNameT>(value); }
    template<typename CaptionSelectorNameT = Aws::String>
    CaptionDescription& WithCaptionSelectorName(CaptionSelectorNameT&& value) { SetCaptionSelectorName(std::forward<CaptionSelectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const { return m_destinationSettings; }
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }
    template<typename DestinationSettingsT = CaptionDestinationSettings>
    void SetDestinationSettings(DestinationSettingsT&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::forward<DestinationSettingsT>(value); }
    template<typename DestinationSettingsT = CaptionDestinationSettings>
    CaptionDescription& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    CaptionDescription& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline const Aws::String& GetLanguageDescription() const { return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    template<typename LanguageDescriptionT = Aws::String>
    void SetLanguageDescription(LanguageDescriptionT&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::forward<LanguageDescriptionT>(value); }
    template<typename LanguageDescriptionT = Aws::String>
    CaptionDescription& WithLanguageDescription(LanguageDescriptionT&& value) { SetLanguageDescription(std::forward<LanguageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CaptionDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Identifies the DASH roles to assign to this captions output. Applies only when
     * the captions output is configured for DVB DASH accessibility signaling.
     */
    inline const Aws::Vector<DashRoleCaption>& GetCaptionDashRoles() const { return m_captionDashRoles; }
    inline bool CaptionDashRolesHasBeenSet() const { return m_captionDashRolesHasBeenSet; }
    template<typename CaptionDashRolesT = Aws::Vector<DashRoleCaption>>
    void SetCaptionDashRoles(CaptionDashRolesT&& value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles = std::forward<CaptionDashRolesT>(value); }
    template<typename CaptionDashRolesT = Aws::Vector<DashRoleCaption>>
    CaptionDescription& WithCaptionDashRoles(CaptionDashRolesT&& value) { SetCaptionDashRoles(std::forward<CaptionDashRolesT>(value)); return *this;}
    inline CaptionDescription& AddCaptionDashRoles(DashRoleCaption value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Identifies DVB DASH accessibility signaling in this captions output. Used in
     * Microsoft Smooth Streaming outputs to signal accessibility information to
     * packagers.
     */
    inline DvbDashAccessibility GetDvbDashAccessibility() const { return m_dvbDashAccessibility; }
    inline bool DvbDashAccessibilityHasBeenSet() const { return m_dvbDashAccessibilityHasBeenSet; }
    inline void SetDvbDashAccessibility(DvbDashAccessibility value) { m_dvbDashAccessibilityHasBeenSet = true; m_dvbDashAccessibility = value; }
    inline CaptionDescription& WithDvbDashAccessibility(DvbDashAccessibility value) { SetDvbDashAccessibility(value); return *this;}
    ///@}
  private:

    AccessibilityType m_accessibility{AccessibilityType::NOT_SET};
    bool m_accessibilityHasBeenSet = false;

    Aws::String m_captionSelectorName;
    bool m_captionSelectorNameHasBeenSet = false;

    CaptionDestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DashRoleCaption> m_captionDashRoles;
    bool m_captionDashRolesHasBeenSet = false;

    DvbDashAccessibility m_dvbDashAccessibility{DvbDashAccessibility::NOT_SET};
    bool m_dvbDashAccessibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
