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
   * <p> An Amazon Web Services resource tag that's associated with your S3 resource.
   * You can add tags to new objects when you upload them, or you can add object tags
   * to existing objects. </p>  <p>This operation is only supported for <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage-lens-groups.html">S3
   * Storage Lens groups</a> and for <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-grants-tagging.html">S3
   * Access Grants</a>. The tagged resource can be an S3 Storage Lens group or S3
   * Access Grants instance, registered location, or grant. </p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_S3CONTROL_API Tag();
    AWS_S3CONTROL_API Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag key can be up to 128 Unicode characters in length and is
     * case-sensitive. System created tags that begin with <code>aws:</code> aren’t
     * supported. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value of the key-value pair of a tag added to your Amazon Web Services
     * resource. A tag value can be up to 256 Unicode characters in length and is
     * case-sensitive. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
