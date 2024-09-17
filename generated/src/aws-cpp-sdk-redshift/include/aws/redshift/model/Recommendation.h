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
    AWS_REDSHIFT_API Recommendation();
    AWS_REDSHIFT_API Recommendation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Recommendation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier of the Advisor recommendation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Recommendation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Recommendation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Recommendation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cluster for which the recommendation is
     * returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline Recommendation& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline Recommendation& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline Recommendation& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift cluster namespace ARN for which the recommendations is
     * returned.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }
    inline Recommendation& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}
    inline Recommendation& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}
    inline Recommendation& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) that the recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Recommendation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Recommendation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Advisor recommendation.</p>
     */
    inline const Aws::String& GetRecommendationType() const{ return m_recommendationType; }
    inline bool RecommendationTypeHasBeenSet() const { return m_recommendationTypeHasBeenSet; }
    inline void SetRecommendationType(const Aws::String& value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = value; }
    inline void SetRecommendationType(Aws::String&& value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = std::move(value); }
    inline void SetRecommendationType(const char* value) { m_recommendationTypeHasBeenSet = true; m_recommendationType.assign(value); }
    inline Recommendation& WithRecommendationType(const Aws::String& value) { SetRecommendationType(value); return *this;}
    inline Recommendation& WithRecommendationType(Aws::String&& value) { SetRecommendationType(std::move(value)); return *this;}
    inline Recommendation& WithRecommendationType(const char* value) { SetRecommendationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the recommendation.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Recommendation& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Recommendation& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Recommendation& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recommendation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Recommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Recommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Recommendation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of what was observed about your cluster.</p>
     */
    inline const Aws::String& GetObservation() const{ return m_observation; }
    inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
    inline void SetObservation(const Aws::String& value) { m_observationHasBeenSet = true; m_observation = value; }
    inline void SetObservation(Aws::String&& value) { m_observationHasBeenSet = true; m_observation = std::move(value); }
    inline void SetObservation(const char* value) { m_observationHasBeenSet = true; m_observation.assign(value); }
    inline Recommendation& WithObservation(const Aws::String& value) { SetObservation(value); return *this;}
    inline Recommendation& WithObservation(Aws::String&& value) { SetObservation(std::move(value)); return *this;}
    inline Recommendation& WithObservation(const char* value) { SetObservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale of the impact that the Advisor recommendation has to the
     * performance and cost of the cluster.</p>
     */
    inline const ImpactRankingType& GetImpactRanking() const{ return m_impactRanking; }
    inline bool ImpactRankingHasBeenSet() const { return m_impactRankingHasBeenSet; }
    inline void SetImpactRanking(const ImpactRankingType& value) { m_impactRankingHasBeenSet = true; m_impactRanking = value; }
    inline void SetImpactRanking(ImpactRankingType&& value) { m_impactRankingHasBeenSet = true; m_impactRanking = std::move(value); }
    inline Recommendation& WithImpactRanking(const ImpactRankingType& value) { SetImpactRanking(value); return *this;}
    inline Recommendation& WithImpactRanking(ImpactRankingType&& value) { SetImpactRanking(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationText() const{ return m_recommendationText; }
    inline bool RecommendationTextHasBeenSet() const { return m_recommendationTextHasBeenSet; }
    inline void SetRecommendationText(const Aws::String& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = value; }
    inline void SetRecommendationText(Aws::String&& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = std::move(value); }
    inline void SetRecommendationText(const char* value) { m_recommendationTextHasBeenSet = true; m_recommendationText.assign(value); }
    inline Recommendation& WithRecommendationText(const Aws::String& value) { SetRecommendationText(value); return *this;}
    inline Recommendation& WithRecommendationText(Aws::String&& value) { SetRecommendationText(std::move(value)); return *this;}
    inline Recommendation& WithRecommendationText(const char* value) { SetRecommendationText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Amazon Redshift recommended actions.</p>
     */
    inline const Aws::Vector<RecommendedAction>& GetRecommendedActions() const{ return m_recommendedActions; }
    inline bool RecommendedActionsHasBeenSet() const { return m_recommendedActionsHasBeenSet; }
    inline void SetRecommendedActions(const Aws::Vector<RecommendedAction>& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = value; }
    inline void SetRecommendedActions(Aws::Vector<RecommendedAction>&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::move(value); }
    inline Recommendation& WithRecommendedActions(const Aws::Vector<RecommendedAction>& value) { SetRecommendedActions(value); return *this;}
    inline Recommendation& WithRecommendedActions(Aws::Vector<RecommendedAction>&& value) { SetRecommendedActions(std::move(value)); return *this;}
    inline Recommendation& AddRecommendedActions(const RecommendedAction& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(value); return *this; }
    inline Recommendation& AddRecommendedActions(RecommendedAction&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of helpful links for more information about the Advisor
     * recommendation.</p>
     */
    inline const Aws::Vector<ReferenceLink>& GetReferenceLinks() const{ return m_referenceLinks; }
    inline bool ReferenceLinksHasBeenSet() const { return m_referenceLinksHasBeenSet; }
    inline void SetReferenceLinks(const Aws::Vector<ReferenceLink>& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks = value; }
    inline void SetReferenceLinks(Aws::Vector<ReferenceLink>&& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks = std::move(value); }
    inline Recommendation& WithReferenceLinks(const Aws::Vector<ReferenceLink>& value) { SetReferenceLinks(value); return *this;}
    inline Recommendation& WithReferenceLinks(Aws::Vector<ReferenceLink>&& value) { SetReferenceLinks(std::move(value)); return *this;}
    inline Recommendation& AddReferenceLinks(const ReferenceLink& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks.push_back(value); return *this; }
    inline Recommendation& AddReferenceLinks(ReferenceLink&& value) { m_referenceLinksHasBeenSet = true; m_referenceLinks.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_recommendationType;
    bool m_recommendationTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_observation;
    bool m_observationHasBeenSet = false;

    ImpactRankingType m_impactRanking;
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
