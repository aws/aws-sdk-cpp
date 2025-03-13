/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SeverityRating.h>
#include <aws/securityhub/model/RegionAvailabilityStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/SecurityControlProperty.h>
#include <aws/securityhub/model/ParameterDefinition.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides metadata for a security control, including its unique
   * standard-agnostic identifier, title, description, severity, availability in
   * Amazon Web Services Regions, and a link to remediation steps. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityControlDefinition">AWS
   * API Reference</a></p>
   */
  class SecurityControlDefinition
  {
  public:
    AWS_SECURITYHUB_API SecurityControlDefinition() = default;
    AWS_SECURITYHUB_API SecurityControlDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Services service name and a number
     * (for example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    SecurityControlDefinition& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of a security control. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SecurityControlDefinition& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecurityControlDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline const Aws::String& GetRemediationUrl() const { return m_remediationUrl; }
    inline bool RemediationUrlHasBeenSet() const { return m_remediationUrlHasBeenSet; }
    template<typename RemediationUrlT = Aws::String>
    void SetRemediationUrl(RemediationUrlT&& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = std::forward<RemediationUrlT>(value); }
    template<typename RemediationUrlT = Aws::String>
    SecurityControlDefinition& WithRemediationUrl(RemediationUrlT&& value) { SetRemediationUrl(std::forward<RemediationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline SeverityRating GetSeverityRating() const { return m_severityRating; }
    inline bool SeverityRatingHasBeenSet() const { return m_severityRatingHasBeenSet; }
    inline void SetSeverityRating(SeverityRating value) { m_severityRatingHasBeenSet = true; m_severityRating = value; }
    inline SecurityControlDefinition& WithSeverityRating(SeverityRating value) { SetSeverityRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline RegionAvailabilityStatus GetCurrentRegionAvailability() const { return m_currentRegionAvailability; }
    inline bool CurrentRegionAvailabilityHasBeenSet() const { return m_currentRegionAvailabilityHasBeenSet; }
    inline void SetCurrentRegionAvailability(RegionAvailabilityStatus value) { m_currentRegionAvailabilityHasBeenSet = true; m_currentRegionAvailability = value; }
    inline SecurityControlDefinition& WithCurrentRegionAvailability(RegionAvailabilityStatus value) { SetCurrentRegionAvailability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline const Aws::Vector<SecurityControlProperty>& GetCustomizableProperties() const { return m_customizableProperties; }
    inline bool CustomizablePropertiesHasBeenSet() const { return m_customizablePropertiesHasBeenSet; }
    template<typename CustomizablePropertiesT = Aws::Vector<SecurityControlProperty>>
    void SetCustomizableProperties(CustomizablePropertiesT&& value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties = std::forward<CustomizablePropertiesT>(value); }
    template<typename CustomizablePropertiesT = Aws::Vector<SecurityControlProperty>>
    SecurityControlDefinition& WithCustomizableProperties(CustomizablePropertiesT&& value) { SetCustomizableProperties(std::forward<CustomizablePropertiesT>(value)); return *this;}
    inline SecurityControlDefinition& AddCustomizableProperties(SecurityControlProperty value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline const Aws::Map<Aws::String, ParameterDefinition>& GetParameterDefinitions() const { return m_parameterDefinitions; }
    inline bool ParameterDefinitionsHasBeenSet() const { return m_parameterDefinitionsHasBeenSet; }
    template<typename ParameterDefinitionsT = Aws::Map<Aws::String, ParameterDefinition>>
    void SetParameterDefinitions(ParameterDefinitionsT&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = std::forward<ParameterDefinitionsT>(value); }
    template<typename ParameterDefinitionsT = Aws::Map<Aws::String, ParameterDefinition>>
    SecurityControlDefinition& WithParameterDefinitions(ParameterDefinitionsT&& value) { SetParameterDefinitions(std::forward<ParameterDefinitionsT>(value)); return *this;}
    template<typename ParameterDefinitionsKeyT = Aws::String, typename ParameterDefinitionsValueT = ParameterDefinition>
    SecurityControlDefinition& AddParameterDefinitions(ParameterDefinitionsKeyT&& key, ParameterDefinitionsValueT&& value) {
      m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(std::forward<ParameterDefinitionsKeyT>(key), std::forward<ParameterDefinitionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_remediationUrl;
    bool m_remediationUrlHasBeenSet = false;

    SeverityRating m_severityRating{SeverityRating::NOT_SET};
    bool m_severityRatingHasBeenSet = false;

    RegionAvailabilityStatus m_currentRegionAvailability{RegionAvailabilityStatus::NOT_SET};
    bool m_currentRegionAvailabilityHasBeenSet = false;

    Aws::Vector<SecurityControlProperty> m_customizableProperties;
    bool m_customizablePropertiesHasBeenSet = false;

    Aws::Map<Aws::String, ParameterDefinition> m_parameterDefinitions;
    bool m_parameterDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
