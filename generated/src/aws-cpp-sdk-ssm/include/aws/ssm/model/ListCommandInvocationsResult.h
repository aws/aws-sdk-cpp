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
    AWS_SSM_API ListCommandInvocationsResult();
    AWS_SSM_API ListCommandInvocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListCommandInvocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>(Optional) A list of all invocations. </p>
     */
    inline const Aws::Vector<CommandInvocation>& GetCommandInvocations() const{ return m_commandInvocations; }
    inline void SetCommandInvocations(const Aws::Vector<CommandInvocation>& value) { m_commandInvocations = value; }
    inline void SetCommandInvocations(Aws::Vector<CommandInvocation>&& value) { m_commandInvocations = std::move(value); }
    inline ListCommandInvocationsResult& WithCommandInvocations(const Aws::Vector<CommandInvocation>& value) { SetCommandInvocations(value); return *this;}
    inline ListCommandInvocationsResult& WithCommandInvocations(Aws::Vector<CommandInvocation>&& value) { SetCommandInvocations(std::move(value)); return *this;}
    inline ListCommandInvocationsResult& AddCommandInvocations(const CommandInvocation& value) { m_commandInvocations.push_back(value); return *this; }
    inline ListCommandInvocationsResult& AddCommandInvocations(CommandInvocation&& value) { m_commandInvocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCommandInvocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommandInvocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommandInvocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCommandInvocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCommandInvocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCommandInvocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CommandInvocation> m_commandInvocations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
