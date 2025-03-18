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
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry() = default;
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ListAccessGrantsInstanceEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const { return m_accessGrantsInstanceId; }
    inline bool AccessGrantsInstanceIdHasBeenSet() const { return m_accessGrantsInstanceIdHasBeenSet; }
    template<typename AccessGrantsInstanceIdT = Aws::String>
    void SetAccessGrantsInstanceId(AccessGrantsInstanceIdT&& value) { m_accessGrantsInstanceIdHasBeenSet = true; m_accessGrantsInstanceId = std::forward<AccessGrantsInstanceIdT>(value); }
    template<typename AccessGrantsInstanceIdT = Aws::String>
    ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceId(AccessGrantsInstanceIdT&& value) { SetAccessGrantsInstanceId(std::forward<AccessGrantsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const { return m_accessGrantsInstanceArn; }
    inline bool AccessGrantsInstanceArnHasBeenSet() const { return m_accessGrantsInstanceArnHasBeenSet; }
    template<typename AccessGrantsInstanceArnT = Aws::String>
    void SetAccessGrantsInstanceArn(AccessGrantsInstanceArnT&& value) { m_accessGrantsInstanceArnHasBeenSet = true; m_accessGrantsInstanceArn = std::forward<AccessGrantsInstanceArnT>(value); }
    template<typename AccessGrantsInstanceArnT = Aws::String>
    ListAccessGrantsInstanceEntry& WithAccessGrantsInstanceArn(AccessGrantsInstanceArnT&& value) { SetAccessGrantsInstanceArn(std::forward<AccessGrantsInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ListAccessGrantsInstanceEntry& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value); }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    ListAccessGrantsInstanceEntry& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the IAM Identity Center instance application; a subresource of the original
     * Identity Center instance. S3 Access Grants creates this Identity Center
     * application for the specific S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const { return m_identityCenterApplicationArn; }
    inline bool IdentityCenterApplicationArnHasBeenSet() const { return m_identityCenterApplicationArnHasBeenSet; }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    void SetIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::forward<IdentityCenterApplicationArnT>(value); }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    ListAccessGrantsInstanceEntry& WithIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { SetIdentityCenterApplicationArn(std::forward<IdentityCenterApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessGrantsInstanceId;
    bool m_accessGrantsInstanceIdHasBeenSet = false;

    Aws::String m_accessGrantsInstanceArn;
    bool m_accessGrantsInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
