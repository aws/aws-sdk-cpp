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
  class GetAccessPointPolicyForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult();
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessPointPolicyForObjectLambdaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessPointPolicyForObjectLambdaResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessPointPolicyForObjectLambdaResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
