/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentVpc.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class ListEnvironmentVpcsResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline const Aws::Vector<EnvironmentVpc>& GetEnvironmentVpcList() const{ return m_environmentVpcList; }

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline void SetEnvironmentVpcList(const Aws::Vector<EnvironmentVpc>& value) { m_environmentVpcList = value; }

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline void SetEnvironmentVpcList(Aws::Vector<EnvironmentVpc>&& value) { m_environmentVpcList = std::move(value); }

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline ListEnvironmentVpcsResult& WithEnvironmentVpcList(const Aws::Vector<EnvironmentVpc>& value) { SetEnvironmentVpcList(value); return *this;}

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline ListEnvironmentVpcsResult& WithEnvironmentVpcList(Aws::Vector<EnvironmentVpc>&& value) { SetEnvironmentVpcList(std::move(value)); return *this;}

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline ListEnvironmentVpcsResult& AddEnvironmentVpcList(const EnvironmentVpc& value) { m_environmentVpcList.push_back(value); return *this; }

    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline ListEnvironmentVpcsResult& AddEnvironmentVpcList(EnvironmentVpc&& value) { m_environmentVpcList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListEnvironmentVpcsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListEnvironmentVpcsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListEnvironmentVpcsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentVpc> m_environmentVpcList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
