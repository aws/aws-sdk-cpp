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
   * <p>Contains the information required to locate a manifest object. Manifests
   * can't be imported from directory buckets. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-overview.html">Directory
   * buckets</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestLocation">AWS
   * API Reference</a></p>
   */
  class JobManifestLocation
  {
  public:
    AWS_S3CONTROL_API JobManifestLocation() = default;
    AWS_S3CONTROL_API JobManifestLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifestLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p>  <p>When
     * you're using XML requests, you must replace special characters (such as carriage
     * returns) in object keys with their equivalent XML entity codes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML-related object key constraints</a> in the <i>Amazon S3 User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetObjectArn() const { return m_objectArn; }
    inline bool ObjectArnHasBeenSet() const { return m_objectArnHasBeenSet; }
    template<typename ObjectArnT = Aws::String>
    void SetObjectArn(ObjectArnT&& value) { m_objectArnHasBeenSet = true; m_objectArn = std::forward<ObjectArnT>(value); }
    template<typename ObjectArnT = Aws::String>
    JobManifestLocation& WithObjectArn(ObjectArnT&& value) { SetObjectArn(std::forward<ObjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline const Aws::String& GetObjectVersionId() const { return m_objectVersionId; }
    inline bool ObjectVersionIdHasBeenSet() const { return m_objectVersionIdHasBeenSet; }
    template<typename ObjectVersionIdT = Aws::String>
    void SetObjectVersionId(ObjectVersionIdT&& value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId = std::forward<ObjectVersionIdT>(value); }
    template<typename ObjectVersionIdT = Aws::String>
    JobManifestLocation& WithObjectVersionId(ObjectVersionIdT&& value) { SetObjectVersionId(std::forward<ObjectVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    JobManifestLocation& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectArn;
    bool m_objectArnHasBeenSet = false;

    Aws::String m_objectVersionId;
    bool m_objectVersionIdHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
