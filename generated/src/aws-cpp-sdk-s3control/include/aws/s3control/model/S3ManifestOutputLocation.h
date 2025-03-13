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
    AWS_S3CONTROL_API S3ManifestOutputLocation() = default;
    AWS_S3CONTROL_API S3ManifestOutputLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ManifestOutputLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Account ID that owns the bucket the generated manifest is written to.</p>
     */
    inline const Aws::String& GetExpectedManifestBucketOwner() const { return m_expectedManifestBucketOwner; }
    inline bool ExpectedManifestBucketOwnerHasBeenSet() const { return m_expectedManifestBucketOwnerHasBeenSet; }
    template<typename ExpectedManifestBucketOwnerT = Aws::String>
    void SetExpectedManifestBucketOwner(ExpectedManifestBucketOwnerT&& value) { m_expectedManifestBucketOwnerHasBeenSet = true; m_expectedManifestBucketOwner = std::forward<ExpectedManifestBucketOwnerT>(value); }
    template<typename ExpectedManifestBucketOwnerT = Aws::String>
    S3ManifestOutputLocation& WithExpectedManifestBucketOwner(ExpectedManifestBucketOwnerT&& value) { SetExpectedManifestBucketOwner(std::forward<ExpectedManifestBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket ARN the generated manifest should be written to.</p>  <p>
     * <b>Directory buckets</b> - Directory buckets aren't supported as the buckets to
     * store the generated manifest.</p> 
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3ManifestOutputLocation& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefix identifying one or more objects to which the manifest applies.</p>
     */
    inline const Aws::String& GetManifestPrefix() const { return m_manifestPrefix; }
    inline bool ManifestPrefixHasBeenSet() const { return m_manifestPrefixHasBeenSet; }
    template<typename ManifestPrefixT = Aws::String>
    void SetManifestPrefix(ManifestPrefixT&& value) { m_manifestPrefixHasBeenSet = true; m_manifestPrefix = std::forward<ManifestPrefixT>(value); }
    template<typename ManifestPrefixT = Aws::String>
    S3ManifestOutputLocation& WithManifestPrefix(ManifestPrefixT&& value) { SetManifestPrefix(std::forward<ManifestPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what encryption should be used when the generated manifest objects
     * are written.</p>
     */
    inline const GeneratedManifestEncryption& GetManifestEncryption() const { return m_manifestEncryption; }
    inline bool ManifestEncryptionHasBeenSet() const { return m_manifestEncryptionHasBeenSet; }
    template<typename ManifestEncryptionT = GeneratedManifestEncryption>
    void SetManifestEncryption(ManifestEncryptionT&& value) { m_manifestEncryptionHasBeenSet = true; m_manifestEncryption = std::forward<ManifestEncryptionT>(value); }
    template<typename ManifestEncryptionT = GeneratedManifestEncryption>
    S3ManifestOutputLocation& WithManifestEncryption(ManifestEncryptionT&& value) { SetManifestEncryption(std::forward<ManifestEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the generated manifest.</p>
     */
    inline GeneratedManifestFormat GetManifestFormat() const { return m_manifestFormat; }
    inline bool ManifestFormatHasBeenSet() const { return m_manifestFormatHasBeenSet; }
    inline void SetManifestFormat(GeneratedManifestFormat value) { m_manifestFormatHasBeenSet = true; m_manifestFormat = value; }
    inline S3ManifestOutputLocation& WithManifestFormat(GeneratedManifestFormat value) { SetManifestFormat(value); return *this;}
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

    GeneratedManifestFormat m_manifestFormat{GeneratedManifestFormat::NOT_SET};
    bool m_manifestFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
