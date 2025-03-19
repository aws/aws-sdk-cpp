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
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult() = default;
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetSecurityControlDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const SecurityControlDefinition& GetSecurityControlDefinition() const { return m_securityControlDefinition; }
    template<typename SecurityControlDefinitionT = SecurityControlDefinition>
    void SetSecurityControlDefinition(SecurityControlDefinitionT&& value) { m_securityControlDefinitionHasBeenSet = true; m_securityControlDefinition = std::forward<SecurityControlDefinitionT>(value); }
    template<typename SecurityControlDefinitionT = SecurityControlDefinition>
    GetSecurityControlDefinitionResult& WithSecurityControlDefinition(SecurityControlDefinitionT&& value) { SetSecurityControlDefinition(std::forward<SecurityControlDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSecurityControlDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SecurityControlDefinition m_securityControlDefinition;
    bool m_securityControlDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
