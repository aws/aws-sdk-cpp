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
    AWS_TRUSTEDADVISOR_API CheckSummary();
    AWS_TRUSTEDADVISOR_API CheckSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API CheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsServices() const{ return m_awsServices; }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline void SetAwsServices(const Aws::Vector<Aws::String>& value) { m_awsServicesHasBeenSet = true; m_awsServices = value; }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline void SetAwsServices(Aws::Vector<Aws::String>&& value) { m_awsServicesHasBeenSet = true; m_awsServices = std::move(value); }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline CheckSummary& WithAwsServices(const Aws::Vector<Aws::String>& value) { SetAwsServices(value); return *this;}

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline CheckSummary& WithAwsServices(Aws::Vector<Aws::String>&& value) { SetAwsServices(std::move(value)); return *this;}

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline CheckSummary& AddAwsServices(const Aws::String& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(value); return *this; }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline CheckSummary& AddAwsServices(Aws::String&& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS Services that the Check applies to</p>
     */
    inline CheckSummary& AddAwsServices(const char* value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(value); return *this; }


    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline CheckSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline CheckSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of what the AWS Trusted Advisor Check is monitoring</p>
     */
    inline CheckSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The column headings for the metadata returned in the resource</p>
     */
    inline CheckSummary& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Trusted Advisor Check</p>
     */
    inline CheckSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline const Aws::Vector<RecommendationPillar>& GetPillars() const{ return m_pillars; }

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline void SetPillars(const Aws::Vector<RecommendationPillar>& value) { m_pillarsHasBeenSet = true; m_pillars = value; }

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline void SetPillars(Aws::Vector<RecommendationPillar>&& value) { m_pillarsHasBeenSet = true; m_pillars = std::move(value); }

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline CheckSummary& WithPillars(const Aws::Vector<RecommendationPillar>& value) { SetPillars(value); return *this;}

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline CheckSummary& WithPillars(Aws::Vector<RecommendationPillar>&& value) { SetPillars(std::move(value)); return *this;}

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline CheckSummary& AddPillars(const RecommendationPillar& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(value); return *this; }

    /**
     * <p>The Recommendation pillars that the AWS Trusted Advisor Check falls under</p>
     */
    inline CheckSummary& AddPillars(RecommendationPillar&& value) { m_pillarsHasBeenSet = true; m_pillars.push_back(std::move(value)); return *this; }


    /**
     * <p>The source of the Recommendation</p>
     */
    inline const RecommendationSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline void SetSource(const RecommendationSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline void SetSource(RecommendationSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline CheckSummary& WithSource(const RecommendationSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the Recommendation</p>
     */
    inline CheckSummary& WithSource(RecommendationSource&& value) { SetSource(std::move(value)); return *this;}

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

    RecommendationSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
