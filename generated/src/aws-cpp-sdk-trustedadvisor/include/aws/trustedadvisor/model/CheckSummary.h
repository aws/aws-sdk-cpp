/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>
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
   * <p>A summary of an AWS Trusted Advisor Check</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/CheckSummary">AWS
   * API Reference</a></p>
   */
  class CheckSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API CheckSummary() = default;
    AWS_TRUSTEDADVISOR_API CheckSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API CheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CheckSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
    inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
    template<typename AwsServicesT = Aws::Vector<Aws::String>>
    void SetAwsServices(AwsServicesT&& value) { m_awsServicesHasBeenSet = true; m_awsServices = std::forward<AwsServicesT>(value); }
    template<typename AwsServicesT = Aws::Vector<Aws::String>>
    CheckSummary& WithAwsServices(AwsServicesT&& value) { SetAwsServices(std::forward<AwsServicesT>(value)); return *this;}
    template<typename AwsServicesT = Aws::String>
    CheckSummary& AddAwsServices(AwsServicesT&& value) { m_awsServicesHasBeenSet = true; m_awsServices.emplace_back(std::forward<AwsServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CheckSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CheckSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    CheckSummary& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    CheckSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CheckSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline const Aws::Vector<RecommendationPillar>& GetPillars() const { return m_pillars; }
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
    template<typename PillarsT = Aws::Vector<RecommendationPillar>>
    void SetPillars(PillarsT&& value) { m_pillarsHasBeenSet = true; m_pillars = std::forward<PillarsT>(value); }
    template<typename PillarsT = Aws::Vector<RecommendationPillar>>
    CheckSummary& WithPillars(PillarsT&& value) { SetPillars(std::forward<PillarsT>(value)); return *this;}
    inline CheckSummary& AddPillars(RecommendationPillar value) { m_pillarsHasBeenSet = true; m_pillars.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source of the Recommendation</p>
     */
    inline RecommendationSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(RecommendationSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline CheckSummary& WithSource(RecommendationSource value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsServices;
    bool m_awsServicesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RecommendationPillar> m_pillars;
    bool m_pillarsHasBeenSet = false;

    RecommendationSource m_source{RecommendationSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
