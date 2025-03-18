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
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon S3 origins: The DNS name of the S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsCloudFrontDistributionOriginItem& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsCloudFrontDistributionOriginItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline const Aws::String& GetOriginPath() const { return m_originPath; }
    inline bool OriginPathHasBeenSet() const { return m_originPathHasBeenSet; }
    template<typename OriginPathT = Aws::String>
    void SetOriginPath(OriginPathT&& value) { m_originPathHasBeenSet = true; m_originPath = std::forward<OriginPathT>(value); }
    template<typename OriginPathT = Aws::String>
    AwsCloudFrontDistributionOriginItem& WithOriginPath(OriginPathT&& value) { SetOriginPath(std::forward<OriginPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An origin that is an S3 bucket that is not configured with static website
     * hosting.</p>
     */
    inline const AwsCloudFrontDistributionOriginS3OriginConfig& GetS3OriginConfig() const { return m_s3OriginConfig; }
    inline bool S3OriginConfigHasBeenSet() const { return m_s3OriginConfigHasBeenSet; }
    template<typename S3OriginConfigT = AwsCloudFrontDistributionOriginS3OriginConfig>
    void SetS3OriginConfig(S3OriginConfigT&& value) { m_s3OriginConfigHasBeenSet = true; m_s3OriginConfig = std::forward<S3OriginConfigT>(value); }
    template<typename S3OriginConfigT = AwsCloudFrontDistributionOriginS3OriginConfig>
    AwsCloudFrontDistributionOriginItem& WithS3OriginConfig(S3OriginConfigT&& value) { SetS3OriginConfig(std::forward<S3OriginConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An origin that is not an Amazon S3 bucket, with one exception. If the Amazon
     * S3 bucket is configured with static website hosting, use this attribute. If the
     * Amazon S3 bucket is not configured with static website hosting, use the
     * <code>S3OriginConfig</code> type instead. </p>
     */
    inline const AwsCloudFrontDistributionOriginCustomOriginConfig& GetCustomOriginConfig() const { return m_customOriginConfig; }
    inline bool CustomOriginConfigHasBeenSet() const { return m_customOriginConfigHasBeenSet; }
    template<typename CustomOriginConfigT = AwsCloudFrontDistributionOriginCustomOriginConfig>
    void SetCustomOriginConfig(CustomOriginConfigT&& value) { m_customOriginConfigHasBeenSet = true; m_customOriginConfig = std::forward<CustomOriginConfigT>(value); }
    template<typename CustomOriginConfigT = AwsCloudFrontDistributionOriginCustomOriginConfig>
    AwsCloudFrontDistributionOriginItem& WithCustomOriginConfig(CustomOriginConfigT&& value) { SetCustomOriginConfig(std::forward<CustomOriginConfigT>(value)); return *this;}
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
