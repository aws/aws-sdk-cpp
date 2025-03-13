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
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentVpcsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>EnvironmentVpc</code> objects. </p>
     */
    inline const Aws::Vector<EnvironmentVpc>& GetEnvironmentVpcList() const { return m_environmentVpcList; }
    template<typename EnvironmentVpcListT = Aws::Vector<EnvironmentVpc>>
    void SetEnvironmentVpcList(EnvironmentVpcListT&& value) { m_environmentVpcListHasBeenSet = true; m_environmentVpcList = std::forward<EnvironmentVpcListT>(value); }
    template<typename EnvironmentVpcListT = Aws::Vector<EnvironmentVpc>>
    ListEnvironmentVpcsResult& WithEnvironmentVpcList(EnvironmentVpcListT&& value) { SetEnvironmentVpcList(std::forward<EnvironmentVpcListT>(value)); return *this;}
    template<typename EnvironmentVpcListT = EnvironmentVpc>
    ListEnvironmentVpcsResult& AddEnvironmentVpcList(EnvironmentVpcListT&& value) { m_environmentVpcListHasBeenSet = true; m_environmentVpcList.emplace_back(std::forward<EnvironmentVpcListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentVpcsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentVpcsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentVpc> m_environmentVpcList;
    bool m_environmentVpcListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
