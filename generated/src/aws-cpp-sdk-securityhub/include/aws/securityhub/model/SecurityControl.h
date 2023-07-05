/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SeverityRating.h>
#include <aws/securityhub/model/ControlStatus.h>
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


    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline SecurityControl& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline SecurityControl& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline SecurityControl& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const{ return m_securityControlArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(const Aws::String& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(Aws::String&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(const char* value) { m_securityControlArnHasBeenSet = true; m_securityControlArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline SecurityControl& WithSecurityControlArn(const Aws::String& value) { SetSecurityControlArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline SecurityControl& WithSecurityControlArn(Aws::String&& value) { SetSecurityControlArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a security control across standards, such
     * as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline SecurityControl& WithSecurityControlArn(const char* value) { SetSecurityControlArn(value); return *this;}


    /**
     * <p>The title of a security control. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of a security control. </p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of a security control. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of a security control. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of a security control. </p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of a security control. </p>
     */
    inline SecurityControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of a security control. </p>
     */
    inline SecurityControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of a security control. </p>
     */
    inline SecurityControl& WithTitle(const char* value) { SetTitle(value); return *this;}


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
    inline SecurityControl& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline SecurityControl& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of a security control across standards. This typically
     * summarizes how Security Hub evaluates the control and the conditions under which
     * it produces a failed finding. This parameter doesn't reference a specific
     * standard. </p>
     */
    inline SecurityControl& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline SecurityControl& WithRemediationUrl(const Aws::String& value) { SetRemediationUrl(value); return *this;}

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline SecurityControl& WithRemediationUrl(Aws::String&& value) { SetRemediationUrl(std::move(value)); return *this;}

    /**
     * <p> A link to Security Hub documentation that explains how to remediate a failed
     * finding for a security control. </p>
     */
    inline SecurityControl& WithRemediationUrl(const char* value) { SetRemediationUrl(value); return *this;}


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
    inline SecurityControl& WithSeverityRating(const SeverityRating& value) { SetSeverityRating(value); return *this;}

    /**
     * <p> The severity of a security control. For more information about how Security
     * Hub determines control severity, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/controls-findings-create-update.html#control-findings-severity">Assigning
     * severity to control findings</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline SecurityControl& WithSeverityRating(SeverityRating&& value) { SetSeverityRating(std::move(value)); return *this;}


    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline const ControlStatus& GetSecurityControlStatus() const{ return m_securityControlStatus; }

    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline bool SecurityControlStatusHasBeenSet() const { return m_securityControlStatusHasBeenSet; }

    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline void SetSecurityControlStatus(const ControlStatus& value) { m_securityControlStatusHasBeenSet = true; m_securityControlStatus = value; }

    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline void SetSecurityControlStatus(ControlStatus&& value) { m_securityControlStatusHasBeenSet = true; m_securityControlStatus = std::move(value); }

    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline SecurityControl& WithSecurityControlStatus(const ControlStatus& value) { SetSecurityControlStatus(value); return *this;}

    /**
     * <p> The enablement status of a security control in a specific standard. </p>
     */
    inline SecurityControl& WithSecurityControlStatus(ControlStatus&& value) { SetSecurityControlStatus(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
