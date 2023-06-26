/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Provides details about a control's enablement status in a specified
   * standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationDetail">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationDetail
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationDetail();
    AWS_SECURITYHUB_API StandardsControlAssociationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


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
    inline StandardsControlAssociationDetail& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline StandardsControlAssociationDetail& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Service name and a number, such as
     * APIGateway.3. </p>
     */
    inline StandardsControlAssociationDetail& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const{ return m_securityControlArn; }

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(const Aws::String& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = value; }

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(Aws::String&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::move(value); }

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline void SetSecurityControlArn(const char* value) { m_securityControlArnHasBeenSet = true; m_securityControlArn.assign(value); }

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithSecurityControlArn(const Aws::String& value) { SetSecurityControlArn(value); return *this;}

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithSecurityControlArn(Aws::String&& value) { SetSecurityControlArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithSecurityControlArn(const char* value) { SetSecurityControlArn(value); return *this;}


    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline StandardsControlAssociationDetail& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline StandardsControlAssociationDetail& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const{ return m_relatedRequirements; }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline void SetRelatedRequirements(const Aws::Vector<Aws::String>& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = value; }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline void SetRelatedRequirements(Aws::Vector<Aws::String>&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::move(value); }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline StandardsControlAssociationDetail& WithRelatedRequirements(const Aws::Vector<Aws::String>& value) { SetRelatedRequirements(value); return *this;}

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline StandardsControlAssociationDetail& WithRelatedRequirements(Aws::Vector<Aws::String>&& value) { SetRelatedRequirements(std::move(value)); return *this;}

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline StandardsControlAssociationDetail& AddRelatedRequirements(const Aws::String& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline StandardsControlAssociationDetail& AddRelatedRequirements(Aws::String&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(std::move(value)); return *this; }

    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline StandardsControlAssociationDetail& AddRelatedRequirements(const char* value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }


    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline StandardsControlAssociationDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline StandardsControlAssociationDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline const Aws::String& GetUpdatedReason() const{ return m_updatedReason; }

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline void SetUpdatedReason(const Aws::String& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = value; }

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline void SetUpdatedReason(Aws::String&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::move(value); }

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline void SetUpdatedReason(const char* value) { m_updatedReasonHasBeenSet = true; m_updatedReason.assign(value); }

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& WithUpdatedReason(const Aws::String& value) { SetUpdatedReason(value); return *this;}

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& WithUpdatedReason(Aws::String&& value) { SetUpdatedReason(std::move(value)); return *this;}

    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& WithUpdatedReason(const char* value) { SetUpdatedReason(value); return *this;}


    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline const Aws::String& GetStandardsControlTitle() const{ return m_standardsControlTitle; }

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline bool StandardsControlTitleHasBeenSet() const { return m_standardsControlTitleHasBeenSet; }

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline void SetStandardsControlTitle(const Aws::String& value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle = value; }

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline void SetStandardsControlTitle(Aws::String&& value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle = std::move(value); }

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline void SetStandardsControlTitle(const char* value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle.assign(value); }

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlTitle(const Aws::String& value) { SetStandardsControlTitle(value); return *this;}

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlTitle(Aws::String&& value) { SetStandardsControlTitle(std::move(value)); return *this;}

    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlTitle(const char* value) { SetStandardsControlTitle(value); return *this;}


    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline const Aws::String& GetStandardsControlDescription() const{ return m_standardsControlDescription; }

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline bool StandardsControlDescriptionHasBeenSet() const { return m_standardsControlDescriptionHasBeenSet; }

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline void SetStandardsControlDescription(const Aws::String& value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription = value; }

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline void SetStandardsControlDescription(Aws::String&& value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription = std::move(value); }

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline void SetStandardsControlDescription(const char* value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription.assign(value); }

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlDescription(const Aws::String& value) { SetStandardsControlDescription(value); return *this;}

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlDescription(Aws::String&& value) { SetStandardsControlDescription(std::move(value)); return *this;}

    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlDescription(const char* value) { SetStandardsControlDescription(value); return *this;}


    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsControlArns() const{ return m_standardsControlArns; }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline bool StandardsControlArnsHasBeenSet() const { return m_standardsControlArnsHasBeenSet; }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline void SetStandardsControlArns(const Aws::Vector<Aws::String>& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns = value; }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline void SetStandardsControlArns(Aws::Vector<Aws::String>&& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns = std::move(value); }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlArns(const Aws::Vector<Aws::String>& value) { SetStandardsControlArns(value); return *this;}

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& WithStandardsControlArns(Aws::Vector<Aws::String>&& value) { SetStandardsControlArns(std::move(value)); return *this;}

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& AddStandardsControlArns(const Aws::String& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns.push_back(value); return *this; }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& AddStandardsControlArns(Aws::String&& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns.push_back(std::move(value)); return *this; }

    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline StandardsControlAssociationDetail& AddStandardsControlArns(const char* value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns.push_back(value); return *this; }

  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_securityControlArn;
    bool m_securityControlArnHasBeenSet = false;

    AssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedReason;
    bool m_updatedReasonHasBeenSet = false;

    Aws::String m_standardsControlTitle;
    bool m_standardsControlTitleHasBeenSet = false;

    Aws::String m_standardsControlDescription;
    bool m_standardsControlDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_standardsControlArns;
    bool m_standardsControlArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
