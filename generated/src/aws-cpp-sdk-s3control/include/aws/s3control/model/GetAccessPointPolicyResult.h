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
  class GetAccessPointPolicyResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointPolicyResult();
    AWS_S3CONTROL_API GetAccessPointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The access point policy associated with the specified access point.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetAccessPointPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetAccessPointPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetAccessPointPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessPointPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessPointPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessPointPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessPointPolicyResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessPointPolicyResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessPointPolicyResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
