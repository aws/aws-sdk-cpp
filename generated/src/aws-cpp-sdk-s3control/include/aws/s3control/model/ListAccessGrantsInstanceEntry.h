/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the S3 Access Grants instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessGrantsInstanceEntry">AWS
   * API Reference</a></p>
   */
  class ListAccessGrantsInstanceEntry
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry();
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const{ return m_accessGrantsInstanceId; }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline bool AccessGrantsInstanceIdHasBeenSet() const { return m_accessGrantsInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(const Aws::String& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = value; }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(Aws::String&& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = std::move(value); }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(const char* value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId.assign(value); }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(const Aws::String& value) { SetAccessGrantsInstanceId(value); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(Aws::String&& value) { SetAccessGrantsInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(const char* value) { SetAccessGrantsInstanceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const{ return m_accessGrantsInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline bool AccessGrantsInstanceArnHasBeenSet() const { return m_accessGrantsInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(const Aws::String& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(Aws::String&& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(const char* value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(const Aws::String& value) { SetAccessGrantsInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(Aws::String&& value) { SetAccessGrantsInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(const char* value) { SetAccessGrantsInstanceArn(value); return *this;}


    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetIdentityCenterArn() const{ return m_identityCenterArn; }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline bool IdentityCenterArnHasBeenSet() const { return m_identityCenterArnHasBeenSet; }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline void SetIdentityCenterArn(const Aws::String& value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn = value; }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline void SetIdentityCenterArn(Aws::String&& value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn = std::move(value); }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline void SetIdentityCenterArn(const char* value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn.assign(value); }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterArn(const Aws::String& value) { SetIdentityCenterArn(value); return *this;}

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterArn(Aws::String&& value) { SetIdentityCenterArn(std::move(value)); return *this;}

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterArn(const char* value) { SetIdentityCenterArn(value); return *this;}

  private:

    Aws::String m_accessGrantsInstanceId;
    bool m_accessGrantsInstanceIdHasBeenSet = false;

    Aws::String m_accessGrantsInstanceArn;
    bool m_accessGrantsInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_identityCenterArn;
    bool m_identityCenterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
