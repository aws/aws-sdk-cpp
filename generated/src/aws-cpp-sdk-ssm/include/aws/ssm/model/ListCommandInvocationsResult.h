/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandInvocation.h>
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
namespace SSM
{
namespace Model
{
  class ListCommandInvocationsResult
  {
  public:
    AWS_SSM_API ListCommandInvocationsResult() = default;
    AWS_SSM_API ListCommandInvocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListCommandInvocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>(Optional) A list of all invocations. </p>
     */
    inline const Aws::Vector<CommandInvocation>& GetCommandInvocations() const { return m_commandInvocations; }
    template<typename CommandInvocationsT = Aws::Vector<CommandInvocation>>
    void SetCommandInvocations(CommandInvocationsT&& value) { m_commandInvocationsHasBeenSet = true; m_commandInvocations = std::forward<CommandInvocationsT>(value); }
    template<typename CommandInvocationsT = Aws::Vector<CommandInvocation>>
    ListCommandInvocationsResult& WithCommandInvocations(CommandInvocationsT&& value) { SetCommandInvocations(std::forward<CommandInvocationsT>(value)); return *this;}
    template<typename CommandInvocationsT = CommandInvocation>
    ListCommandInvocationsResult& AddCommandInvocations(CommandInvocationsT&& value) { m_commandInvocationsHasBeenSet = true; m_commandInvocations.emplace_back(std::forward<CommandInvocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCommandInvocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommandInvocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommandInvocation> m_commandInvocations;
    bool m_commandInvocationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
