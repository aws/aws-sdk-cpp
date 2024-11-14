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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetAccessGrantsInstanceResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantsInstanceResult();
    AWS_S3CONTROL_API GetAccessGrantsInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantsInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const{ return m_accessGrantsInstanceArn; }
    inline void SetAccessGrantsInstanceArn(const Aws::String& value) { m_accessGrantsInstanceArn = value; }
    inline void SetAccessGrantsInstanceArn(Aws::String&& value) { m_accessGrantsInstanceArn = std::move(value); }
    inline void SetAccessGrantsInstanceArn(const char* value) { m_accessGrantsInstanceArn.assign(value); }
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(const Aws::String& value) { SetAccessGrantsInstanceArn(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(Aws::String&& value) { SetAccessGrantsInstanceArn(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(const char* value) { SetAccessGrantsInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const{ return m_accessGrantsInstanceId; }
    inline void SetAccessGrantsInstanceId(const Aws::String& value) { m_accessGrantsInstanceId = value; }
    inline void SetAccessGrantsInstanceId(Aws::String&& value) { m_accessGrantsInstanceId = std::move(value); }
    inline void SetAccessGrantsInstanceId(const char* value) { m_accessGrantsInstanceId.assign(value); }
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(const Aws::String& value) { SetAccessGrantsInstanceId(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(Aws::String&& value) { SetAccessGrantsInstanceId(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(const char* value) { SetAccessGrantsInstanceId(value); return *this;}
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
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArn = value; }
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArn = std::move(value); }
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArn.assign(value); }
    inline GetAccessGrantsInstanceResult& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}
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
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArn = value; }
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArn = std::move(value); }
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArn.assign(value); }
    inline GetAccessGrantsInstanceResult& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAccessGrantsInstanceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessGrantsInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessGrantsInstanceResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessGrantsInstanceResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessGrantsInstanceArn;

    Aws::String m_accessGrantsInstanceId;

    Aws::String m_identityCenterInstanceArn;

    Aws::String m_identityCenterApplicationArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
