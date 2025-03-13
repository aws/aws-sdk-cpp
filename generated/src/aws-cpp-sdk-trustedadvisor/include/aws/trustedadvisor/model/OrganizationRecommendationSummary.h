/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/trustedadvisor/model/RecommendationLifecycleStage.h>
#include <aws/trustedadvisor/model/RecommendationPillarSpecificAggregates.h>
#include <aws/trustedadvisor/model/RecommendationResourcesAggregates.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>
#include <aws/trustedadvisor/model/RecommendationStatus.h>
#include <aws/trustedadvisor/model/RecommendationType.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
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
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>Summary of recommendation for accounts within an Organization</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/OrganizationRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class OrganizationRecommendationSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationSummary() = default;
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Recommendation</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    OrganizationRecommendationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Services that the Recommendation applies to</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
    inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
    template<typename AwsServicesT = Aws::Vector<Aws::String>>
    void SetAwsServices(AwsServicesT&& value) { m_awsServicesHasBeenSet = true; m_awsServices = std::forward<AwsServicesT>(value); }
    template<typename AwsServicesT = Aws::Vector<Aws::String>>
    OrganizationRecommendationSummary& WithAwsServices(AwsServicesT&& value) { SetAwsServices(std::forward<AwsServicesT>(value)); return *this;}
    template<typename AwsServicesT = Aws::String>
    OrganizationRecommendationSummary& AddAwsServices(AwsServicesT&& value) { m_awsServicesHasBeenSet = true; m_awsServices.emplace_back(std::forward<AwsServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AWS Trusted Advisor Check ARN that relates to the Recommendation</p>
     */
    inline const Aws::String& GetCheckArn() const { return m_checkArn; }
    inline bool CheckArnHasBeenSet() const { return m_checkArnHasBeenSet; }
    template<typename CheckArnT = Aws::String>
    void SetCheckArn(CheckArnT&& value) { m_checkArnHasBeenSet = true; m_checkArn = std::forward<CheckArnT>(value); }
    template<typename CheckArnT = Aws::String>
    OrganizationRecommendationSummary& WithCheckArn(CheckArnT&& value) { SetCheckArn(std::forward<CheckArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation was created, if created by AWS Trusted Advisor
     * Priority</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    OrganizationRecommendationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID which identifies where the Recommendation was produced</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OrganizationRecommendationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    OrganizationRecommendationSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline RecommendationLifecycleStage GetLifecycleStage() const { return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(RecommendationLifecycleStage value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline OrganizationRecommendationSummary& WithLifecycleStage(RecommendationLifecycleStage value) { SetLifecycleStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AWS Trusted Advisor Recommendation</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OrganizationRecommendationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pillar aggregations for cost savings</p>
     */
    inline const RecommendationPillarSpecificAggregates& GetPillarSpecificAggregates() const { return m_pillarSpecificAggregates; }
    inline bool PillarSpecificAggregatesHasBeenSet() const { return m_pillarSpecificAggregatesHasBeenSet; }
    template<typename PillarSpecificAggregatesT = RecommendationPillarSpecificAggregates>
    void SetPillarSpecificAggregates(PillarSpecificAggregatesT&& value) { m_pillarSpecificAggregatesHasBeenSet = true; m_pillarSpecificAggregates = std::forward<PillarSpecificAggregatesT>(value); }
    template<typename PillarSpecificAggregatesT = RecommendationPillarSpecificAggregates>
    OrganizationRecommendationSummary& WithPillarSpecificAggregates(PillarSpecificAggregatesT&& value) { SetPillarSpecificAggregates(std::forward<PillarSpecificAggregatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Pillars that the Recommendation is optimizing</p>
     */
    inline const Aws::Vector<RecommendationPillar>& GetPillars() const { return m_pillars; }
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
    template<typename PillarsT = Aws::Vector<RecommendationPillar>>
    void SetPillars(PillarsT&& value) { m_pillarsHasBeenSet = true; m_pillars = std::forward<PillarsT>(value); }
    template<typename PillarsT = Aws::Vector<RecommendationPillar>>
    OrganizationRecommendationSummary& WithPillars(PillarsT&& value) { SetPillars(std::forward<PillarsT>(value)); return *this;}
    inline OrganizationRecommendationSummary& AddPillars(RecommendationPillar value) { m_pillarsHasBeenSet = true; m_pillars.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An aggregation of all resources</p>
     */
    inline const RecommendationResourcesAggregates& GetResourcesAggregates() const { return m_resourcesAggregates; }
    inline bool ResourcesAggregatesHasBeenSet() const { return m_resourcesAggregatesHasBeenSet; }
    template<typename ResourcesAggregatesT = RecommendationResourcesAggregates>
    void SetResourcesAggregates(ResourcesAggregatesT&& value) { m_resourcesAggregatesHasBeenSet = true; m_resourcesAggregates = std::forward<ResourcesAggregatesT>(value); }
    template<typename ResourcesAggregatesT = RecommendationResourcesAggregates>
    OrganizationRecommendationSummary& WithResourcesAggregates(ResourcesAggregatesT&& value) { SetResourcesAggregates(std::forward<ResourcesAggregatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the Recommendation</p>
     */
    inline RecommendationSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(RecommendationSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline OrganizationRecommendationSummary& WithSource(RecommendationSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Recommendation</p>
     */
    inline RecommendationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecommendationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrganizationRecommendationSummary& WithStatus(RecommendationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the Recommendation was automated or generated by AWS Trusted Advisor
     * Priority</p>
     */
    inline RecommendationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RecommendationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OrganizationRecommendationSummary& WithType(RecommendationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsServices;
    bool m_awsServicesHasBeenSet = false;

    Aws::String m_checkArn;
    bool m_checkArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    RecommendationLifecycleStage m_lifecycleStage{RecommendationLifecycleStage::NOT_SET};
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecommendationPillarSpecificAggregates m_pillarSpecificAggregates;
    bool m_pillarSpecificAggregatesHasBeenSet = false;

    Aws::Vector<RecommendationPillar> m_pillars;
    bool m_pillarsHasBeenSet = false;

    RecommendationResourcesAggregates m_resourcesAggregates;
    bool m_resourcesAggregatesHasBeenSet = false;

    RecommendationSource m_source{RecommendationSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    RecommendationStatus m_status{RecommendationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RecommendationType m_type{RecommendationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
