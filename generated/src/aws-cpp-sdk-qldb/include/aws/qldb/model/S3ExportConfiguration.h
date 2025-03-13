/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/S3EncryptionConfiguration.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The Amazon Simple Storage Service (Amazon S3) bucket location in which a
   * journal export job writes the journal contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/S3ExportConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExportConfiguration
  {
  public:
    AWS_QLDB_API S3ExportConfiguration() = default;
    AWS_QLDB_API S3ExportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API S3ExportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3ExportConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3ExportConfiguration& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline const S3EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = S3EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = S3EncryptionConfiguration>
    S3ExportConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    S3EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
