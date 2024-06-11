﻿/**
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
   * <p> An array that provides the enablement status and other details for each
   * control that applies to each enabled standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationSummary">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationSummary
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationSummary();
    AWS_SECURITYHUB_API StandardsControlAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a standard. </p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }
    inline StandardsControlAssociationSummary& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique standard-agnostic identifier for a control. Values for this field
     * typically consist of an Amazon Web Service and a number, such as APIGateway.5.
     * This field doesn't reference a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }
    inline StandardsControlAssociationSummary& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}
    inline StandardsControlAssociationSummary& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a control, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const{ return m_securityControlArn; }
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }
    inline void SetSecurityControlArn(const Aws::String& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = value; }
    inline void SetSecurityControlArn(Aws::String&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::move(value); }
    inline void SetSecurityControlArn(const char* value) { m_securityControlArnHasBeenSet = true; m_securityControlArn.assign(value); }
    inline StandardsControlAssociationSummary& WithSecurityControlArn(const Aws::String& value) { SetSecurityControlArn(value); return *this;}
    inline StandardsControlAssociationSummary& WithSecurityControlArn(Aws::String&& value) { SetSecurityControlArn(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithSecurityControlArn(const char* value) { SetSecurityControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The enablement status of a control in a specific standard. </p>
     */
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline StandardsControlAssociationSummary& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}
    inline StandardsControlAssociationSummary& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The requirement that underlies this control in the compliance framework
     * related to the standard. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const{ return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    inline void SetRelatedRequirements(const Aws::Vector<Aws::String>& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = value; }
    inline void SetRelatedRequirements(Aws::Vector<Aws::String>&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::move(value); }
    inline StandardsControlAssociationSummary& WithRelatedRequirements(const Aws::Vector<Aws::String>& value) { SetRelatedRequirements(value); return *this;}
    inline StandardsControlAssociationSummary& WithRelatedRequirements(Aws::Vector<Aws::String>&& value) { SetRelatedRequirements(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& AddRelatedRequirements(const Aws::String& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    inline StandardsControlAssociationSummary& AddRelatedRequirements(Aws::String&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(std::move(value)); return *this; }
    inline StandardsControlAssociationSummary& AddRelatedRequirements(const char* value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that a control's enablement status in a specified standard was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline StandardsControlAssociationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline StandardsControlAssociationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for updating a control's enablement status in a specified
     * standard.</p>
     */
    inline const Aws::String& GetUpdatedReason() const{ return m_updatedReason; }
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }
    inline void SetUpdatedReason(const Aws::String& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = value; }
    inline void SetUpdatedReason(Aws::String&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::move(value); }
    inline void SetUpdatedReason(const char* value) { m_updatedReasonHasBeenSet = true; m_updatedReason.assign(value); }
    inline StandardsControlAssociationSummary& WithUpdatedReason(const Aws::String& value) { SetUpdatedReason(value); return *this;}
    inline StandardsControlAssociationSummary& WithUpdatedReason(Aws::String&& value) { SetUpdatedReason(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithUpdatedReason(const char* value) { SetUpdatedReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of a control. </p>
     */
    inline const Aws::String& GetStandardsControlTitle() const{ return m_standardsControlTitle; }
    inline bool StandardsControlTitleHasBeenSet() const { return m_standardsControlTitleHasBeenSet; }
    inline void SetStandardsControlTitle(const Aws::String& value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle = value; }
    inline void SetStandardsControlTitle(Aws::String&& value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle = std::move(value); }
    inline void SetStandardsControlTitle(const char* value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle.assign(value); }
    inline StandardsControlAssociationSummary& WithStandardsControlTitle(const Aws::String& value) { SetStandardsControlTitle(value); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsControlTitle(Aws::String&& value) { SetStandardsControlTitle(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsControlTitle(const char* value) { SetStandardsControlTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. The parameter may reference a specific standard. </p>
     */
    inline const Aws::String& GetStandardsControlDescription() const{ return m_standardsControlDescription; }
    inline bool StandardsControlDescriptionHasBeenSet() const { return m_standardsControlDescriptionHasBeenSet; }
    inline void SetStandardsControlDescription(const Aws::String& value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription = value; }
    inline void SetStandardsControlDescription(Aws::String&& value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription = std::move(value); }
    inline void SetStandardsControlDescription(const char* value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription.assign(value); }
    inline StandardsControlAssociationSummary& WithStandardsControlDescription(const Aws::String& value) { SetStandardsControlDescription(value); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsControlDescription(Aws::String&& value) { SetStandardsControlDescription(std::move(value)); return *this;}
    inline StandardsControlAssociationSummary& WithStandardsControlDescription(const char* value) { SetStandardsControlDescription(value); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
