/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountModification.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeAccountModificationsResult
  {
  public:
    AWS_WORKSPACES_API DescribeAccountModificationsResult();
    AWS_WORKSPACES_API DescribeAccountModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeAccountModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline const Aws::Vector<AccountModification>& GetAccountModifications() const{ return m_accountModifications; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline void SetAccountModifications(const Aws::Vector<AccountModification>& value) { m_accountModifications = value; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline void SetAccountModifications(Aws::Vector<AccountModification>&& value) { m_accountModifications = std::move(value); }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& WithAccountModifications(const Aws::Vector<AccountModification>& value) { SetAccountModifications(value); return *this;}

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& WithAccountModifications(Aws::Vector<AccountModification>&& value) { SetAccountModifications(std::move(value)); return *this;}

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& AddAccountModifications(const AccountModification& value) { m_accountModifications.push_back(value); return *this; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& AddAccountModifications(AccountModification&& value) { m_accountModifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountModification> m_accountModifications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
