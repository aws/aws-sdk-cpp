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
    AWS_S3CONTROL_API S3BucketDestination() = default;
    AWS_S3CONTROL_API S3BucketDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3BucketDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p/>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline S3BucketDestination& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version of the export file.</p>
     */
    inline OutputSchemaVersion GetOutputSchemaVersion() const { return m_outputSchemaVersion; }
    inline bool OutputSchemaVersionHasBeenSet() const { return m_outputSchemaVersionHasBeenSet; }
    inline void SetOutputSchemaVersion(OutputSchemaVersion value) { m_outputSchemaVersionHasBeenSet = true; m_outputSchemaVersion = value; }
    inline S3BucketDestination& WithOutputSchemaVersion(OutputSchemaVersion value) { SetOutputSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the owner of the S3 Storage Lens metrics export bucket.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    S3BucketDestination& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket. This property is read-only and
     * follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:bucket/<i>your-destination-bucket-name</i>
     * </code> </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    S3BucketDestination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the destination bucket where the metrics export will be
     * delivered.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3BucketDestination& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container for the type encryption of the metrics exports in this
     * bucket.</p>
     */
    inline const StorageLensDataExportEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = StorageLensDataExportEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = StorageLensDataExportEncryption>
    S3BucketDestination& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    OutputSchemaVersion m_outputSchemaVersion{OutputSchemaVersion::NOT_SET};
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
