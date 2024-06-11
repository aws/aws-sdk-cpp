﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class CreateCrossAccountAuthorizationResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult();
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cross-account authorization.</p>
     */
    inline const Aws::String& GetCrossAccountAuthorization() const{ return m_crossAccountAuthorization; }
    inline void SetCrossAccountAuthorization(const Aws::String& value) { m_crossAccountAuthorization = value; }
    inline void SetCrossAccountAuthorization(Aws::String&& value) { m_crossAccountAuthorization = std::move(value); }
    inline void SetCrossAccountAuthorization(const char* value) { m_crossAccountAuthorization.assign(value); }
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(const Aws::String& value) { SetCrossAccountAuthorization(value); return *this;}
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(Aws::String&& value) { SetCrossAccountAuthorization(std::move(value)); return *this;}
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(const char* value) { SetCrossAccountAuthorization(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCrossAccountAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCrossAccountAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCrossAccountAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_crossAccountAuthorization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
