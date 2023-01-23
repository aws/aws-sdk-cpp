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
   * <p>Contains the information required to locate a manifest object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestLocation">AWS
   * API Reference</a></p>
   */
  class JobManifestLocation
  {
  public:
    AWS_S3CONTROL_API JobManifestLocation();
    AWS_S3CONTROL_API JobManifestLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifestLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline const Aws::String& GetObjectArn() const{ return m_objectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline bool ObjectArnHasBeenSet() const { return m_objectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline void SetObjectArn(const Aws::String& value) { m_objectArnHasBeenSet = true; m_objectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline void SetObjectArn(Aws::String&& value) { m_objectArnHasBeenSet = true; m_objectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline void SetObjectArn(const char* value) { m_objectArnHasBeenSet = true; m_objectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline JobManifestLocation& WithObjectArn(const Aws::String& value) { SetObjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline JobManifestLocation& WithObjectArn(Aws::String&& value) { SetObjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a manifest object.</p> 
     * <p>Replacement must be made for object keys containing special characters (such
     * as carriage returns) when using XML requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline JobManifestLocation& WithObjectArn(const char* value) { SetObjectArn(value); return *this;}


    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline const Aws::String& GetObjectVersionId() const{ return m_objectVersionId; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline bool ObjectVersionIdHasBeenSet() const { return m_objectVersionIdHasBeenSet; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(const Aws::String& value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId = value; }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(Aws::String&& value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId = std::move(value); }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline void SetObjectVersionId(const char* value) { m_objectVersionIdHasBeenSet = true; m_objectVersionId.assign(value); }

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(const Aws::String& value) { SetObjectVersionId(value); return *this;}

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(Aws::String&& value) { SetObjectVersionId(std::move(value)); return *this;}

    /**
     * <p>The optional version ID to identify a specific version of the manifest
     * object.</p>
     */
    inline JobManifestLocation& WithObjectVersionId(const char* value) { SetObjectVersionId(value); return *this;}


    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag for the specified manifest object.</p>
     */
    inline JobManifestLocation& WithETag(const char* value) { SetETag(value); return *this;}

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
