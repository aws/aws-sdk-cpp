/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ImpactRankingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/RecommendedAction.h>
#include <aws/redshift/model/ReferenceLink.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>An Amazon Redshift Advisor recommended action on the Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_REDSHIFT_API Recommendation() = default;
    AWS_REDSHIFT_API Recommendation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Recommendation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier of the Advisor recommendation.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Recommendation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cluster for which the recommendation is
     * returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    Recommendation& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift cluster namespace ARN for which the recommendations is
     * returned.</p>
     */
    inline const Aws::String& GetNamespaceArn() const { return m_namespaceArn; }
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
    template<typename NamespaceArnT = Aws::String>
    void SetNamespaceArn(NamespaceArnT&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::forward<NamespaceArnT>(value); }
    template<typename NamespaceArnT = Aws::String>
    Recommendation& WithNamespaceArn(NamespaceArnT&& value) { SetNamespaceArn(std::forward<NamespaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) that the recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Recommendation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Advisor recommendation.</p>
     */
    inline const Aws::String& GetRecommendationType() const { return m_recommendationType; }
    inline bool RecommendationTypeHasBeenSet() const { return m_recommendationTypeHasBeenSet; }
    template<typename RecommendationTypeT = Aws::String>
    void SetRecommendationType(RecommendationTypeT&& value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = std::forward<RecommendationTypeT>(value); }
    template<typename RecommendationTypeT = Aws::String>
    Recommendation& WithRecommendationType(RecommendationTypeT&& value) { SetRecommendationType(std::forward<RecommendationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the recommendation.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Recommendation& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recommendation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Recommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of what was observed about your cluster.</p>
     */
    inline const Aws::String& GetObservation() const { return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    template<typename ObservationT = Aws::String>
    void SetObservation(ObservationT&& value) { m_observationHasBeenSet = true; m_observation = std::forward<ObservationT>(value); }
    template<typename ObservationT = Aws::String>
    Recommendation& WithObservation(ObservationT&& value) { SetObservation(std::forward<ObservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale of the impact that the Advisor recommendation has to the
     * performance and cost of the cluster.</p>
     */
    inline ImpactRankingType GetImpactRanking() const { return m_impactRanking; }
    inline bool ImpactRankingHasBeenSet() const { return m_impactRankingHasBeenSet; }
    inline void SetImpactRanking(ImpactRankingType value) { m_impactRankingHasBeenSet = true; m_impactRanking = value; }
    inline Recommendation& WithImpactRanking(ImpactRankingType value) { SetImpactRanking(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationText() const { return m_recommendationText; }
    inline bool RecommendationTextHasBeenSet() const { return m_recommendationTextHasBeenSet; }
    template<typename RecommendationTextT = Aws::String>
    void SetRecommendationText(RecommendationTextT&& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = std::forward<RecommendationTextT>(value); }
    template<typename RecommendationTextT = Aws::String>
    Recommendation& WithRecommendationText(RecommendationTextT&& value) { SetRecommendationText(std::forward<RecommendationTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Amazon Redshift recommended actions.</p>
     */
    inline const Aws::Vector<RecommendedAction>& GetRecommendedActions() const { return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    void SetRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::forward<RecommendedActionsT>(value); }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    Recommendation& WithRecommendedActions(RecommendedActionsT&& value) { SetRecommendedActions(std::forward<RecommendedActionsT>(value)); return *this;}
    template<typename RecommendedActionsT = RecommendedAction>
    Recommendation& AddRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.emplace_back(std::forward<RecommendedActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of helpful links for more information about the Advisor
     * recommendation.</p>
     */
    inline const Aws::Vector<ReferenceLink>& GetReferenceLinks() const { return m_referenceLinks; }
    inline bool ReferenceLinksHasBeenSet() const { return m_referenceLinksHasBeenSet; }
    template<typename ReferenceLinksT = Aws::Vector<ReferenceLink>>
    void SetReferenceLinks(ReferenceLinksT&& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks = std::forward<ReferenceLinksT>(value); }
    template<typename ReferenceLinksT = Aws::Vector<ReferenceLink>>
    Recommendation& WithReferenceLinks(ReferenceLinksT&& value) { SetReferenceLinks(std::forward<ReferenceLinksT>(value)); return *this;}
    template<typename ReferenceLinksT = ReferenceLink>
    Recommendation& AddReferenceLinks(ReferenceLinksT&& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks.emplace_back(std::forward<ReferenceLinksT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_recommendationType;
    bool m_recommendationTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_observation;
    bool m_observationHasBeenSet = false;

    ImpactRankingType m_impactRanking{ImpactRankingType::NOT_SET};
    bool m_impactRankingHasBeenSet = false;

    Aws::String m_recommendationText;
    bool m_recommendationTextHasBeenSet = false;

    Aws::Vector<RecommendedAction> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    Aws::Vector<ReferenceLink> m_referenceLinks;
    bool m_referenceLinksHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
