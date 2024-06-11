/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMContacts
{
namespace Model
{
  class GetContactPolicyResult
  {
  public:
    AWS_SSMCONTACTS_API GetContactPolicyResult();
    AWS_SSMCONTACTS_API GetContactPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetContactPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }
    inline GetContactPolicyResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline GetContactPolicyResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline GetContactPolicyResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resource policy attached to the contact or escalation
     * plan.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetContactPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetContactPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetContactPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContactPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContactPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContactPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactArn;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
