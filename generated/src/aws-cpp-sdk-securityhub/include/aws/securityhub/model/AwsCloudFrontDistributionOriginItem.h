/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginS3OriginConfig.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginCustomOriginConfig.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A complex type that describes the Amazon S3 bucket, HTTP server (for example,
   * a web server), Elemental MediaStore, or other server from which CloudFront gets
   * your files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginItem">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginItem
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon S3 origins: The DNS name of the S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AwsCloudFrontDistributionOriginItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline const Aws::String& GetOriginPath() const{ return m_originPath; }
    inline bool OriginPathHasBeenSet() const { return m_originPathHasBeenSet; }
    inline void SetOriginPath(const Aws::String& value) { m_originPathHasBeenSet = true; m_originPath = value; }
    inline void SetOriginPath(Aws::String&& value) { m_originPathHasBeenSet = true; m_originPath = std::move(value); }
    inline void SetOriginPath(const char* value) { m_originPathHasBeenSet = true; m_originPath.assign(value); }
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(const Aws::String& value) { SetOriginPath(value); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(Aws::String&& value) { SetOriginPath(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(const char* value) { SetOriginPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An origin that is an S3 bucket that is not configured with static website
     * hosting.</p>
     */
    inline const AwsCloudFrontDistributionOriginS3OriginConfig& GetS3OriginConfig() const{ return m_s3OriginConfig; }
    inline bool S3OriginConfigHasBeenSet() const { return m_s3OriginConfigHasBeenSet; }
    inline void SetS3OriginConfig(const AwsCloudFrontDistributionOriginS3OriginConfig& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = value; }
    inline void SetS3OriginConfig(AwsCloudFrontDistributionOriginS3OriginConfig&& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = std::move(value); }
    inline AwsCloudFrontDistributionOriginItem& WithS3OriginConfig(const AwsCloudFrontDistributionOriginS3OriginConfig& value) { SetS3OriginConfig(value); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithS3OriginConfig(AwsCloudFrontDistributionOriginS3OriginConfig&& value) { SetS3OriginConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An origin that is not an Amazon S3 bucket, with one exception. If the Amazon
     * S3 bucket is configured with static website hosting, use this attribute. If the
     * Amazon S3 bucket is not configured with static website hosting, use the
     * <code>S3OriginConfig</code> type instead. </p>
     */
    inline const AwsCloudFrontDistributionOriginCustomOriginConfig& GetCustomOriginConfig() const{ return m_customOriginConfig; }
    inline bool CustomOriginConfigHasBeenSet() const { return m_customOriginConfigHasBeenSet; }
    inline void SetCustomOriginConfig(const AwsCloudFrontDistributionOriginCustomOriginConfig& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = value; }
    inline void SetCustomOriginConfig(AwsCloudFrontDistributionOriginCustomOriginConfig&& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = std::move(value); }
    inline AwsCloudFrontDistributionOriginItem& WithCustomOriginConfig(const AwsCloudFrontDistributionOriginCustomOriginConfig& value) { SetCustomOriginConfig(value); return *this;}
    inline AwsCloudFrontDistributionOriginItem& WithCustomOriginConfig(AwsCloudFrontDistributionOriginCustomOriginConfig&& value) { SetCustomOriginConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_originPath;
    bool m_originPathHasBeenSet = false;

    AwsCloudFrontDistributionOriginS3OriginConfig m_s3OriginConfig;
    bool m_s3OriginConfigHasBeenSet = false;

    AwsCloudFrontDistributionOriginCustomOriginConfig m_customOriginConfig;
    bool m_customOriginConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
