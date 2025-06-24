/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityHubFeature.h>
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
  class EnableOrganizationAdminAccountResult
  {
  public:
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult() = default;
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API EnableOrganizationAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the account to designate as the
     * Security Hub administrator account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    EnableOrganizationAdminAccountResult& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature where the delegated administrator is enabled. The default is
     * Security Hub CSPM if no delegated administrator is specified in the request.</p>
     */
    inline SecurityHubFeature GetFeature() const { return m_feature; }
    inline void SetFeature(SecurityHubFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline EnableOrganizationAdminAccountResult& WithFeature(SecurityHubFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EnableOrganizationAdminAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    SecurityHubFeature m_feature{SecurityHubFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
