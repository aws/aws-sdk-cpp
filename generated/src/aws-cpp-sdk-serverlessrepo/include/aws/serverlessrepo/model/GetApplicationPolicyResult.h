/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class GetApplicationPolicyResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetApplicationPolicyResult() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetApplicationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetApplicationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const { return m_statements; }
    template<typename StatementsT = Aws::Vector<ApplicationPolicyStatement>>
    void SetStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements = std::forward<StatementsT>(value); }
    template<typename StatementsT = Aws::Vector<ApplicationPolicyStatement>>
    GetApplicationPolicyResult& WithStatements(StatementsT&& value) { SetStatements(std::forward<StatementsT>(value)); return *this;}
    template<typename StatementsT = ApplicationPolicyStatement>
    GetApplicationPolicyResult& AddStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements.emplace_back(std::forward<StatementsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationPolicyStatement> m_statements;
    bool m_statementsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
