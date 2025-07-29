/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccountSettingsDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class UpdateAccountSettingsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult() = default;
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account.</p>
     */
    inline const AccountSettingsDetail& GetAccountSettingsDetail() const { return m_accountSettingsDetail; }
    template<typename AccountSettingsDetailT = AccountSettingsDetail>
    void SetAccountSettingsDetail(AccountSettingsDetailT&& value) { m_accountSettingsDetailHasBeenSet = true; m_accountSettingsDetail = std::forward<AccountSettingsDetailT>(value); }
    template<typename AccountSettingsDetailT = AccountSettingsDetail>
    UpdateAccountSettingsResult& WithAccountSettingsDetail(AccountSettingsDetailT&& value) { SetAccountSettingsDetail(std::forward<AccountSettingsDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountSettingsDetail m_accountSettingsDetail;
    bool m_accountSettingsDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
