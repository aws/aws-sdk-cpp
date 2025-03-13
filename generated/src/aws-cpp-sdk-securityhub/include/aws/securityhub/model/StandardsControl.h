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
    AWS_SECURITYHUB_API StandardsControl() = default;
    AWS_SECURITYHUB_API StandardsControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the security standard control.</p>
     */
    inline const Aws::String& GetStandardsControlArn() const { return m_standardsControlArn; }
    inline bool StandardsControlArnHasBeenSet() const { return m_standardsControlArnHasBeenSet; }
    template<typename StandardsControlArnT = Aws::String>
    void SetStandardsControlArn(StandardsControlArnT&& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = std::forward<StandardsControlArnT>(value); }
    template<typename StandardsControlArnT = Aws::String>
    StandardsControl& WithStandardsControlArn(StandardsControlArnT&& value) { SetStandardsControlArn(std::forward<StandardsControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the security standard control. Indicates whether the
     * control is enabled or disabled. Security Hub does not check against disabled
     * controls.</p>
     */
    inline ControlStatus GetControlStatus() const { return m_controlStatus; }
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }
    inline void SetControlStatus(ControlStatus value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }
    inline StandardsControl& WithControlStatus(ControlStatus value) { SetControlStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason provided for the most recent change in status for the control.</p>
     */
    inline const Aws::String& GetDisabledReason() const { return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    template<typename DisabledReasonT = Aws::String>
    void SetDisabledReason(DisabledReasonT&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::forward<DisabledReasonT>(value); }
    template<typename DisabledReasonT = Aws::String>
    StandardsControl& WithDisabledReason(DisabledReasonT&& value) { SetDisabledReason(std::forward<DisabledReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the status of the security standard control was most
     * recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetControlStatusUpdatedAt() const { return m_controlStatusUpdatedAt; }
    inline bool ControlStatusUpdatedAtHasBeenSet() const { return m_controlStatusUpdatedAtHasBeenSet; }
    template<typename ControlStatusUpdatedAtT = Aws::Utils::DateTime>
    void SetControlStatusUpdatedAt(ControlStatusUpdatedAtT&& value) { m_controlStatusUpdatedAtHasBeenSet = true; m_controlStatusUpdatedAt = std::forward<ControlStatusUpdatedAtT>(value); }
    template<typename ControlStatusUpdatedAtT = Aws::Utils::DateTime>
    StandardsControl& WithControlStatusUpdatedAt(ControlStatusUpdatedAtT&& value) { SetControlStatusUpdatedAt(std::forward<ControlStatusUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the security standard control.</p>
     */
    inline const Aws::String& GetControlId() const { return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    template<typename ControlIdT = Aws::String>
    void SetControlId(ControlIdT&& value) { m_controlIdHasBeenSet = true; m_controlId = std::forward<ControlIdT>(value); }
    template<typename ControlIdT = Aws::String>
    StandardsControl& WithControlId(ControlIdT&& value) { SetControlId(std::forward<ControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the security standard control.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    StandardsControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longer description of the security standard control. Provides information
     * about what the control is checking for.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StandardsControl& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to remediation information for the control in the Security Hub user
     * documentation.</p>
     */
    inline const Aws::String& GetRemediationUrl() const { return m_remediationUrl; }
    inline bool RemediationUrlHasBeenSet() const { return m_remediationUrlHasBeenSet; }
    template<typename RemediationUrlT = Aws::String>
    void SetRemediationUrl(RemediationUrlT&& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = std::forward<RemediationUrlT>(value); }
    template<typename RemediationUrlT = Aws::String>
    StandardsControl& WithRemediationUrl(RemediationUrlT&& value) { SetRemediationUrl(std::forward<RemediationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of findings generated from this security standard control.</p>
     * <p>The finding severity is based on an assessment of how easy it would be to
     * compromise Amazon Web Services resources if the issue is detected.</p>
     */
    inline SeverityRating GetSeverityRating() const { return m_severityRating; }
    inline bool SeverityRatingHasBeenSet() const { return m_severityRatingHasBeenSet; }
    inline void SetSeverityRating(SeverityRating value) { m_severityRatingHasBeenSet = true; m_severityRating = value; }
    inline StandardsControl& WithSeverityRating(SeverityRating value) { SetSeverityRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of requirements that are related to this control.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const { return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    void SetRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::forward<RelatedRequirementsT>(value); }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    StandardsControl& WithRelatedRequirements(RelatedRequirementsT&& value) { SetRelatedRequirements(std::forward<RelatedRequirementsT>(value)); return *this;}
    template<typename RelatedRequirementsT = Aws::String>
    StandardsControl& AddRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.emplace_back(std::forward<RelatedRequirementsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_standardsControlArn;
    bool m_standardsControlArnHasBeenSet = false;

    ControlStatus m_controlStatus{ControlStatus::NOT_SET};
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;

    Aws::Utils::DateTime m_controlStatusUpdatedAt{};
    bool m_controlStatusUpdatedAtHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_remediationUrl;
    bool m_remediationUrlHasBeenSet = false;

    SeverityRating m_severityRating{SeverityRating::NOT_SET};
    bool m_severityRatingHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
