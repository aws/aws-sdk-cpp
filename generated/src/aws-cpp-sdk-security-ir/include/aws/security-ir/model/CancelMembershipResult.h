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
  class CancelMembershipResult
  {
  public:
    AWS_SECURITYIR_API CancelMembershipResult();
    AWS_SECURITYIR_API CancelMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API CancelMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response element providing responses for requests to
     * CancelMembershipRequest.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }
    inline CancelMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline CancelMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline CancelMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
