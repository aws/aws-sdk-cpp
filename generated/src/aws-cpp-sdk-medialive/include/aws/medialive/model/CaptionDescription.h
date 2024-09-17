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
    AWS_MEDIALIVE_API CaptionDescription();
    AWS_MEDIALIVE_API CaptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Indicates whether the caption track implements accessibility features such as
     * written descriptions of spoken dialog, music, and sounds. This signaling is
     * added to HLS output group and MediaPackage output group.
     */
    inline const AccessibilityType& GetAccessibility() const{ return m_accessibility; }
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }
    inline void SetAccessibility(const AccessibilityType& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }
    inline void SetAccessibility(AccessibilityType&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }
    inline CaptionDescription& WithAccessibility(const AccessibilityType& value) { SetAccessibility(value); return *this;}
    inline CaptionDescription& WithAccessibility(AccessibilityType&& value) { SetAccessibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline const Aws::String& GetCaptionSelectorName() const{ return m_captionSelectorName; }
    inline bool CaptionSelectorNameHasBeenSet() const { return m_captionSelectorNameHasBeenSet; }
    inline void SetCaptionSelectorName(const Aws::String& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = value; }
    inline void SetCaptionSelectorName(Aws::String&& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = std::move(value); }
    inline void SetCaptionSelectorName(const char* value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName.assign(value); }
    inline CaptionDescription& WithCaptionSelectorName(const Aws::String& value) { SetCaptionSelectorName(value); return *this;}
    inline CaptionDescription& WithCaptionSelectorName(Aws::String&& value) { SetCaptionSelectorName(std::move(value)); return *this;}
    inline CaptionDescription& WithCaptionSelectorName(const char* value) { SetCaptionSelectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }
    inline void SetDestinationSettings(const CaptionDestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }
    inline void SetDestinationSettings(CaptionDestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }
    inline CaptionDescription& WithDestinationSettings(const CaptionDestinationSettings& value) { SetDestinationSettings(value); return *this;}
    inline CaptionDescription& WithDestinationSettings(CaptionDestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline CaptionDescription& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline CaptionDescription& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline CaptionDescription& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }
    inline CaptionDescription& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}
    inline CaptionDescription& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}
    inline CaptionDescription& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CaptionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CaptionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CaptionDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Identifies the DASH roles to assign to this captions output. Applies only when
     * the captions output is configured for DVB DASH accessibility signaling.
     */
    inline const Aws::Vector<DashRoleCaption>& GetCaptionDashRoles() const{ return m_captionDashRoles; }
    inline bool CaptionDashRolesHasBeenSet() const { return m_captionDashRolesHasBeenSet; }
    inline void SetCaptionDashRoles(const Aws::Vector<DashRoleCaption>& value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles = value; }
    inline void SetCaptionDashRoles(Aws::Vector<DashRoleCaption>&& value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles = std::move(value); }
    inline CaptionDescription& WithCaptionDashRoles(const Aws::Vector<DashRoleCaption>& value) { SetCaptionDashRoles(value); return *this;}
    inline CaptionDescription& WithCaptionDashRoles(Aws::Vector<DashRoleCaption>&& value) { SetCaptionDashRoles(std::move(value)); return *this;}
    inline CaptionDescription& AddCaptionDashRoles(const DashRoleCaption& value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles.push_back(value); return *this; }
    inline CaptionDescription& AddCaptionDashRoles(DashRoleCaption&& value) { m_captionDashRolesHasBeenSet = true; m_captionDashRoles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Identifies DVB DASH accessibility signaling in this captions output. Used in
     * Microsoft Smooth Streaming outputs to signal accessibility information to
     * packagers.
     */
    inline const DvbDashAccessibility& GetDvbDashAccessibility() const{ return m_dvbDashAccessibility; }
    inline bool DvbDashAccessibilityHasBeenSet() const { return m_dvbDashAccessibilityHasBeenSet; }
    inline void SetDvbDashAccessibility(const DvbDashAccessibility& value) { m_dvbDashAccessibilityHasBeenSet = true; m_dvbDashAccessibility = value; }
    inline void SetDvbDashAccessibility(DvbDashAccessibility&& value) { m_dvbDashAccessibilityHasBeenSet = true; m_dvbDashAccessibility = std::move(value); }
    inline CaptionDescription& WithDvbDashAccessibility(const DvbDashAccessibility& value) { SetDvbDashAccessibility(value); return *this;}
    inline CaptionDescription& WithDvbDashAccessibility(DvbDashAccessibility&& value) { SetDvbDashAccessibility(std::move(value)); return *this;}
    ///@}
  private:

    AccessibilityType m_accessibility;
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

    DvbDashAccessibility m_dvbDashAccessibility;
    bool m_dvbDashAccessibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
