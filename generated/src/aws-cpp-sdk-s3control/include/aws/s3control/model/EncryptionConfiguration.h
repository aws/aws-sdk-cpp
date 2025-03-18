/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies encryption-related information for an Amazon S3 bucket that is a
   * destination for replicated objects. If you're specifying a customer managed KMS
   * key, we recommend using a fully qualified KMS key ARN. If you use a KMS key
   * alias instead, then KMS resolves the key within the requester’s account. This
   * behavior can result in data that's encrypted with a KMS key that belongs to the
   * requester, and not the bucket owner.</p>  <p>This is not supported by
   * Amazon S3 on Outposts buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_S3CONTROL_API EncryptionConfiguration() = default;
    AWS_S3CONTROL_API EncryptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API EncryptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the ID of the customer managed KMS key that's stored in Key
     * Management Service (KMS) for the destination bucket. This ID is either the
     * Amazon Resource Name (ARN) for the KMS key or the alias ARN for the KMS key.
     * Amazon S3 uses this KMS key to encrypt replica objects. Amazon S3 supports only
     * symmetric encryption KMS keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#symmetric-cmks">Symmetric
     * encryption KMS keys</a> in the <i>Amazon Web Services Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetReplicaKmsKeyID() const { return m_replicaKmsKeyID; }
    inline bool ReplicaKmsKeyIDHasBeenSet() const { return m_replicaKmsKeyIDHasBeenSet; }
    template<typename ReplicaKmsKeyIDT = Aws::String>
    void SetReplicaKmsKeyID(ReplicaKmsKeyIDT&& value) { m_replicaKmsKeyIDHasBeenSet = true; m_replicaKmsKeyID = std::forward<ReplicaKmsKeyIDT>(value); }
    template<typename ReplicaKmsKeyIDT = Aws::String>
    EncryptionConfiguration& WithReplicaKmsKeyID(ReplicaKmsKeyIDT&& value) { SetReplicaKmsKeyID(std::forward<ReplicaKmsKeyIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicaKmsKeyID;
    bool m_replicaKmsKeyIDHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
