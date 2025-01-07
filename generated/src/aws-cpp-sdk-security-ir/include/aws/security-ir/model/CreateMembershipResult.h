/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
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
namespace SecurityIR
{
namespace Model
{
  class CreateMembershipResult
  {
  public:
    AWS_SECURITYIR_API CreateMembershipResult();
    AWS_SECURITYIR_API CreateMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API CreateMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Response element for CreateMembership providing the newly created membership
     * ID.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }
    inline CreateMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline CreateMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline CreateMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
