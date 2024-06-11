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
    AWS_SSM_API ResourceDataSyncS3Destination();
    AWS_SSM_API ResourceDataSyncS3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncS3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket where the aggregated data is stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline ResourceDataSyncS3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline ResourceDataSyncS3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline ResourceDataSyncS3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 prefix for the bucket.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ResourceDataSyncS3Destination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ResourceDataSyncS3Destination& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ResourceDataSyncS3Destination& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A supported sync format. The following format is currently supported:
     * JsonSerDe</p>
     */
    inline const ResourceDataSyncS3Format& GetSyncFormat() const{ return m_syncFormat; }
    inline bool SyncFormatHasBeenSet() const { return m_syncFormatHasBeenSet; }
    inline void SetSyncFormat(const ResourceDataSyncS3Format& value) { m_syncFormatHasBeenSet = true; m_syncFormat = value; }
    inline void SetSyncFormat(ResourceDataSyncS3Format&& value) { m_syncFormatHasBeenSet = true; m_syncFormat = std::move(value); }
    inline ResourceDataSyncS3Destination& WithSyncFormat(const ResourceDataSyncS3Format& value) { SetSyncFormat(value); return *this;}
    inline ResourceDataSyncS3Destination& WithSyncFormat(ResourceDataSyncS3Format&& value) { SetSyncFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region with the S3 bucket targeted by the resource
     * data sync.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ResourceDataSyncS3Destination& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ResourceDataSyncS3Destination& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ResourceDataSyncS3Destination& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an encryption key for a destination in Amazon S3. Must belong to
     * the same Region as the destination S3 bucket.</p>
     */
    inline const Aws::String& GetAWSKMSKeyARN() const{ return m_aWSKMSKeyARN; }
    inline bool AWSKMSKeyARNHasBeenSet() const { return m_aWSKMSKeyARNHasBeenSet; }
    inline void SetAWSKMSKeyARN(const Aws::String& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = value; }
    inline void SetAWSKMSKeyARN(Aws::String&& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = std::move(value); }
    inline void SetAWSKMSKeyARN(const char* value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN.assign(value); }
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(const Aws::String& value) { SetAWSKMSKeyARN(value); return *this;}
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(Aws::String&& value) { SetAWSKMSKeyARN(std::move(value)); return *this;}
    inline ResourceDataSyncS3Destination& WithAWSKMSKeyARN(const char* value) { SetAWSKMSKeyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables destination data sharing. By default, this field is
     * <code>null</code>.</p>
     */
    inline const ResourceDataSyncDestinationDataSharing& GetDestinationDataSharing() const{ return m_destinationDataSharing; }
    inline bool DestinationDataSharingHasBeenSet() const { return m_destinationDataSharingHasBeenSet; }
    inline void SetDestinationDataSharing(const ResourceDataSyncDestinationDataSharing& value) { m_destinationDataSharingHasBeenSet = true; m_destinationDataSharing = value; }
    inline void SetDestinationDataSharing(ResourceDataSyncDestinationDataSharing&& value) { m_destinationDataSharingHasBeenSet = true; m_destinationDataSharing = std::move(value); }
    inline ResourceDataSyncS3Destination& WithDestinationDataSharing(const ResourceDataSyncDestinationDataSharing& value) { SetDestinationDataSharing(value); return *this;}
    inline ResourceDataSyncS3Destination& WithDestinationDataSharing(ResourceDataSyncDestinationDataSharing&& value) { SetDestinationDataSharing(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    ResourceDataSyncS3Format m_syncFormat;
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
