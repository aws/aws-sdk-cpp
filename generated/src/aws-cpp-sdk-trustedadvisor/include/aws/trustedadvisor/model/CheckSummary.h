/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TrustedAdvisor {
namespace Model {

/**
 * <p>A summary of an AWS Trusted Advisor Check</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/CheckSummary">AWS
 * API Reference</a></p>
 */
class CheckSummary {
 public:
  AWS_TRUSTEDADVISOR_API CheckSummary() = default;
  AWS_TRUSTEDADVISOR_API CheckSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API CheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the AWS Trusted Advisor Check</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CheckSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS Trusted Advisor Check</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CheckSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the AWS Trusted Advisor Check</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CheckSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CheckSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
   */
  inline const Aws::Vector<RecommendationPillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<RecommendationPillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<RecommendationPillar>>
  CheckSummary& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline CheckSummary& AddPillars(RecommendationPillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Services that the Check applies to</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  CheckSummary& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  CheckSummary& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the Recommendation</p>
   */
  inline RecommendationSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(RecommendationSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline CheckSummary& WithSource(RecommendationSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The column headings for the metadata returned in the resource</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  CheckSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  CheckSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this check is supported by the
   * ListRecommendationsForResource API.</p>
   */
  inline bool GetResourceArnQueryable() const { return m_resourceArnQueryable; }
  inline bool ResourceArnQueryableHasBeenSet() const { return m_resourceArnQueryableHasBeenSet; }
  inline void SetResourceArnQueryable(bool value) {
    m_resourceArnQueryableHasBeenSet = true;
    m_resourceArnQueryable = value;
  }
  inline CheckSummary& WithResourceArnQueryable(bool value) {
    SetResourceArnQueryable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS resource types that this check evaluates (for example,
   * AWS::EC2::Instance).</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsResourceTypes() const { return m_awsResourceTypes; }
  inline bool AwsResourceTypesHasBeenSet() const { return m_awsResourceTypesHasBeenSet; }
  template <typename AwsResourceTypesT = Aws::Vector<Aws::String>>
  void SetAwsResourceTypes(AwsResourceTypesT&& value) {
    m_awsResourceTypesHasBeenSet = true;
    m_awsResourceTypes = std::forward<AwsResourceTypesT>(value);
  }
  template <typename AwsResourceTypesT = Aws::Vector<Aws::String>>
  CheckSummary& WithAwsResourceTypes(AwsResourceTypesT&& value) {
    SetAwsResourceTypes(std::forward<AwsResourceTypesT>(value));
    return *this;
  }
  template <typename AwsResourceTypesT = Aws::String>
  CheckSummary& AddAwsResourceTypes(AwsResourceTypesT&& value) {
    m_awsResourceTypesHasBeenSet = true;
    m_awsResourceTypes.emplace_back(std::forward<AwsResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The granularity level at which the check operates: resource, account, or
   * account_region.</p>
   */
  inline const Aws::String& GetCheckGranularity() const { return m_checkGranularity; }
  inline bool CheckGranularityHasBeenSet() const { return m_checkGranularityHasBeenSet; }
  template <typename CheckGranularityT = Aws::String>
  void SetCheckGranularity(CheckGranularityT&& value) {
    m_checkGranularityHasBeenSet = true;
    m_checkGranularity = std::forward<CheckGranularityT>(value);
  }
  template <typename CheckGranularityT = Aws::String>
  CheckSummary& WithCheckGranularity(CheckGranularityT&& value) {
    SetCheckGranularity(std::forward<CheckGranularityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation identifier associated with the check.</p>
   */
  inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
  inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
  template <typename RecommendationIdT = Aws::String>
  void SetRecommendationId(RecommendationIdT&& value) {
    m_recommendationIdHasBeenSet = true;
    m_recommendationId = std::forward<RecommendationIdT>(value);
  }
  template <typename RecommendationIdT = Aws::String>
  CheckSummary& WithRecommendationId(RecommendationIdT&& value) {
    SetRecommendationId(std::forward<RecommendationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<RecommendationPillar> m_pillars;

  Aws::Vector<Aws::String> m_awsServices;

  RecommendationSource m_source{RecommendationSource::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_metadata;

  bool m_resourceArnQueryable{false};

  Aws::Vector<Aws::String> m_awsResourceTypes;

  Aws::String m_checkGranularity;

  Aws::String m_recommendationId;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_awsServicesHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_resourceArnQueryableHasBeenSet = false;
  bool m_awsResourceTypesHasBeenSet = false;
  bool m_checkGranularityHasBeenSet = false;
  bool m_recommendationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
