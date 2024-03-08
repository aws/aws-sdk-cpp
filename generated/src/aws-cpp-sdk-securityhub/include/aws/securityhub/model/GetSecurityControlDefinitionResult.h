/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SecurityControlDefinition.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetSecurityControlDefinitionResult
  {
  public:
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult();
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SecurityControlDefinition& GetSecurityControlDefinition() const{ return m_securityControlDefinition; }

    
    inline void SetSecurityControlDefinition(const SecurityControlDefinition& value) { m_securityControlDefinition = value; }

    
    inline void SetSecurityControlDefinition(SecurityControlDefinition&& value) { m_securityControlDefinition = std::move(value); }

    
    inline GetSecurityControlDefinitionResult& WithSecurityControlDefinition(const SecurityControlDefinition& value) { SetSecurityControlDefinition(value); return *this;}

    
    inline GetSecurityControlDefinitionResult& WithSecurityControlDefinition(SecurityControlDefinition&& value) { SetSecurityControlDefinition(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSecurityControlDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSecurityControlDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSecurityControlDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SecurityControlDefinition m_securityControlDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
