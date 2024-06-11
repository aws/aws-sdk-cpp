/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ControlStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/SeverityRating.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Details for an individual security standard control.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControl">AWS
   * API Reference</a></p>
   */
  class StandardsControl
  {
  public:
    AWS_SECURITYHUB_API StandardsControl();
    AWS_SECURITYHUB_API StandardsControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the security standard control.</p>
     */
    inline const Aws::String& GetStandardsControlArn() const{ return m_standardsControlArn; }
    inline bool StandardsControlArnHasBeenSet() const { return m_standardsControlArnHasBeenSet; }
    inline void SetStandardsControlArn(const Aws::String& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = value; }
    inline void SetStandardsControlArn(Aws::String&& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = std::move(value); }
    inline void SetStandardsControlArn(const char* value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn.assign(value); }
    inline StandardsControl& WithStandardsControlArn(const Aws::String& value) { SetStandardsControlArn(value); return *this;}
    inline StandardsControl& WithStandardsControlArn(Aws::String&& value) { SetStandardsControlArn(std::move(value)); return *this;}
    inline StandardsControl& WithStandardsControlArn(const char* value) { SetStandardsControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the security standard control. Indicates whether the
     * control is enabled or disabled. Security Hub does not check against disabled
     * controls.</p>
     */
    inline const ControlStatus& GetControlStatus() const{ return m_controlStatus; }
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }
    inline void SetControlStatus(const ControlStatus& value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }
    inline void SetControlStatus(ControlStatus&& value) { m_controlStatusHasBeenSet = true; m_controlStatus = std::move(value); }
    inline StandardsControl& WithControlStatus(const ControlStatus& value) { SetControlStatus(value); return *this;}
    inline StandardsControl& WithControlStatus(ControlStatus&& value) { SetControlStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason provided for the most recent change in status for the control.</p>
     */
    inline const Aws::String& GetDisabledReason() const{ return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    inline void SetDisabledReason(const Aws::String& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }
    inline void SetDisabledReason(Aws::String&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }
    inline void SetDisabledReason(const char* value) { m_disabledReasonHasBeenSet = true; m_disabledReason.assign(value); }
    inline StandardsControl& WithDisabledReason(const Aws::String& value) { SetDisabledReason(value); return *this;}
    inline StandardsControl& WithDisabledReason(Aws::String&& value) { SetDisabledReason(std::move(value)); return *this;}
    inline StandardsControl& WithDisabledReason(const char* value) { SetDisabledReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the status of the security standard control was most
     * recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetControlStatusUpdatedAt() const{ return m_controlStatusUpdatedAt; }
    inline bool ControlStatusUpdatedAtHasBeenSet() const { return m_controlStatusUpdatedAtHasBeenSet; }
    inline void SetControlStatusUpdatedAt(const Aws::Utils::DateTime& value) { m_controlStatusUpdatedAtHasBeenSet = true; m_controlStatusUpdatedAt = value; }
    inline void SetControlStatusUpdatedAt(Aws::Utils::DateTime&& value) { m_controlStatusUpdatedAtHasBeenSet = true; m_controlStatusUpdatedAt = std::move(value); }
    inline StandardsControl& WithControlStatusUpdatedAt(const Aws::Utils::DateTime& value) { SetControlStatusUpdatedAt(value); return *this;}
    inline StandardsControl& WithControlStatusUpdatedAt(Aws::Utils::DateTime&& value) { SetControlStatusUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the security standard control.</p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }
    inline StandardsControl& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}
    inline StandardsControl& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}
    inline StandardsControl& WithControlId(const char* value) { SetControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the security standard control.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline StandardsControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline StandardsControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline StandardsControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longer description of the security standard control. Provides information
     * about what the control is checking for.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StandardsControl& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StandardsControl& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StandardsControl& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to remediation information for the control in the Security Hub user
     * documentation.</p>
     */
    inline const Aws::String& GetRemediationUrl() const{ return m_remediationUrl; }
    inline bool RemediationUrlHasBeenSet() const { return m_remediationUrlHasBeenSet; }
    inline void SetRemediationUrl(const Aws::String& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = value; }
    inline void SetRemediationUrl(Aws::String&& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = std::move(value); }
    inline void SetRemediationUrl(const char* value) { m_remediationUrlHasBeenSet = true; m_remediationUrl.assign(value); }
    inline StandardsControl& WithRemediationUrl(const Aws::String& value) { SetRemediationUrl(value); return *this;}
    inline StandardsControl& WithRemediationUrl(Aws::String&& value) { SetRemediationUrl(std::move(value)); return *this;}
    inline StandardsControl& WithRemediationUrl(const char* value) { SetRemediationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of findings generated from this security standard control.</p>
     * <p>The finding severity is based on an assessment of how easy it would be to
     * compromise Amazon Web Services resources if the issue is detected.</p>
     */
    inline const SeverityRating& GetSeverityRating() const{ return m_severityRating; }
    inline bool SeverityRatingHasBeenSet() const { return m_severityRatingHasBeenSet; }
    inline void SetSeverityRating(const SeverityRating& value) { m_severityRatingHasBeenSet = true; m_severityRating = value; }
    inline void SetSeverityRating(SeverityRating&& value) { m_severityRatingHasBeenSet = true; m_severityRating = std::move(value); }
    inline StandardsControl& WithSeverityRating(const SeverityRating& value) { SetSeverityRating(value); return *this;}
    inline StandardsControl& WithSeverityRating(SeverityRating&& value) { SetSeverityRating(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of requirements that are related to this control.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const{ return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    inline void SetRelatedRequirements(const Aws::Vector<Aws::String>& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = value; }
    inline void SetRelatedRequirements(Aws::Vector<Aws::String>&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::move(value); }
    inline StandardsControl& WithRelatedRequirements(const Aws::Vector<Aws::String>& value) { SetRelatedRequirements(value); return *this;}
    inline StandardsControl& WithRelatedRequirements(Aws::Vector<Aws::String>&& value) { SetRelatedRequirements(std::move(value)); return *this;}
    inline StandardsControl& AddRelatedRequirements(const Aws::String& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    inline StandardsControl& AddRelatedRequirements(Aws::String&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(std::move(value)); return *this; }
    inline StandardsControl& AddRelatedRequirements(const char* value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_standardsControlArn;
    bool m_standardsControlArnHasBeenSet = false;

    ControlStatus m_controlStatus;
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;

    Aws::Utils::DateTime m_controlStatusUpdatedAt;
    bool m_controlStatusUpdatedAtHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_remediationUrl;
    bool m_remediationUrlHasBeenSet = false;

    SeverityRating m_severityRating;
    bool m_severityRatingHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
