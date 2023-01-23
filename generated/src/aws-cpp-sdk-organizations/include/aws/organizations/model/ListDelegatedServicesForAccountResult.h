/**
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
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult();
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListDelegatedServicesForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline const Aws::Vector<DelegatedService>& GetDelegatedServices() const{ return m_delegatedServices; }

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline void SetDelegatedServices(const Aws::Vector<DelegatedService>& value) { m_delegatedServices = value; }

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline void SetDelegatedServices(Aws::Vector<DelegatedService>&& value) { m_delegatedServices = std::move(value); }

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline ListDelegatedServicesForAccountResult& WithDelegatedServices(const Aws::Vector<DelegatedService>& value) { SetDelegatedServices(value); return *this;}

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline ListDelegatedServicesForAccountResult& WithDelegatedServices(Aws::Vector<DelegatedService>&& value) { SetDelegatedServices(std::move(value)); return *this;}

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline ListDelegatedServicesForAccountResult& AddDelegatedServices(const DelegatedService& value) { m_delegatedServices.push_back(value); return *this; }

    /**
     * <p>The services for which the account is a delegated administrator.</p>
     */
    inline ListDelegatedServicesForAccountResult& AddDelegatedServices(DelegatedService&& value) { m_delegatedServices.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedServicesForAccountResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedServicesForAccountResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedServicesForAccountResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DelegatedService> m_delegatedServices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
