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
    AWS_SECURITYHUB_API SecurityControlDefinition();
    AWS_SECURITYHUB_API SecurityControlDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline SecurityControlDefinition& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline SecurityControlDefinition& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number (for
     * example, APIGateway.3). This parameter differs from
     * <code>SecurityControlArn</code>, which is a unique Amazon Resource Name (ARN)
     * assigned to a control. The ARN references the security control ID (for example,
     * arn:aws:securityhub:eu-central-1:123456789012:security-control/APIGateway.3).
     * </p>
     */
    inline SecurityControlDefinition& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> The title of a security control. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p> The title of a security control. </p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p> The title of a security control. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p> The title of a security control. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p> The title of a security control. </p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p> The title of a security control. </p>
     */
    inline SecurityControlDefinition& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p> The title of a security control. </p>
     */
    inline SecurityControlDefinition& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p> The title of a security control. </p>
     */
    inline SecurityControlDefinition& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline SecurityControlDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline SecurityControlDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline SecurityControlDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline const Aws::String& GetRemediationUrl() const{ return m_remediationUrl; }

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline bool RemediationUrlHasBeenSet() const { return m_remediationUrlHasBeenSet; }

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline void SetRemediationUrl(const Aws::String& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = value; }

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline void SetRemediationUrl(Aws::String&& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = std::move(value); }

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline void SetRemediationUrl(const char* value) { m_remediationUrlHasBeenSet = true; m_remediationUrl.assign(value); }

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline SecurityControlDefinition& WithRemediationUrl(const Aws::String& value) { SetRemediationUrl(value); return *this;}

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline SecurityControlDefinition& WithRemediationUrl(Aws::String&& value) { SetRemediationUrl(std::move(value)); return *this;}

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline SecurityControlDefinition& WithRemediationUrl(const char* value) { SetRemediationUrl(value); return *this;}


    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline const SeverityRating& GetSeverityRating() const{ return m_severityRating; }

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline bool SeverityRatingHasBeenSet() const { return m_severityRatingHasBeenSet; }

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline void SetSeverityRating(const SeverityRating& value) { m_severityRatingHasBeenSet = true; m_severityRating = value; }

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline void SetSeverityRating(SeverityRating&& value) { m_severityRatingHasBeenSet = true; m_severityRating = std::move(value); }

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline SecurityControlDefinition& WithSeverityRating(const SeverityRating& value) { SetSeverityRating(value); return *this;}

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline SecurityControlDefinition& WithSeverityRating(SeverityRating&& value) { SetSeverityRating(std::move(value)); return *this;}


    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline const RegionAvailabilityStatus& GetCurrentRegionAvailability() const{ return m_currentRegionAvailability; }

    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline bool CurrentRegionAvailabilityHasBeenSet() const { return m_currentRegionAvailabilityHasBeenSet; }

    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline void SetCurrentRegionAvailability(const RegionAvailabilityStatus& value) { m_currentRegionAvailabilityHasBeenSet = true; m_currentRegionAvailability = value; }

    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline void SetCurrentRegionAvailability(RegionAvailabilityStatus&& value) { m_currentRegionAvailabilityHasBeenSet = true; m_currentRegionAvailability = std::move(value); }

    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline SecurityControlDefinition& WithCurrentRegionAvailability(const RegionAvailabilityStatus& value) { SetCurrentRegionAvailability(value); return *this;}

    /**
     * <p> Specifies whether a security control is available in the current Amazon Web
     * Services Region. </p>
     */
    inline SecurityControlDefinition& WithCurrentRegionAvailability(RegionAvailabilityStatus&& value) { SetCurrentRegionAvailability(std::move(value)); return *this;}


    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline const Aws::Vector<SecurityControlProperty>& GetCustomizableProperties() const{ return m_customizableProperties; }

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline bool CustomizablePropertiesHasBeenSet() const { return m_customizablePropertiesHasBeenSet; }

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline void SetCustomizableProperties(const Aws::Vector<SecurityControlProperty>& value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties = value; }

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline void SetCustomizableProperties(Aws::Vector<SecurityControlProperty>&& value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties = std::move(value); }

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline SecurityControlDefinition& WithCustomizableProperties(const Aws::Vector<SecurityControlProperty>& value) { SetCustomizableProperties(value); return *this;}

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline SecurityControlDefinition& WithCustomizableProperties(Aws::Vector<SecurityControlProperty>&& value) { SetCustomizableProperties(std::move(value)); return *this;}

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline SecurityControlDefinition& AddCustomizableProperties(const SecurityControlProperty& value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties.push_back(value); return *this; }

    /**
     * <p> Security control properties that you can customize. Currently, only
     * parameter customization is supported for select controls. An empty array is
     * returned for controls that don’t support custom properties. </p>
     */
    inline SecurityControlDefinition& AddCustomizableProperties(SecurityControlProperty&& value) { m_customizablePropertiesHasBeenSet = true; m_customizableProperties.push_back(std::move(value)); return *this; }


    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline const Aws::Map<Aws::String, ParameterDefinition>& GetParameterDefinitions() const{ return m_parameterDefinitions; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline bool ParameterDefinitionsHasBeenSet() const { return m_parameterDefinitionsHasBeenSet; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline void SetParameterDefinitions(const Aws::Map<Aws::String, ParameterDefinition>& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = value; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline void SetParameterDefinitions(Aws::Map<Aws::String, ParameterDefinition>&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = std::move(value); }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& WithParameterDefinitions(const Aws::Map<Aws::String, ParameterDefinition>& value) { SetParameterDefinitions(value); return *this;}

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& WithParameterDefinitions(Aws::Map<Aws::String, ParameterDefinition>&& value) { SetParameterDefinitions(std::move(value)); return *this;}

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(const Aws::String& key, const ParameterDefinition& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(key, value); return *this; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(Aws::String&& key, const ParameterDefinition& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(std::move(key), value); return *this; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(const Aws::String& key, ParameterDefinition&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(Aws::String&& key, ParameterDefinition&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(const char* key, ParameterDefinition&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that provides a security control parameter name, description, and
     * the options for customizing it. This object is excluded for a control that
     * doesn't support custom parameters. </p>
     */
    inline SecurityControlDefinition& AddParameterDefinitions(const char* key, const ParameterDefinition& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace(key, value); return *this; }

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_remediationUrl;
    bool m_remediationUrlHasBeenSet = false;

    SeverityRating m_severityRating;
    bool m_severityRatingHasBeenSet = false;

    RegionAvailabilityStatus m_currentRegionAvailability;
    bool m_currentRegionAvailabilityHasBeenSet = false;

    Aws::Vector<SecurityControlProperty> m_customizableProperties;
    bool m_customizablePropertiesHasBeenSet = false;

    Aws::Map<Aws::String, ParameterDefinition> m_parameterDefinitions;
    bool m_parameterDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
