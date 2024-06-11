﻿/**
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
   * <p>Summary of Recommendation for an Account</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationSummary">AWS
   * API Reference</a></p>
   */
  class RecommendationSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationSummary();
    AWS_TRUSTEDADVISOR_API RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Recommendation</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RecommendationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RecommendationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RecommendationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Services that the Recommendation applies to</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsServices() const{ return m_awsServices; }
    inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
    inline void SetAwsServices(const Aws::Vector<Aws::String>& value) { m_awsServicesHasBeenSet = true; m_awsServices = value; }
    inline void SetAwsServices(Aws::Vector<Aws::String>&& value) { m_awsServicesHasBeenSet = true; m_awsServices = std::move(value); }
    inline RecommendationSummary& WithAwsServices(const Aws::Vector<Aws::String>& value) { SetAwsServices(value); return *this;}
    inline RecommendationSummary& WithAwsServices(Aws::Vector<Aws::String>&& value) { SetAwsServices(std::move(value)); return *this;}
    inline RecommendationSummary& AddAwsServices(const Aws::String& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(value); return *this; }
    inline RecommendationSummary& AddAwsServices(Aws::String&& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(std::move(value)); return *this; }
    inline RecommendationSummary& AddAwsServices(const char* value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AWS Trusted Advisor Check ARN that relates to the Recommendation</p>
     */
    inline const Aws::String& GetCheckArn() const{ return m_checkArn; }
    inline bool CheckArnHasBeenSet() const { return m_checkArnHasBeenSet; }
    inline void SetCheckArn(const Aws::String& value) { m_checkArnHasBeenSet = true; m_checkArn = value; }
    inline void SetCheckArn(Aws::String&& value) { m_checkArnHasBeenSet = true; m_checkArn = std::move(value); }
    inline void SetCheckArn(const char* value) { m_checkArnHasBeenSet = true; m_checkArn.assign(value); }
    inline RecommendationSummary& WithCheckArn(const Aws::String& value) { SetCheckArn(value); return *this;}
    inline RecommendationSummary& WithCheckArn(Aws::String&& value) { SetCheckArn(std::move(value)); return *this;}
    inline RecommendationSummary& WithCheckArn(const char* value) { SetCheckArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation was created, if created by AWS Trusted Advisor
     * Priority</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline RecommendationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RecommendationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID which identifies where the Recommendation was produced</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RecommendationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RecommendationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RecommendationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline RecommendationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline RecommendationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline const RecommendationLifecycleStage& GetLifecycleStage() const{ return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(const RecommendationLifecycleStage& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline void SetLifecycleStage(RecommendationLifecycleStage&& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = std::move(value); }
    inline RecommendationSummary& WithLifecycleStage(const RecommendationLifecycleStage& value) { SetLifecycleStage(value); return *this;}
    inline RecommendationSummary& WithLifecycleStage(RecommendationLifecycleStage&& value) { SetLifecycleStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AWS Trusted Advisor Recommendation</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecommendationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecommendationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecommendationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pillar aggregations for cost savings</p>
     */
    inline const RecommendationPillarSpecificAggregates& GetPillarSpecificAggregates() const{ return m_pillarSpecificAggregates; }
    inline bool PillarSpecificAggregatesHasBeenSet() const { return m_pillarSpecificAggregatesHasBeenSet; }
    inline void SetPillarSpecificAggregates(const RecommendationPillarSpecificAggregates& value) { m_pillarSpecificAggregatesHasBeenSet = true; m_pillarSpecificAggregates = value; }
    inline void SetPillarSpecificAggregates(RecommendationPillarSpecificAggregates&& value) { m_pillarSpecificAggregatesHasBeenSet = true; m_pillarSpecificAggregates = std::move(value); }
    inline RecommendationSummary& WithPillarSpecificAggregates(const RecommendationPillarSpecificAggregates& value) { SetPillarSpecificAggregates(value); return *this;}
    inline RecommendationSummary& WithPillarSpecificAggregates(RecommendationPillarSpecificAggregates&& value) { SetPillarSpecificAggregates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Pillars that the Recommendation is optimizing</p>
     */
    inline const Aws::Vector<RecommendationPillar>& GetPillars() const{ return m_pillars; }
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
    inline void SetPillars(const Aws::Vector<RecommendationPillar>& value) { m_pillarsHasBeenSet = true; m_pillars = value; }
    inline void SetPillars(Aws::Vector<RecommendationPillar>&& value) { m_pillarsHasBeenSet = true; m_pillars = std::move(value); }
    inline RecommendationSummary& WithPillars(const Aws::Vector<RecommendationPillar>& value) { SetPillars(value); return *this;}
    inline RecommendationSummary& WithPillars(Aws::Vector<RecommendationPillar>&& value) { SetPillars(std::move(value)); return *this;}
    inline RecommendationSummary& AddPillars(const RecommendationPillar& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(value); return *this; }
    inline RecommendationSummary& AddPillars(RecommendationPillar&& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An aggregation of all resources</p>
     */
    inline const RecommendationResourcesAggregates& GetResourcesAggregates() const{ return m_resourcesAggregates; }
    inline bool ResourcesAggregatesHasBeenSet() const { return m_resourcesAggregatesHasBeenSet; }
    inline void SetResourcesAggregates(const RecommendationResourcesAggregates& value) { m_resourcesAggregatesHasBeenSet = true; m_resourcesAggregates = value; }
    inline void SetResourcesAggregates(RecommendationResourcesAggregates&& value) { m_resourcesAggregatesHasBeenSet = true; m_resourcesAggregates = std::move(value); }
    inline RecommendationSummary& WithResourcesAggregates(const RecommendationResourcesAggregates& value) { SetResourcesAggregates(value); return *this;}
    inline RecommendationSummary& WithResourcesAggregates(RecommendationResourcesAggregates&& value) { SetResourcesAggregates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the Recommendation</p>
     */
    inline const RecommendationSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const RecommendationSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(RecommendationSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline RecommendationSummary& WithSource(const RecommendationSource& value) { SetSource(value); return *this;}
    inline RecommendationSummary& WithSource(RecommendationSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Recommendation</p>
     */
    inline const RecommendationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecommendationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecommendationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RecommendationSummary& WithStatus(const RecommendationStatus& value) { SetStatus(value); return *this;}
    inline RecommendationSummary& WithStatus(RecommendationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the Recommendation was automated or generated by AWS Trusted Advisor
     * Priority</p>
     */
    inline const RecommendationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RecommendationSummary& WithType(const RecommendationType& value) { SetType(value); return *this;}
    inline RecommendationSummary& WithType(RecommendationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsServices;
    bool m_awsServicesHasBeenSet = false;

    Aws::String m_checkArn;
    bool m_checkArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    RecommendationLifecycleStage m_lifecycleStage;
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecommendationPillarSpecificAggregates m_pillarSpecificAggregates;
    bool m_pillarSpecificAggregatesHasBeenSet = false;

    Aws::Vector<RecommendationPillar> m_pillars;
    bool m_pillarsHasBeenSet = false;

    RecommendationResourcesAggregates m_resourcesAggregates;
    bool m_resourcesAggregatesHasBeenSet = false;

    RecommendationSource m_source;
    bool m_sourceHasBeenSet = false;

    RecommendationStatus m_status;
    bool m_statusHasBeenSet = false;

    RecommendationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
