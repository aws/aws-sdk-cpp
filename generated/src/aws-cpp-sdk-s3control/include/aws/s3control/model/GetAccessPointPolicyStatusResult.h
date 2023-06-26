/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/PolicyStatus.h>
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
  class GetAccessPointPolicyStatusResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointPolicyStatusResult();
    AWS_S3CONTROL_API GetAccessPointPolicyStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointPolicyStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates the current policy status of the specified access point.</p>
     */
    inline const PolicyStatus& GetPolicyStatus() const{ return m_policyStatus; }

    /**
     * <p>Indicates the current policy status of the specified access point.</p>
     */
    inline void SetPolicyStatus(const PolicyStatus& value) { m_policyStatus = value; }

    /**
     * <p>Indicates the current policy status of the specified access point.</p>
     */
    inline void SetPolicyStatus(PolicyStatus&& value) { m_policyStatus = std::move(value); }

    /**
     * <p>Indicates the current policy status of the specified access point.</p>
     */
    inline GetAccessPointPolicyStatusResult& WithPolicyStatus(const PolicyStatus& value) { SetPolicyStatus(value); return *this;}

    /**
     * <p>Indicates the current policy status of the specified access point.</p>
     */
    inline GetAccessPointPolicyStatusResult& WithPolicyStatus(PolicyStatus&& value) { SetPolicyStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessPointPolicyStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessPointPolicyStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessPointPolicyStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PolicyStatus m_policyStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
