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
    AWS_SECURITYHUB_API SecurityControl();
    AWS_SECURITYHUB_API SecurityControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Services service name and a
     * number, such as APIGateway.3. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }
    inline SecurityControl& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}
    inline SecurityControl& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}
    inline SecurityControl& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const{ return m_securityControlArn; }
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }
    inline void SetSecurityControlArn(const Aws::String& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = value; }
    inline void SetSecurityControlArn(Aws::String&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::move(value); }
    inline void SetSecurityControlArn(const char* value) { m_securityControlArnHasBeenSet = true; m_securityControlArn.assign(value); }
    inline SecurityControl& WithSecurityControlArn(const Aws::String& value) { SetSecurityControlArn(value); return *this;}
    inline SecurityControl& WithSecurityControlArn(Aws::String&& value) { SetSecurityControlArn(std::move(value)); return *this;}
    inline SecurityControl& WithSecurityControlArn(const char* value) { SetSecurityControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of a security control. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline SecurityControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline SecurityControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline SecurityControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityControl& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityControl& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityControl& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline const Aws::String& GetRemediationUrl() const{ return m_remediationUrl; }
    inline bool RemediationUrlHasBeenSet() const { return m_remediationUrlHasBeenSet; }
    inline void SetRemediationUrl(const Aws::String& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = value; }
    inline void SetRemediationUrl(Aws::String&& value) { m_remediationUrlHasBeenSet = true; m_remediationUrl = std::move(value); }
    inline void SetRemediationUrl(const char* value) { m_remediationUrlHasBeenSet = true; m_remediationUrl.assign(value); }
    inline SecurityControl& WithRemediationUrl(const Aws::String& value) { SetRemediationUrl(value); return *this;}
    inline SecurityControl& WithRemediationUrl(Aws::String&& value) { SetRemediationUrl(std::move(value)); return *this;}
    inline SecurityControl& WithRemediationUrl(const char* value) { SetRemediationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline const SeverityRating& GetSeverityRating() const{ return m_severityRating; }
    inline bool SeverityRatingHasBeenSet() const { return m_severityRatingHasBeenSet; }
    inline void SetSeverityRating(const SeverityRating& value) { m_severityRatingHasBeenSet = true; m_severityRating = value; }
    inline void SetSeverityRating(SeverityRating&& value) { m_severityRatingHasBeenSet = true; m_severityRating = std::move(value); }
    inline SecurityControl& WithSeverityRating(const SeverityRating& value) { SetSeverityRating(value); return *this;}
    inline SecurityControl& WithSeverityRating(SeverityRating&& value) { SetSeverityRating(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline const ControlStatus& GetSecurityControlStatus() const{ return m_securityControlStatus; }
    inline bool SecurityControlStatusHasBeenSet() const { return m_securityControlStatusHasBeenSet; }
    inline void SetSecurityControlStatus(const ControlStatus& value) { m_securityControlStatusHasBeenSet = true; m_securityControlStatus = value; }
    inline void SetSecurityControlStatus(ControlStatus&& value) { m_securityControlStatusHasBeenSet = true; m_securityControlStatus = std::move(value); }
    inline SecurityControl& WithSecurityControlStatus(const ControlStatus& value) { SetSecurityControlStatus(value); return *this;}
    inline SecurityControl& WithSecurityControlStatus(ControlStatus&& value) { SetSecurityControlStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies whether customizable properties of a security control are
     * reflected in Security Hub findings. A status of <code>READY</code> indicates
     * that Security Hub uses the current control parameter values when running
     * security checks of the control. A status of <code>UPDATING</code> indicates that
     * all security checks might not use the current parameter values. </p>
     */
    inline const UpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const UpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(UpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline SecurityControl& WithUpdateStatus(const UpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline SecurityControl& WithUpdateStatus(UpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that identifies the name of a control parameter, its current
     * value, and whether it has been customized. </p>
     */
    inline const Aws::Map<Aws::String, ParameterConfiguration>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline SecurityControl& WithParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { SetParameters(value); return *this;}
    inline SecurityControl& WithParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { SetParameters(std::move(value)); return *this;}
    inline SecurityControl& AddParameters(const Aws::String& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline SecurityControl& AddParameters(Aws::String&& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SecurityControl& AddParameters(const Aws::String& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SecurityControl& AddParameters(Aws::String&& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SecurityControl& AddParameters(const char* key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SecurityControl& AddParameters(const char* key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
    inline const Aws::String& GetLastUpdateReason() const{ return m_lastUpdateReason; }
    inline bool LastUpdateReasonHasBeenSet() const { return m_lastUpdateReasonHasBeenSet; }
    inline void SetLastUpdateReason(const Aws::String& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = value; }
    inline void SetLastUpdateReason(Aws::String&& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = std::move(value); }
    inline void SetLastUpdateReason(const char* value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason.assign(value); }
    inline SecurityControl& WithLastUpdateReason(const Aws::String& value) { SetLastUpdateReason(value); return *this;}
    inline SecurityControl& WithLastUpdateReason(Aws::String&& value) { SetLastUpdateReason(std::move(value)); return *this;}
    inline SecurityControl& WithLastUpdateReason(const char* value) { SetLastUpdateReason(value); return *this;}
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

    SeverityRating m_severityRating;
    bool m_severityRatingHasBeenSet = false;

    ControlStatus m_securityControlStatus;
    bool m_securityControlStatusHasBeenSet = false;

    UpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConfiguration> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_lastUpdateReason;
    bool m_lastUpdateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
