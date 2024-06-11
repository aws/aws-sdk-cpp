/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectClientAddIn.h>
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
  class DescribeConnectClientAddInsResult
  {
  public:
    AWS_WORKSPACES_API DescribeConnectClientAddInsResult();
    AWS_WORKSPACES_API DescribeConnectClientAddInsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeConnectClientAddInsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about client add-ins.</p>
     */
    inline const Aws::Vector<ConnectClientAddIn>& GetAddIns() const{ return m_addIns; }
    inline void SetAddIns(const Aws::Vector<ConnectClientAddIn>& value) { m_addIns = value; }
    inline void SetAddIns(Aws::Vector<ConnectClientAddIn>&& value) { m_addIns = std::move(value); }
    inline DescribeConnectClientAddInsResult& WithAddIns(const Aws::Vector<ConnectClientAddIn>& value) { SetAddIns(value); return *this;}
    inline DescribeConnectClientAddInsResult& WithAddIns(Aws::Vector<ConnectClientAddIn>&& value) { SetAddIns(std::move(value)); return *this;}
    inline DescribeConnectClientAddInsResult& AddAddIns(const ConnectClientAddIn& value) { m_addIns.push_back(value); return *this; }
    inline DescribeConnectClientAddInsResult& AddAddIns(ConnectClientAddIn&& value) { m_addIns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeConnectClientAddInsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConnectClientAddInsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConnectClientAddInsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectClientAddInsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectClientAddInsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectClientAddInsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectClientAddIn> m_addIns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
