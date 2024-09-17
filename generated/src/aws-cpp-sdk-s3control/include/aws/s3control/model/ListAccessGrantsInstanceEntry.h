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


    ///@{
    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const{ return m_accessGrantsInstanceId; }
    inline bool AccessGrantsInstanceIdHasBeenSet() const { return m_accessGrantsInstanceIdHasBeenSet; }
    inline void SetAccessGrantsInstanceId(const Aws::String& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = value; }
    inline void SetAccessGrantsInstanceId(Aws::String&& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = std::move(value); }
    inline void SetAccessGrantsInstanceId(const char* value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId.assign(value); }
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(const Aws::String& value) { SetAccessGrantsInstanceId(value); return *this;}
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(Aws::String&& value) { SetAccessGrantsInstanceId(std::move(value)); return *this;}
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(const char* value) { SetAccessGrantsInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const{ return m_accessGrantsInstanceArn; }
    inline bool AccessGrantsInstanceArnHasBeenSet() const { return m_accessGrantsInstanceArnHasBeenSet; }
    inline void SetAccessGrantsInstanceArn(const Aws::String& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = value; }
    inline void SetAccessGrantsInstanceArn(Aws::String&& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = std::move(value); }
    inline void SetAccessGrantsInstanceArn(const char* value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn.assign(value); }
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(const Aws::String& value) { SetAccessGrantsInstanceArn(value); return *this;}
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(Aws::String&& value) { SetAccessGrantsInstanceArn(std::move(value)); return *this;}
    inline ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(const char* value) { SetAccessGrantsInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListAccessGrantsInstanceEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListAccessGrantsInstanceEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }
    inline bool IdentityCenterApplicationArnHasBeenSet() const { return m_identityCenterApplicationArnHasBeenSet; }
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = value; }
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::move(value); }
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn.assign(value); }
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline ListAccessGrantsInstanceEntry& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accessGrantsInstanceId;
    bool m_accessGrantsInstanceIdHasBeenSet = false;

    Aws::String m_accessGrantsInstanceArn;
    bool m_accessGrantsInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
