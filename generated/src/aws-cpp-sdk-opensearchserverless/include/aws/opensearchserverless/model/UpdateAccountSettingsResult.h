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
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account. </p>
     */
    inline const AccountSettingsDetail& GetAccountSettingsDetail() const{ return m_accountSettingsDetail; }

    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account. </p>
     */
    inline void SetAccountSettingsDetail(const AccountSettingsDetail& value) { m_accountSettingsDetail = value; }

    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account. </p>
     */
    inline void SetAccountSettingsDetail(AccountSettingsDetail&& value) { m_accountSettingsDetail = std::move(value); }

    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account. </p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettingsDetail(const AccountSettingsDetail& value) { SetAccountSettingsDetail(value); return *this;}

    /**
     * <p>OpenSearch Serverless-related settings for the current Amazon Web Services
     * account. </p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettingsDetail(AccountSettingsDetail&& value) { SetAccountSettingsDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountSettingsDetail m_accountSettingsDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
