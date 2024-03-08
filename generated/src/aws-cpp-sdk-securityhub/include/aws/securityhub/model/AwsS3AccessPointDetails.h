/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3AccountPublicAccessBlockDetails.h>
#include <aws/securityhub/model/AwsS3AccessPointVpcConfigurationDetails.h>
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
   * <p> Returns configuration information about the specified Amazon S3 access
   * point. S3 access points are named network endpoints that are attached to buckets
   * that you can use to perform S3 object operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3AccessPointDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3AccessPointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3AccessPointDetails();
    AWS_SECURITYHUB_API AwsS3AccessPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3AccessPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p> The name or alias of the access point. </p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p> The name or alias of the access point. </p>
     */
    inline AwsS3AccessPointDetails& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline const Aws::String& GetBucketAccountId() const{ return m_bucketAccountId; }

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline void SetBucketAccountId(const Aws::String& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = value; }

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline void SetBucketAccountId(Aws::String&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline void SetBucketAccountId(const char* value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucketAccountId(const Aws::String& value) { SetBucketAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucketAccountId(Aws::String&& value) { SetBucketAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline AwsS3AccessPointDetails& WithBucketAccountId(const char* value) { SetBucketAccountId(value); return *this;}


    /**
     * <p> The name of the specified access point. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the specified access point. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the specified access point. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the specified access point. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the specified access point. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the specified access point. </p>
     */
    inline AwsS3AccessPointDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline const Aws::String& GetNetworkOrigin() const{ return m_networkOrigin; }

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline bool NetworkOriginHasBeenSet() const { return m_networkOriginHasBeenSet; }

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline void SetNetworkOrigin(const Aws::String& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = value; }

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline void SetNetworkOrigin(Aws::String&& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = std::move(value); }

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline void SetNetworkOrigin(const char* value) { m_networkOriginHasBeenSet = true; m_networkOrigin.assign(value); }

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline AwsS3AccessPointDetails& WithNetworkOrigin(const Aws::String& value) { SetNetworkOrigin(value); return *this;}

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline AwsS3AccessPointDetails& WithNetworkOrigin(Aws::String&& value) { SetNetworkOrigin(std::move(value)); return *this;}

    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline AwsS3AccessPointDetails& WithNetworkOrigin(const char* value) { SetNetworkOrigin(value); return *this;}


    
    inline const AwsS3AccountPublicAccessBlockDetails& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }

    
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }

    
    inline void SetPublicAccessBlockConfiguration(const AwsS3AccountPublicAccessBlockDetails& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = value; }

    
    inline void SetPublicAccessBlockConfiguration(AwsS3AccountPublicAccessBlockDetails&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::move(value); }

    
    inline AwsS3AccessPointDetails& WithPublicAccessBlockConfiguration(const AwsS3AccountPublicAccessBlockDetails& value) { SetPublicAccessBlockConfiguration(value); return *this;}

    
    inline AwsS3AccessPointDetails& WithPublicAccessBlockConfiguration(AwsS3AccountPublicAccessBlockDetails&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}


    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline const AwsS3AccessPointVpcConfigurationDetails& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline void SetVpcConfiguration(const AwsS3AccessPointVpcConfigurationDetails& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline void SetVpcConfiguration(AwsS3AccessPointVpcConfigurationDetails&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline AwsS3AccessPointDetails& WithVpcConfiguration(const AwsS3AccessPointVpcConfigurationDetails& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline AwsS3AccessPointDetails& WithVpcConfiguration(AwsS3AccessPointVpcConfigurationDetails&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_networkOrigin;
    bool m_networkOriginHasBeenSet = false;

    AwsS3AccountPublicAccessBlockDetails m_publicAccessBlockConfiguration;
    bool m_publicAccessBlockConfigurationHasBeenSet = false;

    AwsS3AccessPointVpcConfigurationDetails m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
