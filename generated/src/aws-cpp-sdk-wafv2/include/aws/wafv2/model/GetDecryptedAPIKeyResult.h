/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace WAFV2
{
namespace Model
{
  class GetDecryptedAPIKeyResult
  {
  public:
    AWS_WAFV2_API GetDecryptedAPIKeyResult() = default;
    AWS_WAFV2_API GetDecryptedAPIKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetDecryptedAPIKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const { return m_tokenDomains; }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    void SetTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::forward<TokenDomainsT>(value); }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    GetDecryptedAPIKeyResult& WithTokenDomains(TokenDomainsT&& value) { SetTokenDomains(std::forward<TokenDomainsT>(value)); return *this;}
    template<typename TokenDomainsT = Aws::String>
    GetDecryptedAPIKeyResult& AddTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.emplace_back(std::forward<TokenDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the key was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    GetDecryptedAPIKeyResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDecryptedAPIKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
