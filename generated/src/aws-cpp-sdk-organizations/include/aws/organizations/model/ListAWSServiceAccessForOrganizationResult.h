/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/EnabledServicePrincipal.h>
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
namespace Organizations
{
namespace Model
{
  class ListAWSServiceAccessForOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API ListAWSServiceAccessForOrganizationResult() = default;
    AWS_ORGANIZATIONS_API ListAWSServiceAccessForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListAWSServiceAccessForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with
     * Organizations.</p>
     */
    inline const Aws::Vector<EnabledServicePrincipal>& GetEnabledServicePrincipals() const { return m_enabledServicePrincipals; }
    template<typename EnabledServicePrincipalsT = Aws::Vector<EnabledServicePrincipal>>
    void SetEnabledServicePrincipals(EnabledServicePrincipalsT&& value) { m_enabledServicePrincipalsHasBeenSet = true; m_enabledServicePrincipals = std::forward<EnabledServicePrincipalsT>(value); }
    template<typename EnabledServicePrincipalsT = Aws::Vector<EnabledServicePrincipal>>
    ListAWSServiceAccessForOrganizationResult& WithEnabledServicePrincipals(EnabledServicePrincipalsT&& value) { SetEnabledServicePrincipals(std::forward<EnabledServicePrincipalsT>(value)); return *this;}
    template<typename EnabledServicePrincipalsT = EnabledServicePrincipal>
    ListAWSServiceAccessForOrganizationResult& AddEnabledServicePrincipals(EnabledServicePrincipalsT&& value) { m_enabledServicePrincipalsHasBeenSet = true; m_enabledServicePrincipals.emplace_back(std::forward<EnabledServicePrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAWSServiceAccessForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAWSServiceAccessForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnabledServicePrincipal> m_enabledServicePrincipals;
    bool m_enabledServicePrincipalsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
