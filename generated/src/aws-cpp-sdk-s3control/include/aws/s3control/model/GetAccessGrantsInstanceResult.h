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


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceArn() const{ return m_accessGrantsInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(const Aws::String& value) { m_accessGrantsInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(Aws::String&& value) { m_accessGrantsInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline void SetAccessGrantsInstanceArn(const char* value) { m_accessGrantsInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(const Aws::String& value) { SetAccessGrantsInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(Aws::String&& value) { SetAccessGrantsInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceArn(const char* value) { SetAccessGrantsInstanceArn(value); return *this;}


    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline const Aws::String& GetAccessGrantsInstanceId() const{ return m_accessGrantsInstanceId; }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(const Aws::String& value) { m_accessGrantsInstanceId = value; }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(Aws::String&& value) { m_accessGrantsInstanceId = std::move(value); }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline void SetAccessGrantsInstanceId(const char* value) { m_accessGrantsInstanceId.assign(value); }

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(const Aws::String& value) { SetAccessGrantsInstanceId(value); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(Aws::String&& value) { SetAccessGrantsInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline GetAccessGrantsInstanceResult& WithAccessGrantsInstanceId(const char* value) { SetAccessGrantsInstanceId(value); return *this;}


    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline const Aws::String& GetIdentityCenterArn() const{ return m_identityCenterArn; }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline void SetIdentityCenterArn(const Aws::String& value) { m_identityCenterArn = value; }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline void SetIdentityCenterArn(Aws::String&& value) { m_identityCenterArn = std::move(value); }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline void SetIdentityCenterArn(const char* value) { m_identityCenterArn.assign(value); }

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline GetAccessGrantsInstanceResult& WithIdentityCenterArn(const Aws::String& value) { SetIdentityCenterArn(value); return *this;}

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline GetAccessGrantsInstanceResult& WithIdentityCenterArn(Aws::String&& value) { SetIdentityCenterArn(std::move(value)); return *this;}

    /**
     * <p>If you associated your S3 Access Grants instance with an Amazon Web Services
     * IAM Identity Center instance, this field returns the Amazon Resource Name (ARN)
     * of the Amazon Web Services IAM Identity Center instance application; a
     * subresource of the original Identity Center instance. S3 Access Grants creates
     * this Identity Center application for the specific S3 Access Grants instance.
     * </p>
     */
    inline GetAccessGrantsInstanceResult& WithIdentityCenterArn(const char* value) { SetIdentityCenterArn(value); return *this;}


    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when you created the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessGrantsInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessGrantsInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessGrantsInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_accessGrantsInstanceArn;

    Aws::String m_accessGrantsInstanceId;

    Aws::String m_identityCenterArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
