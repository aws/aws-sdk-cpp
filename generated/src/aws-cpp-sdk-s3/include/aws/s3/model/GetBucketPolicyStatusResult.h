/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/PolicyStatus.h>
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
namespace S3
{
namespace Model
{
  class GetBucketPolicyStatusResult
  {
  public:
    AWS_S3_API GetBucketPolicyStatusResult() = default;
    AWS_S3_API GetBucketPolicyStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketPolicyStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The policy status for the specified bucket.</p>
     */
    inline const PolicyStatus& GetPolicyStatus() const { return m_policyStatus; }
    template<typename PolicyStatusT = PolicyStatus>
    void SetPolicyStatus(PolicyStatusT&& value) { m_policyStatusHasBeenSet = true; m_policyStatus = std::forward<PolicyStatusT>(value); }
    template<typename PolicyStatusT = PolicyStatus>
    GetBucketPolicyStatusResult& WithPolicyStatus(PolicyStatusT&& value) { SetPolicyStatus(std::forward<PolicyStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketPolicyStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PolicyStatus m_policyStatus;
    bool m_policyStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
