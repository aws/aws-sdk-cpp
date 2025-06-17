/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/PolicyType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MPA
{
namespace Model
{
  class GetResourcePolicyResult
  {
  public:
    AWS_MPA_API GetResourcePolicyResult() = default;
    AWS_MPA_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetResourcePolicyResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline GetResourcePolicyResult& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the policy version.</p>
     */
    inline const Aws::String& GetPolicyVersionArn() const { return m_policyVersionArn; }
    template<typename PolicyVersionArnT = Aws::String>
    void SetPolicyVersionArn(PolicyVersionArnT&& value) { m_policyVersionArnHasBeenSet = true; m_policyVersionArn = std::forward<PolicyVersionArnT>(value); }
    template<typename PolicyVersionArnT = Aws::String>
    GetResourcePolicyResult& WithPolicyVersionArn(PolicyVersionArnT&& value) { SetPolicyVersionArn(std::forward<PolicyVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    GetResourcePolicyResult& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Document that contains the contents for the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    GetResourcePolicyResult& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyVersionArn;
    bool m_policyVersionArnHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
