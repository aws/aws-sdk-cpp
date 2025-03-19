/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
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
namespace SupportApp
{
namespace Model
{
  class GetAccountAliasResult
  {
  public:
    AWS_SUPPORTAPP_API GetAccountAliasResult() = default;
    AWS_SUPPORTAPP_API GetAccountAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API GetAccountAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountAlias() const { return m_accountAlias; }
    template<typename AccountAliasT = Aws::String>
    void SetAccountAlias(AccountAliasT&& value) { m_accountAliasHasBeenSet = true; m_accountAlias = std::forward<AccountAliasT>(value); }
    template<typename AccountAliasT = Aws::String>
    GetAccountAliasResult& WithAccountAlias(AccountAliasT&& value) { SetAccountAlias(std::forward<AccountAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountAlias;
    bool m_accountAliasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
