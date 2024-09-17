/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/GeneratedManifestEncryption.h>
#include <aws/s3control/model/GeneratedManifestFormat.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Location details for where the generated manifest should be
   * written.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ManifestOutputLocation">AWS
   * API Reference</a></p>
   */
  class S3ManifestOutputLocation
  {
  public:
    AWS_S3CONTROL_API S3ManifestOutputLocation();
    AWS_S3CONTROL_API S3ManifestOutputLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ManifestOutputLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Account ID that owns the bucket the generated manifest is written to.</p>
     */
    inline const Aws::String& GetExpectedManifestBucketOwner() const{ return m_expectedManifestBucketOwner; }
    inline bool ExpectedManifestBucketOwnerHasBeenSet() const { return m_expectedManifestBucketOwnerHasBeenSet; }
    inline void SetExpectedManifestBucketOwner(const Aws::String& value) { m_expectedManifestBucketOwnerHasBeenSet = true; m_expectedManifestBucketOwner = value; }
    inline void SetExpectedManifestBucketOwner(Aws::String&& value) { m_expectedManifestBucketOwnerHasBeenSet = true; m_expectedManifestBucketOwner = std::move(value); }
    inline void SetExpectedManifestBucketOwner(const char* value) { m_expectedManifestBucketOwnerHasBeenSet = true; m_expectedManifestBucketOwner.assign(value); }
    inline S3ManifestOutputLocation& WithExpectedManifestBucketOwner(const Aws::String& value) { SetExpectedManifestBucketOwner(value); return *this;}
    inline S3ManifestOutputLocation& WithExpectedManifestBucketOwner(Aws::String&& value) { SetExpectedManifestBucketOwner(std::move(value)); return *this;}
    inline S3ManifestOutputLocation& WithExpectedManifestBucketOwner(const char* value) { SetExpectedManifestBucketOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket ARN the generated manifest should be written to.</p>  <p>
     * <b>Directory buckets</b> - Directory buckets aren't supported as the buckets to
     * store the generated manifest.</p> 
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline S3ManifestOutputLocation& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline S3ManifestOutputLocation& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline S3ManifestOutputLocation& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefix identifying one or more objects to which the manifest applies.</p>
     */
    inline const Aws::String& GetManifestPrefix() const{ return m_manifestPrefix; }
    inline bool ManifestPrefixHasBeenSet() const { return m_manifestPrefixHasBeenSet; }
    inline void SetManifestPrefix(const Aws::String& value) { m_manifestPrefixHasBeenSet = true; m_manifestPrefix = value; }
    inline void SetManifestPrefix(Aws::String&& value) { m_manifestPrefixHasBeenSet = true; m_manifestPrefix = std::move(value); }
    inline void SetManifestPrefix(const char* value) { m_manifestPrefixHasBeenSet = true; m_manifestPrefix.assign(value); }
    inline S3ManifestOutputLocation& WithManifestPrefix(const Aws::String& value) { SetManifestPrefix(value); return *this;}
    inline S3ManifestOutputLocation& WithManifestPrefix(Aws::String&& value) { SetManifestPrefix(std::move(value)); return *this;}
    inline S3ManifestOutputLocation& WithManifestPrefix(const char* value) { SetManifestPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what encryption should be used when the generated manifest objects
     * are written.</p>
     */
    inline const GeneratedManifestEncryption& GetManifestEncryption() const{ return m_manifestEncryption; }
    inline bool ManifestEncryptionHasBeenSet() const { return m_manifestEncryptionHasBeenSet; }
    inline void SetManifestEncryption(const GeneratedManifestEncryption& value) { m_manifestEncryptionHasBeenSet = true; m_manifestEncryption = value; }
    inline void SetManifestEncryption(GeneratedManifestEncryption&& value) { m_manifestEncryptionHasBeenSet = true; m_manifestEncryption = std::move(value); }
    inline S3ManifestOutputLocation& WithManifestEncryption(const GeneratedManifestEncryption& value) { SetManifestEncryption(value); return *this;}
    inline S3ManifestOutputLocation& WithManifestEncryption(GeneratedManifestEncryption&& value) { SetManifestEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the generated manifest.</p>
     */
    inline const GeneratedManifestFormat& GetManifestFormat() const{ return m_manifestFormat; }
    inline bool ManifestFormatHasBeenSet() const { return m_manifestFormatHasBeenSet; }
    inline void SetManifestFormat(const GeneratedManifestFormat& value) { m_manifestFormatHasBeenSet = true; m_manifestFormat = value; }
    inline void SetManifestFormat(GeneratedManifestFormat&& value) { m_manifestFormatHasBeenSet = true; m_manifestFormat = std::move(value); }
    inline S3ManifestOutputLocation& WithManifestFormat(const GeneratedManifestFormat& value) { SetManifestFormat(value); return *this;}
    inline S3ManifestOutputLocation& WithManifestFormat(GeneratedManifestFormat&& value) { SetManifestFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_expectedManifestBucketOwner;
    bool m_expectedManifestBucketOwnerHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_manifestPrefix;
    bool m_manifestPrefixHasBeenSet = false;

    GeneratedManifestEncryption m_manifestEncryption;
    bool m_manifestEncryptionHasBeenSet = false;

    GeneratedManifestFormat m_manifestFormat;
    bool m_manifestFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
