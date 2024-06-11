/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/Format.h>
#include <aws/s3control/model/OutputSchemaVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/StorageLensDataExportEncryption.h>
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
   * <p>A container for the bucket where the Amazon S3 Storage Lens metrics export
   * files are located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3BucketDestination">AWS
   * API Reference</a></p>
   */
  class S3BucketDestination
  {
  public:
    AWS_S3CONTROL_API S3BucketDestination();
    AWS_S3CONTROL_API S3BucketDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3BucketDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline S3BucketDestination& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline S3BucketDestination& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version of the export file.</p>
     */
    inline const OutputSchemaVersion& GetOutputSchemaVersion() const{ return m_outputSchemaVersion; }
    inline bool OutputSchemaVersionHasBeenSet() const { return m_outputSchemaVersionHasBeenSet; }
    inline void SetOutputSchemaVersion(const OutputSchemaVersion& value) { m_outputSchemaVersionHasBeenSet = true; m_outputSchemaVersion = value; }
    inline void SetOutputSchemaVersion(OutputSchemaVersion&& value) { m_outputSchemaVersionHasBeenSet = true; m_outputSchemaVersion = std::move(value); }
    inline S3BucketDestination& WithOutputSchemaVersion(const OutputSchemaVersion& value) { SetOutputSchemaVersion(value); return *this;}
    inline S3BucketDestination& WithOutputSchemaVersion(OutputSchemaVersion&& value) { SetOutputSchemaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the owner of the S3 Storage Lens metrics export bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline S3BucketDestination& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline S3BucketDestination& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline S3BucketDestination& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This property is read-only and
     * follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:bucket/<i>your-destination-bucket-name</i>
     * </code> </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline S3BucketDestination& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline S3BucketDestination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline S3BucketDestination& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the destination bucket where the metrics export will be
     * delivered.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline S3BucketDestination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline S3BucketDestination& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline S3BucketDestination& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the type encryption of the metrics exports in this
     * bucket.</p>
     */
    inline const StorageLensDataExportEncryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const StorageLensDataExportEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(StorageLensDataExportEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline S3BucketDestination& WithEncryption(const StorageLensDataExportEncryption& value) { SetEncryption(value); return *this;}
    inline S3BucketDestination& WithEncryption(StorageLensDataExportEncryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}
  private:

    Format m_format;
    bool m_formatHasBeenSet = false;

    OutputSchemaVersion m_outputSchemaVersion;
    bool m_outputSchemaVersionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    StorageLensDataExportEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
