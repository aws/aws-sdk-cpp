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
   * <p>Organization Recommendation Resource Summary</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/OrganizationRecommendationResourceSummary">AWS
   * API Reference</a></p>
   */
  class OrganizationRecommendationResourceSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationResourceSummary();
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API OrganizationRecommendationResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account ID</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Recommendation Resource</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS resource identifier</p>
     */
    inline const Aws::String& GetAwsResourceId() const{ return m_awsResourceId; }
    inline bool AwsResourceIdHasBeenSet() const { return m_awsResourceIdHasBeenSet; }
    inline void SetAwsResourceId(const Aws::String& value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId = value; }
    inline void SetAwsResourceId(Aws::String&& value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId = std::move(value); }
    inline void SetAwsResourceId(const char* value) { m_awsResourceIdHasBeenSet = true; m_awsResourceId.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithAwsResourceId(const Aws::String& value) { SetAwsResourceId(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithAwsResourceId(Aws::String&& value) { SetAwsResourceId(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithAwsResourceId(const char* value) { SetAwsResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion status of the Recommendation Resource</p>
     */
    inline const ExclusionStatus& GetExclusionStatus() const{ return m_exclusionStatus; }
    inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
    inline void SetExclusionStatus(const ExclusionStatus& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = value; }
    inline void SetExclusionStatus(ExclusionStatus&& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = std::move(value); }
    inline OrganizationRecommendationResourceSummary& WithExclusionStatus(const ExclusionStatus& value) { SetExclusionStatus(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithExclusionStatus(ExclusionStatus&& value) { SetExclusionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recommendation Resource</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation Resource was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline OrganizationRecommendationResourceSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata associated with the Recommendation Resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline OrganizationRecommendationResourceSummary& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline OrganizationRecommendationResourceSummary& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Recommendation ARN</p>
     */
    inline const Aws::String& GetRecommendationArn() const{ return m_recommendationArn; }
    inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
    inline void SetRecommendationArn(const Aws::String& value) { m_recommendationArnHasBeenSet = true; m_recommendationArn = value; }
    inline void SetRecommendationArn(Aws::String&& value) { m_recommendationArnHasBeenSet = true; m_recommendationArn = std::move(value); }
    inline void SetRecommendationArn(const char* value) { m_recommendationArnHasBeenSet = true; m_recommendationArn.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithRecommendationArn(const Aws::String& value) { SetRecommendationArn(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithRecommendationArn(Aws::String&& value) { SetRecommendationArn(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithRecommendationArn(const char* value) { SetRecommendationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region code that the Recommendation Resource is in</p>
     */
    inline const Aws::String& GetRegionCode() const{ return m_regionCode; }
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }
    inline void SetRegionCode(const Aws::String& value) { m_regionCodeHasBeenSet = true; m_regionCode = value; }
    inline void SetRegionCode(Aws::String&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::move(value); }
    inline void SetRegionCode(const char* value) { m_regionCodeHasBeenSet = true; m_regionCode.assign(value); }
    inline OrganizationRecommendationResourceSummary& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}
    inline OrganizationRecommendationResourceSummary& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Recommendation Resource</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OrganizationRecommendationResourceSummary& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline OrganizationRecommendationResourceSummary& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_awsResourceId;
    bool m_awsResourceIdHasBeenSet = false;

    ExclusionStatus m_exclusionStatus;
    bool m_exclusionStatusHasBeenSet = false;

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
