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
  class GetAccessGrantsInstanceForPrefixResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult();
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantsInstanceForPrefixResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceArn(const Aws::String& value) { SetAccessGrantsInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceArn(Aws::String&& value) { SetAccessGrantsInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Access Grants instance. </p>
     */
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceArn(const char* value) { SetAccessGrantsInstanceArn(value); return *this;}


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
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceId(const Aws::String& value) { SetAccessGrantsInstanceId(value); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceId(Aws::String&& value) { SetAccessGrantsInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the S3 Access Grants instance. The ID is <code>default</code>. You
     * can have one S3 Access Grants instance per Region per account. </p>
     */
    inline GetAccessGrantsInstanceForPrefixResult& WithAccessGrantsInstanceId(const char* value) { SetAccessGrantsInstanceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessGrantsInstanceForPrefixResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessGrantsInstanceForPrefixResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessGrantsInstanceForPrefixResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_accessGrantsInstanceArn;

    Aws::String m_accessGrantsInstanceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
