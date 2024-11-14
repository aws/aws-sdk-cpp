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


    ///@{
    /**
     * <p>The resource policy of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }
    inline void SetOrganization(const Aws::String& value) { m_organization = value; }
    inline void SetOrganization(Aws::String&& value) { m_organization = std::move(value); }
    inline void SetOrganization(const char* value) { m_organization.assign(value); }
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithOrganization(const char* value) { SetOrganization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when you created the S3 Access Grants instance resource
     * policy. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAccessGrantsInstanceResourcePolicyResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessGrantsInstanceResourcePolicyResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessGrantsInstanceResourcePolicyResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_organization;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
