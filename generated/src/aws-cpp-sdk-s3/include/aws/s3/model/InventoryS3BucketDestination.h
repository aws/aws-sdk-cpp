/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/InventoryFormat.h>
#include <aws/s3/model/InventoryEncryption.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Contains the bucket name, file format, bucket owner (optional), and prefix
   * (optional) where inventory results are published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventoryS3BucketDestination">AWS
   * API Reference</a></p>
   */
  class InventoryS3BucketDestination
  {
  public:
    AWS_S3_API InventoryS3BucketDestination() = default;
    AWS_S3_API InventoryS3BucketDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventoryS3BucketDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The account ID that owns the destination S3 bucket. If no account ID is
     * provided, the owner is not validated before exporting data. </p>  <p>
     * Although this value is optional, we strongly recommend that you set it to help
     * prevent problems if the destination bucket ownership changes. </p> 
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InventoryS3BucketDestination& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket where inventory results will be
     * published.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    InventoryS3BucketDestination& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the output format of the inventory results.</p>
     */
    inline InventoryFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(InventoryFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline InventoryS3BucketDestination& WithFormat(InventoryFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to all inventory results.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    InventoryS3BucketDestination& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the type of server-side encryption used to encrypt the inventory
     * results.</p>
     */
    inline const InventoryEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = InventoryEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = InventoryEncryption>
    InventoryS3BucketDestination& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    InventoryFormat m_format{InventoryFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    InventoryEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
