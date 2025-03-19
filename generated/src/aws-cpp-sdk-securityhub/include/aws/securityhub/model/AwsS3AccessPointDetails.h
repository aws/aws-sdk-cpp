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
    AWS_SECURITYHUB_API AwsS3AccessPointDetails() = default;
    AWS_SECURITYHUB_API AwsS3AccessPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3AccessPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the access point. </p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    AwsS3AccessPointDetails& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name or alias of the access point. </p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    AwsS3AccessPointDetails& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the S3 bucket associated with the specified access point. </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    AwsS3AccessPointDetails& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point. </p>
     */
    inline const Aws::String& GetBucketAccountId() const { return m_bucketAccountId; }
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }
    template<typename BucketAccountIdT = Aws::String>
    void SetBucketAccountId(BucketAccountIdT&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::forward<BucketAccountIdT>(value); }
    template<typename BucketAccountIdT = Aws::String>
    AwsS3AccessPointDetails& WithBucketAccountId(BucketAccountIdT&& value) { SetBucketAccountId(std::forward<BucketAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the specified access point. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsS3AccessPointDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether this access point allows access from the public internet.
     * </p>
     */
    inline const Aws::String& GetNetworkOrigin() const { return m_networkOrigin; }
    inline bool NetworkOriginHasBeenSet() const { return m_networkOriginHasBeenSet; }
    template<typename NetworkOriginT = Aws::String>
    void SetNetworkOrigin(NetworkOriginT&& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = std::forward<NetworkOriginT>(value); }
    template<typename NetworkOriginT = Aws::String>
    AwsS3AccessPointDetails& WithNetworkOrigin(NetworkOriginT&& value) { SetNetworkOrigin(std::forward<NetworkOriginT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsS3AccountPublicAccessBlockDetails& GetPublicAccessBlockConfiguration() const { return m_publicAccessBlockConfiguration; }
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }
    template<typename PublicAccessBlockConfigurationT = AwsS3AccountPublicAccessBlockDetails>
    void SetPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::forward<PublicAccessBlockConfigurationT>(value); }
    template<typename PublicAccessBlockConfigurationT = AwsS3AccountPublicAccessBlockDetails>
    AwsS3AccessPointDetails& WithPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { SetPublicAccessBlockConfiguration(std::forward<PublicAccessBlockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the virtual private cloud (VPC) configuration for the specified
     * access point. </p>
     */
    inline const AwsS3AccessPointVpcConfigurationDetails& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = AwsS3AccessPointVpcConfigurationDetails>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = AwsS3AccessPointVpcConfigurationDetails>
    AwsS3AccessPointDetails& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}
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
