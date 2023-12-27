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
  class GetAccessGrantsInstanceResourcePolicyResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantsInstanceResourcePolicyResult();
    AWS_S3CONTROL_API GetAccessGrantsInstanceResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantsInstanceResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(const Aws::String& value) { m_organization = value; }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(Aws::String&& value) { m_organization = std::move(value); }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(const char* value) { m_organization.assign(value); }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(const char* value) { SetOrganization(value); return *this;}


    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline GetAccessGrantsInstanceResourcePolicyResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policy;

    Aws::String m_organization;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
