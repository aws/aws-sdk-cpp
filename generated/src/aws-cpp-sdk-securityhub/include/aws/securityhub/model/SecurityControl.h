/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SeverityRating.h>
#include <aws/securityhub/model/ControlStatus.h>
#include <aws/securityhub/model/UpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ParameterConfiguration.h>
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
   * <p> A security control in Security Hub describes a security best practice
   * related to a specific resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityControl">AWS
   * API Reference</a></p>
   */
  class SecurityControl
  {
  public:
    AWS_SECURITYHUB_API SecurityControl() = default;
    AWS_SECURITYHUB_API SecurityControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Services service name and a
     * number, such as APIGateway.3. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    SecurityControl& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const { return m_securityControlArn; }
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }
    template<typename SecurityControlArnT = Aws::String>
    void SetSecurityControlArn(SecurityControlArnT&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::forward<SecurityControlArnT>(value); }
    template<typename SecurityControlArnT = Aws::String>
    SecurityControl& WithSecurityControlArn(SecurityControlArnT&& value) { SetSecurityControlArn(std::forward<SecurityControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of a security control. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SecurityControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
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
    SecurityControl& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    SecurityControl& WithRemediationUrl(RemediationUrlT&& value) { SetRemediationUrl(std::forward<RemediationUrlT>(value)); return *this;}
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
    inline SecurityControl& WithSeverityRating(SeverityRating value) { SetSeverityRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline ControlStatus GetSecurityControlStatus() const { return m_securityControlStatus; }
    inline bool SecurityControlStatusHasBeenSet() const { return m_securityControlStatusHasBeenSet; }
    inline void SetSecurityControlStatus(ControlStatus value) { m_securityControlStatusHasBeenSet = true; m_securityControlStatus = value; }
    inline SecurityControl& WithSecurityControlStatus(ControlStatus value) { SetSecurityControlStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies whether customizable properties of a security control are
     * reflected in Security Hub findings. A status of <code>READY</code> indicates
     * that Security Hub uses the current control parameter values when running
     * security checks of the control. A status of <code>UPDATING</code> indicates that
     * all security checks might not use the current parameter values. </p>
     */
    inline UpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(UpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline SecurityControl& WithUpdateStatus(UpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that identifies the name of a control parameter, its current
     * value, and whether it has been customized. </p>
     */
    inline const Aws::Map<Aws::String, ParameterConfiguration>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, ParameterConfiguration>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, ParameterConfiguration>>
    SecurityControl& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = ParameterConfiguration>
    SecurityControl& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The most recent reason for updating the customizable properties of a
     * security control. This differs from the <code>UpdateReason</code> field of the
     * <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">
     * <code>BatchUpdateStandardsControlAssociations</code> </a> API, which tracks the
     * reason for updating the enablement status of a control. This field accepts
     * alphanumeric characters in addition to white spaces, dashes, and underscores.
     * </p>
     */
    inline const Aws::String& GetLastUpdateReason() const { return m_lastUpdateReason; }
    inline bool LastUpdateReasonHasBeenSet() const { return m_lastUpdateReasonHasBeenSet; }
    template<typename LastUpdateReasonT = Aws::String>
    void SetLastUpdateReason(LastUpdateReasonT&& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = std::forward<LastUpdateReasonT>(value); }
    template<typename LastUpdateReasonT = Aws::String>
    SecurityControl& WithLastUpdateReason(LastUpdateReasonT&& value) { SetLastUpdateReason(std::forward<LastUpdateReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_securityControlArn;
    bool m_securityControlArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_remediationUrl;
    bool m_remediationUrlHasBeenSet = false;

    SeverityRating m_severityRating{SeverityRating::NOT_SET};
    bool m_severityRatingHasBeenSet = false;

    ControlStatus m_securityControlStatus{ControlStatus::NOT_SET};
    bool m_securityControlStatusHasBeenSet = false;

    UpdateStatus m_updateStatus{UpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConfiguration> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_lastUpdateReason;
    bool m_lastUpdateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
