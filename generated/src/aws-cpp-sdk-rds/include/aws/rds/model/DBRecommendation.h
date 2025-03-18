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
    AWS_RDS_API DBRecommendation() = default;
    AWS_RDS_API DBRecommendation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBRecommendation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    DBRecommendation& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the type of recommendation. This value determines how
     * the description is rendered.</p>
     */
    inline const Aws::String& GetTypeId() const { return m_typeId; }
    inline bool TypeIdHasBeenSet() const { return m_typeIdHasBeenSet; }
    template<typename TypeIdT = Aws::String>
    void SetTypeId(TypeIdT&& value) { m_typeIdHasBeenSet = true; m_typeId = std::forward<TypeIdT>(value); }
    template<typename TypeIdT = Aws::String>
    DBRecommendation& WithTypeId(TypeIdT&& value) { SetTypeId(std::forward<TypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level of the recommendation. The severity level can help you
     * decide the urgency with which to address the recommendation.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>high</code> </p> </li> <li> <p>
     * <code>medium</code> </p> </li> <li> <p> <code>low</code> </p> </li> <li> <p>
     * <code>informational</code> </p> </li> </ul>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    DBRecommendation& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the RDS resource associated with the
     * recommendation.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DBRecommendation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBRecommendation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was created. For example,
     * <code>2023-09-28T01:13:53.931000+00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DBRecommendation& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the recommendation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    DBRecommendation& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the issue identified for this recommendation. The
     * description might contain markdown.</p>
     */
    inline const Aws::String& GetDetection() const { return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    template<typename DetectionT = Aws::String>
    void SetDetection(DetectionT&& value) { m_detectionHasBeenSet = true; m_detection = std::forward<DetectionT>(value); }
    template<typename DetectionT = Aws::String>
    DBRecommendation& WithDetection(DetectionT&& value) { SetDetection(std::forward<DetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the recommendation to resolve an issue. The
     * description might contain markdown.</p>
     */
    inline const Aws::String& GetRecommendation() const { return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    template<typename RecommendationT = Aws::String>
    void SetRecommendation(RecommendationT&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::forward<RecommendationT>(value); }
    template<typename RecommendationT = Aws::String>
    DBRecommendation& WithRecommendation(RecommendationT&& value) { SetRecommendation(std::forward<RecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the recommendation. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DBRecommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why this recommendation was created. The information might contain
     * markdown.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DBRecommendation& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recommended actions.</p>
     */
    inline const Aws::Vector<RecommendedAction>& GetRecommendedActions() const { return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    void SetRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::forward<RecommendedActionsT>(value); }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    DBRecommendation& WithRecommendedActions(RecommendedActionsT&& value) { SetRecommendedActions(std::forward<RecommendedActionsT>(value)); return *this;}
    template<typename RecommendedActionsT = RecommendedAction>
    DBRecommendation& AddRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.emplace_back(std::forward<RecommendedActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category of the recommendation.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>performance efficiency</code> </p> </li> <li> <p> <code>security</code>
     * </p> </li> <li> <p> <code>reliability</code> </p> </li> <li> <p> <code>cost
     * optimization</code> </p> </li> <li> <p> <code>operational excellence</code> </p>
     * </li> <li> <p> <code>sustainability</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    DBRecommendation& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service that generated the recommendations.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DBRecommendation& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the recommendation type. The description might contain
     * markdown.</p>
     */
    inline const Aws::String& GetTypeDetection() const { return m_typeDetection; }
    inline bool TypeDetectionHasBeenSet() const { return m_typeDetectionHasBeenSet; }
    template<typename TypeDetectionT = Aws::String>
    void SetTypeDetection(TypeDetectionT&& value) { m_typeDetectionHasBeenSet = true; m_typeDetection = std::forward<TypeDetectionT>(value); }
    template<typename TypeDetectionT = Aws::String>
    DBRecommendation& WithTypeDetection(TypeDetectionT&& value) { SetTypeDetection(std::forward<TypeDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that summarizes the recommendation to fix all the issues
     * of the recommendation type. The description might contain markdown.</p>
     */
    inline const Aws::String& GetTypeRecommendation() const { return m_typeRecommendation; }
    inline bool TypeRecommendationHasBeenSet() const { return m_typeRecommendationHasBeenSet; }
    template<typename TypeRecommendationT = Aws::String>
    void SetTypeRecommendation(TypeRecommendationT&& value) { m_typeRecommendationHasBeenSet = true; m_typeRecommendation = std::forward<TypeRecommendationT>(value); }
    template<typename TypeRecommendationT = Aws::String>
    DBRecommendation& WithTypeRecommendation(TypeRecommendationT&& value) { SetTypeRecommendation(std::forward<TypeRecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description that explains the possible impact of an issue.</p>
     */
    inline const Aws::String& GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    template<typename ImpactT = Aws::String>
    void SetImpact(ImpactT&& value) { m_impactHasBeenSet = true; m_impact = std::forward<ImpactT>(value); }
    template<typename ImpactT = Aws::String>
    DBRecommendation& WithImpact(ImpactT&& value) { SetImpact(std::forward<ImpactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the recommendation. The information might
     * contain markdown.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::String>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::String>
    DBRecommendation& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to documentation that provides additional information about the
     * recommendation.</p>
     */
    inline const Aws::Vector<DocLink>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Vector<DocLink>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Vector<DocLink>>
    DBRecommendation& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksT = DocLink>
    DBRecommendation& AddLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links.emplace_back(std::forward<LinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the issue that caused the recommendation.</p>
     */
    inline const IssueDetails& GetIssueDetails() const { return m_issueDetails; }
    inline bool IssueDetailsHasBeenSet() const { return m_issueDetailsHasBeenSet; }
    template<typename IssueDetailsT = IssueDetails>
    void SetIssueDetails(IssueDetailsT&& value) { m_issueDetailsHasBeenSet = true; m_issueDetails = std::forward<IssueDetailsT>(value); }
    template<typename IssueDetailsT = IssueDetails>
    DBRecommendation& WithIssueDetails(IssueDetailsT&& value) { SetIssueDetails(std::forward<IssueDetailsT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime{};
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
