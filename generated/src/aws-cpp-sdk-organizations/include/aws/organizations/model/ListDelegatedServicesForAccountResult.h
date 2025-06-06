﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/DelegatedService.h>
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
  class ListDelegatedServicesForAccountResult
  {
  public:
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult() = default;
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline const Aws::Vector<DelegatedService>& GetDelegatedServices() const { return m_delegatedServices; }
    template<typename DelegatedServicesT = Aws::Vector<DelegatedService>>
    void SetDelegatedServices(DelegatedServicesT&& value) { m_delegatedServicesHasBeenSet = true; m_delegatedServices = std::forward<DelegatedServicesT>(value); }
    template<typename DelegatedServicesT = Aws::Vector<DelegatedService>>
    ListDelegatedServicesForAccountResult& WithDelegatedServices(DelegatedServicesT&& value) { SetDelegatedServices(std::forward<DelegatedServicesT>(value)); return *this;}
    template<typename DelegatedServicesT = DelegatedService>
    ListDelegatedServicesForAccountResult& AddDelegatedServices(DelegatedServicesT&& value) { m_delegatedServicesHasBeenSet = true; m_delegatedServices.emplace_back(std::forward<DelegatedServicesT>(value)); return *this; }
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
    ListDelegatedServicesForAccountResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDelegatedServicesForAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DelegatedService> m_delegatedServices;
    bool m_delegatedServicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
