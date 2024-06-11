/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>The snapshot copy grant that grants Amazon Redshift permission to encrypt
   * copied snapshots with the specified encrypted symmetric key from Amazon Web
   * Services KMS in the destination region.</p> <p> For more information about
   * managing snapshot copy grants, go to <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
   * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotCopyGrant">AWS
   * API Reference</a></p>
   */
  class SnapshotCopyGrant
  {
  public:
    AWS_REDSHIFT_API SnapshotCopyGrant();
    AWS_REDSHIFT_API SnapshotCopyGrant(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SnapshotCopyGrant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the encrypted symmetric key in Amazon Web Services
     * KMS to which Amazon Redshift is granted permission.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline SnapshotCopyGrant& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline SnapshotCopyGrant& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline SnapshotCopyGrant& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SnapshotCopyGrant& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SnapshotCopyGrant& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SnapshotCopyGrant& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SnapshotCopyGrant& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
