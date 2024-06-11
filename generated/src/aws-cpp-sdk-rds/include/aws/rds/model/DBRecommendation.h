/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/IssueDetails.h>
#include <aws/rds/model/RecommendedAction.h>
#include <aws/rds/model/DocLink.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The recommendation for your DB instances, DB clusters, and DB parameter
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBRecommendation">AWS
   * API Reference</a></p>
   */
  class DBRecommendation
  {
  public:
    AWS_RDS_API DBRecommendation();
    AWS_RDS_API DBRecommendation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBRecommendation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline DBRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline DBRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline DBRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the type of recommendation. This value determines how
     * the description is rendered.</p>
     */
    inline const Aws::String& GetTypeId() const{ return m_typeId; }
    inline bool TypeIdHasBeenSet() const { return m_typeIdHasBeenSet; }
    inline void SetTypeId(const Aws::String& value) { m_typeIdHasBeenSet = true; m_typeId = value; }
    inline void SetTypeId(Aws::String&& value) { m_typeIdHasBeenSet = true; m_typeId = std::move(value); }
    inline void SetTypeId(const char* value) { m_typeIdHasBeenSet = true; m_typeId.assign(value); }
    inline DBRecommendation& WithTypeId(const Aws::String& value) { SetTypeId(value); return *this;}
    inline DBRecommendation& WithTypeId(Aws::String&& value) { SetTypeId(std::move(value)); return *this;}
    inline DBRecommendation& WithTypeId(const char* value) { SetTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level of the recommendation. The severity level can help you
     * decide the urgency with which to address the recommendation.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>high</code> </p> </li> <li> <p>
     * <code>medium</code> </p> </li> <li> <p> <code>low</code> </p> </li> <li> <p>
     * <code>informational</code> </p> </li> </ul>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }
    inline DBRecommendation& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}
    inline DBRecommendation& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}
    inline DBRecommendation& WithSeverity(const char* value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the RDS resource associated with the
     * recommendation.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline DBRecommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DBRecommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DBRecommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the recommendation.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>active</code> - The recommendations which are ready for you to
     * apply.</p> </li> <li> <p> <code>pending</code> - The applied or scheduled
     * recommendations which are in progress.</p> </li> <li> <p> <code>resolved</code>
     * - The recommendations which are completed.</p> </li> <li> <p>
     * <code>dismissed</code> - The recommendations that you dismissed.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBRecommendation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBRecommendation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBRecommendation& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was created. For example,
     * <code>2023-09-28T01:13:53.931000+00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DBRecommendation& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DBRecommendation& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }
    inline DBRecommendation& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}
    inline DBRecommendation& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the issue identified for this recommendation. The
     * description might contain markdown.</p>
     */
    inline const Aws::String& GetDetection() const{ return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    inline void SetDetection(const Aws::String& value) { m_detectionHasBeenSet = true; m_detection = value; }
    inline void SetDetection(Aws::String&& value) { m_detectionHasBeenSet = true; m_detection = std::move(value); }
    inline void SetDetection(const char* value) { m_detectionHasBeenSet = true; m_detection.assign(value); }
    inline DBRecommendation& WithDetection(const Aws::String& value) { SetDetection(value); return *this;}
    inline DBRecommendation& WithDetection(Aws::String&& value) { SetDetection(std::move(value)); return *this;}
    inline DBRecommendation& WithDetection(const char* value) { SetDetection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the recommendation to resolve an issue. The
     * description might contain markdown.</p>
     */
    inline const Aws::String& GetRecommendation() const{ return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    inline void SetRecommendation(const Aws::String& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }
    inline void SetRecommendation(Aws::String&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }
    inline void SetRecommendation(const char* value) { m_recommendationHasBeenSet = true; m_recommendation.assign(value); }
    inline DBRecommendation& WithRecommendation(const Aws::String& value) { SetRecommendation(value); return *this;}
    inline DBRecommendation& WithRecommendation(Aws::String&& value) { SetRecommendation(std::move(value)); return *this;}
    inline DBRecommendation& WithRecommendation(const char* value) { SetRecommendation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the recommendation. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DBRecommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DBRecommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DBRecommendation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why this recommendation was created. The information might contain
     * markdown.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline DBRecommendation& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline DBRecommendation& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline DBRecommendation& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recommended actions.</p>
     */
    inline const Aws::Vector<RecommendedAction>& GetRecommendedActions() const{ return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    inline void SetRecommendedActions(const Aws::Vector<RecommendedAction>& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = value; }
    inline void SetRecommendedActions(Aws::Vector<RecommendedAction>&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::move(value); }
    inline DBRecommendation& WithRecommendedActions(const Aws::Vector<RecommendedAction>& value) { SetRecommendedActions(value); return *this;}
    inline DBRecommendation& WithRecommendedActions(Aws::Vector<RecommendedAction>&& value) { SetRecommendedActions(std::move(value)); return *this;}
    inline DBRecommendation& AddRecommendedActions(const RecommendedAction& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }
    inline DBRecommendation& AddRecommendedActions(RecommendedAction&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category of the recommendation.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>performance efficiency</code> </p> </li> <li> <p> <code>security</code>
     * </p> </li> <li> <p> <code>reliability</code> </p> </li> <li> <p> <code>cost
     * optimization</code> </p> </li> <li> <p> <code>operational excellence</code> </p>
     * </li> <li> <p> <code>sustainability</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline DBRecommendation& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline DBRecommendation& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline DBRecommendation& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that generated the recommendations.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline DBRecommendation& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline DBRecommendation& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline DBRecommendation& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the recommendation type. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetTypeDetection() const{ return m_typeDetection; }
    inline bool TypeDetectionHasBeenSet() const { return m_typeDetectionHasBeenSet; }
    inline void SetTypeDetection(const Aws::String& value) { m_typeDetectionHasBeenSet = true; m_typeDetection = value; }
    inline void SetTypeDetection(Aws::String&& value) { m_typeDetectionHasBeenSet = true; m_typeDetection = std::move(value); }
    inline void SetTypeDetection(const char* value) { m_typeDetectionHasBeenSet = true; m_typeDetection.assign(value); }
    inline DBRecommendation& WithTypeDetection(const Aws::String& value) { SetTypeDetection(value); return *this;}
    inline DBRecommendation& WithTypeDetection(Aws::String&& value) { SetTypeDetection(std::move(value)); return *this;}
    inline DBRecommendation& WithTypeDetection(const char* value) { SetTypeDetection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that summarizes the recommendation to fix all the issues
     * of the recommendation type. The description might contain markdown.</p>
     */
    inline const Aws::String& GetTypeRecommendation() const{ return m_typeRecommendation; }
    inline bool TypeRecommendationHasBeenSet() const { return m_typeRecommendationHasBeenSet; }
    inline void SetTypeRecommendation(const Aws::String& value) { m_typeRecommendationHasBeenSet = true; m_typeRecommendation = value; }
    inline void SetTypeRecommendation(Aws::String&& value) { m_typeRecommendationHasBeenSet = true; m_typeRecommendation = std::move(value); }
    inline void SetTypeRecommendation(const char* value) { m_typeRecommendationHasBeenSet = true; m_typeRecommendation.assign(value); }
    inline DBRecommendation& WithTypeRecommendation(const Aws::String& value) { SetTypeRecommendation(value); return *this;}
    inline DBRecommendation& WithTypeRecommendation(Aws::String&& value) { SetTypeRecommendation(std::move(value)); return *this;}
    inline DBRecommendation& WithTypeRecommendation(const char* value) { SetTypeRecommendation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that explains the possible impact of an issue.</p>
     */
    inline const Aws::String& GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(const Aws::String& value) { m_impactHasBeenSet = true; m_impact = value; }
    inline void SetImpact(Aws::String&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }
    inline void SetImpact(const char* value) { m_impactHasBeenSet = true; m_impact.assign(value); }
    inline DBRecommendation& WithImpact(const Aws::String& value) { SetImpact(value); return *this;}
    inline DBRecommendation& WithImpact(Aws::String&& value) { SetImpact(std::move(value)); return *this;}
    inline DBRecommendation& WithImpact(const char* value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the recommendation. The information might
     * contain markdown.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }
    inline DBRecommendation& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline DBRecommendation& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline DBRecommendation& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to documentation that provides additional information about the
     * recommendation.</p>
     */
    inline const Aws::Vector<DocLink>& GetLinks() const{ return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    inline void SetLinks(const Aws::Vector<DocLink>& value) { m_linksHasBeenSet = true; m_links = value; }
    inline void SetLinks(Aws::Vector<DocLink>&& value) { m_linksHasBeenSet = true; m_links = std::move(value); }
    inline DBRecommendation& WithLinks(const Aws::Vector<DocLink>& value) { SetLinks(value); return *this;}
    inline DBRecommendation& WithLinks(Aws::Vector<DocLink>&& value) { SetLinks(std::move(value)); return *this;}
    inline DBRecommendation& AddLinks(const DocLink& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }
    inline DBRecommendation& AddLinks(DocLink&& value) { m_linksHasBeenSet = true; m_links.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the issue that caused the recommendation.</p>
     */
    inline const IssueDetails& GetIssueDetails() const{ return m_issueDetails; }
    inline bool IssueDetailsHasBeenSet() const { return m_issueDetailsHasBeenSet; }
    inline void SetIssueDetails(const IssueDetails& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = value; }
    inline void SetIssueDetails(IssueDetails&& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = std::move(value); }
    inline DBRecommendation& WithIssueDetails(const IssueDetails& value) { SetIssueDetails(value); return *this;}
    inline DBRecommendation& WithIssueDetails(IssueDetails&& value) { SetIssueDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_typeId;
    bool m_typeIdHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    Aws::String m_detection;
    bool m_detectionHasBeenSet = false;

    Aws::String m_recommendation;
    bool m_recommendationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<RecommendedAction> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_typeDetection;
    bool m_typeDetectionHasBeenSet = false;

    Aws::String m_typeRecommendation;
    bool m_typeRecommendationHasBeenSet = false;

    Aws::String m_impact;
    bool m_impactHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<DocLink> m_links;
    bool m_linksHasBeenSet = false;

    IssueDetails m_issueDetails;
    bool m_issueDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
