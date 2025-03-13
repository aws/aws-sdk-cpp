/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncS3Format.h>
#include <aws/ssm/model/ResourceDataSyncDestinationDataSharing.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the target S3 bucket for the resource data
   * sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncS3Destination">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncS3Destination
  {
  public:
    AWS_SSM_API ResourceDataSyncS3Destination() = default;
    AWS_SSM_API ResourceDataSyncS3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncS3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket where the aggregated data is stored.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    ResourceDataSyncS3Destination& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ResourceDataSyncS3Destination& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline ResourceDataSyncS3Format GetSyncFormat() const { return m_syncFormat; }
    inline bool SyncFormatHasBeenSet() const { return m_syncFormatHasBeenSet; }
    inline void SetSyncFormat(ResourceDataSyncS3Format value) { m_syncFormatHasBeenSet = true; m_syncFormat = value; }
    inline ResourceDataSyncS3Destination& WithSyncFormat(ResourceDataSyncS3Format value) { SetSyncFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region with the S3 bucket targeted by the resource
     * data sync.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ResourceDataSyncS3Destination& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination S3 bucket.</p>
     */
    inline const Aws::String& GetAWSKMSKeyARN() const { return m_aWSKMSKeyARN; }
    inline bool AWSKMSKeyARNHasBeenSet() const { return m_aWSKMSKeyARNHasBeenSet; }
    template<typename AWSKMSKeyARNT = Aws::String>
    void SetAWSKMSKeyARN(AWSKMSKeyARNT&& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = std::forward<AWSKMSKeyARNT>(value); }
    template<typename AWSKMSKeyARNT = Aws::String>
    ResourceDataSyncS3Destination& WithAWSKMSKeyARN(AWSKMSKeyARNT&& value) { SetAWSKMSKeyARN(std::forward<AWSKMSKeyARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables destination data sharing. By default, this field is
     * <code>null</code>.</p>
     */
    inline const ResourceDataSyncDestinationDataSharing& GetDestinationDataSharing() const { return m_destinationDataSharing; }
    inline bool DestinationDataSharingHasBeenSet() const { return m_destinationDataSharingHasBeenSet; }
    template<typename DestinationDataSharingT = ResourceDataSyncDestinationDataSharing>
    void SetDestinationDataSharing(DestinationDataSharingT&& value) { m_destinationDataSharingHasBeenSet = true; m_destinationDataSharing = std::forward<DestinationDataSharingT>(value); }
    template<typename DestinationDataSharingT = ResourceDataSyncDestinationDataSharing>
    ResourceDataSyncS3Destination& WithDestinationDataSharing(DestinationDataSharingT&& value) { SetDestinationDataSharing(std::forward<DestinationDataSharingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    ResourceDataSyncS3Format m_syncFormat{ResourceDataSyncS3Format::NOT_SET};
    bool m_syncFormatHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_aWSKMSKeyARN;
    bool m_aWSKMSKeyARNHasBeenSet = false;

    ResourceDataSyncDestinationDataSharing m_destinationDataSharing;
    bool m_destinationDataSharingHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
