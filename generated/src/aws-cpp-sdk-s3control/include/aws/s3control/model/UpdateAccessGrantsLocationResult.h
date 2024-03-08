/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateAccessGrantsLocationResult
  {
  public:
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult();
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API UpdateAccessGrantsLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationId = value; }

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationId = std::move(value); }

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationId.assign(value); }

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigned this ID when you registered the location. S3 Access Grants
     * assigns the ID <code>default</code> to the default location <code>s3://</code>
     * and assigns an auto-generated ID to other locations that you register. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationArn() const{ return m_accessGrantsLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline void SetAccessGrantsLocationArn(const Aws::String& value) { m_accessGrantsLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline void SetAccessGrantsLocationArn(Aws::String&& value) { m_accessGrantsLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline void SetAccessGrantsLocationArn(const char* value) { m_accessGrantsLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationArn(const Aws::String& value) { SetAccessGrantsLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationArn(Aws::String&& value) { SetAccessGrantsLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registered location that you are
     * updating. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithAccessGrantsLocationArn(const char* value) { SetAccessGrantsLocationArn(value); return *this;}


    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline const Aws::String& GetLocationScope() const{ return m_locationScope; }

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline void SetLocationScope(const Aws::String& value) { m_locationScope = value; }

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline void SetLocationScope(Aws::String&& value) { m_locationScope = std::move(value); }

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline void SetLocationScope(const char* value) { m_locationScope.assign(value); }

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithLocationScope(const Aws::String& value) { SetLocationScope(value); return *this;}

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithLocationScope(Aws::String&& value) { SetLocationScope(std::move(value)); return *this;}

    /**
     * <p>The S3 URI path of the location that you are updating. You cannot update the
     * scope of the registered location. The location scope can be the default S3
     * location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. </p>
     */
    inline UpdateAccessGrantsLocationResult& WithLocationScope(const char* value) { SetLocationScope(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline const Aws::String& GetIAMRoleArn() const{ return m_iAMRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(const Aws::String& value) { m_iAMRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(Aws::String&& value) { m_iAMRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(const char* value) { m_iAMRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationResult& WithIAMRoleArn(const Aws::String& value) { SetIAMRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationResult& WithIAMRoleArn(Aws::String&& value) { SetIAMRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the registered location. S3
     * Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationResult& WithIAMRoleArn(const char* value) { SetIAMRoleArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAccessGrantsLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAccessGrantsLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAccessGrantsLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_accessGrantsLocationId;

    Aws::String m_accessGrantsLocationArn;

    Aws::String m_locationScope;

    Aws::String m_iAMRoleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
