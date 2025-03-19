/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>
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
   * <p>Summary of a Recommendation Resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationResourceSummary">AWS
   * API Reference</a></p>
   */
  class RecommendationResourceSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary() = default;
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RecommendationResourceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS resource identifier</p>
     */
    inline const Aws::String& GetAwsResourceId() const { return m_awsResourceId; }
    inline bool AwsResourceIdHasBeenSet() const { return m_awsResourceIdHasBeenSet; }
    template<typename AwsResourceIdT = Aws::String>
    void SetAwsResourceId(AwsResourceIdT&& value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId = std::forward<AwsResourceIdT>(value); }
    template<typename AwsResourceIdT = Aws::String>
    RecommendationResourceSummary& WithAwsResourceId(AwsResourceIdT&& value) { SetAwsResourceId(std::forward<AwsResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion status of the Recommendation Resource</p>
     */
    inline ExclusionStatus GetExclusionStatus() const { return m_exclusionStatus; }
    inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
    inline void SetExclusionStatus(ExclusionStatus value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = value; }
    inline RecommendationResourceSummary& WithExclusionStatus(ExclusionStatus value) { SetExclusionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RecommendationResourceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    RecommendationResourceSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    RecommendationResourceSummary& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    RecommendationResourceSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Recommendation ARN</p>
     */
    inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
    inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
    template<typename RecommendationArnT = Aws::String>
    void SetRecommendationArn(RecommendationArnT&& value) { m_recommendationArnHasBeenSet = true; m_recommendationArn = std::forward<RecommendationArnT>(value); }
    template<typename RecommendationArnT = Aws::String>
    RecommendationResourceSummary& WithRecommendationArn(RecommendationArnT&& value) { SetRecommendationArn(std::forward<RecommendationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline const Aws::String& GetRegionCode() const { return m_regionCode; }
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }
    template<typename RegionCodeT = Aws::String>
    void SetRegionCode(RegionCodeT&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::forward<RegionCodeT>(value); }
    template<typename RegionCodeT = Aws::String>
    RecommendationResourceSummary& WithRegionCode(RegionCodeT&& value) { SetRegionCode(std::forward<RegionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecommendationResourceSummary& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_awsResourceId;
    bool m_awsResourceIdHasBeenSet = false;

    ExclusionStatus m_exclusionStatus{ExclusionStatus::NOT_SET};
    bool m_exclusionStatusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_recommendationArn;
    bool m_recommendationArnHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
