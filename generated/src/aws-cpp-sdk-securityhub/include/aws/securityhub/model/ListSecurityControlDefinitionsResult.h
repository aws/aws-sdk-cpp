/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityControlDefinition.h>
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
  class ListSecurityControlDefinitionsResult
  {
  public:
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult() = default;
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline const Aws::Vector<SecurityControlDefinition>& GetSecurityControlDefinitions() const { return m_securityControlDefinitions; }
    template<typename SecurityControlDefinitionsT = Aws::Vector<SecurityControlDefinition>>
    void SetSecurityControlDefinitions(SecurityControlDefinitionsT&& value) { m_securityControlDefinitionsHasBeenSet = true; m_securityControlDefinitions = std::forward<SecurityControlDefinitionsT>(value); }
    template<typename SecurityControlDefinitionsT = Aws::Vector<SecurityControlDefinition>>
    ListSecurityControlDefinitionsResult& WithSecurityControlDefinitions(SecurityControlDefinitionsT&& value) { SetSecurityControlDefinitions(std::forward<SecurityControlDefinitionsT>(value)); return *this;}
    template<typename SecurityControlDefinitionsT = SecurityControlDefinition>
    ListSecurityControlDefinitionsResult& AddSecurityControlDefinitions(SecurityControlDefinitionsT&& value) { m_securityControlDefinitionsHasBeenSet = true; m_securityControlDefinitions.emplace_back(std::forward<SecurityControlDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityControlDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityControlDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityControlDefinition> m_securityControlDefinitions;
    bool m_securityControlDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
