/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary();
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API RecommendationResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The AWS resource identifier</p>
     */
    inline const Aws::String& GetAwsResourceId() const{ return m_awsResourceId; }

    /**
     * <p>The AWS resource identifier</p>
     */
    inline bool AwsResourceIdHasBeenSet() const { return m_awsResourceIdHasBeenSet; }

    /**
     * <p>The AWS resource identifier</p>
     */
    inline void SetAwsResourceId(const Aws::String& value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId = value; }

    /**
     * <p>The AWS resource identifier</p>
     */
    inline void SetAwsResourceId(Aws::String&& value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId = std::move(value); }

    /**
     * <p>The AWS resource identifier</p>
     */
    inline void SetAwsResourceId(const char* value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId.assign(value); }

    /**
     * <p>The AWS resource identifier</p>
     */
    inline RecommendationResourceSummary& WithAwsResourceId(const Aws::String& value) { SetAwsResourceId(value); return *this;}

    /**
     * <p>The AWS resource identifier</p>
     */
    inline RecommendationResourceSummary& WithAwsResourceId(Aws::String&& value) { SetAwsResourceId(std::move(value)); return *this;}

    /**
     * <p>The AWS resource identifier</p>
     */
    inline RecommendationResourceSummary& WithAwsResourceId(const char* value) { SetAwsResourceId(value); return *this;}


    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline RecommendationResourceSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline RecommendationResourceSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The Recommendation ARN</p>
     */
    inline const Aws::String& GetRecommendationArn() const{ return m_recommendationArn; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetRecommendationArn(const Aws::String& value) { m_recommendationArnHasBeenSet = true; m_recommendationArn = value; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetRecommendationArn(Aws::String&& value) { m_recommendationArnHasBeenSet = true; m_recommendationArn = std::move(value); }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetRecommendationArn(const char* value) { m_recommendationArnHasBeenSet = true; m_recommendationArn.assign(value); }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline RecommendationResourceSummary& WithRecommendationArn(const Aws::String& value) { SetRecommendationArn(value); return *this;}

    /**
     * <p>The Recommendation ARN</p>
     */
    inline RecommendationResourceSummary& WithRecommendationArn(Aws::String&& value) { SetRecommendationArn(std::move(value)); return *this;}

    /**
     * <p>The Recommendation ARN</p>
     */
    inline RecommendationResourceSummary& WithRecommendationArn(const char* value) { SetRecommendationArn(value); return *this;}


    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline const Aws::String& GetRegionCode() const{ return m_regionCode; }

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline void SetRegionCode(const Aws::String& value) { m_regionCodeHasBeenSet = true; m_regionCode = value; }

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline void SetRegionCode(Aws::String&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::move(value); }

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline void SetRegionCode(const char* value) { m_regionCodeHasBeenSet = true; m_regionCode.assign(value); }

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline RecommendationResourceSummary& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline RecommendationResourceSummary& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}

    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline RecommendationResourceSummary& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}


    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline RecommendationResourceSummary& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_awsResourceId;
    bool m_awsResourceIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_recommendationArn;
    bool m_recommendationArnHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
