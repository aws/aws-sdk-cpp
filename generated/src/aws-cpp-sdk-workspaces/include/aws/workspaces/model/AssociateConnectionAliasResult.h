/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AssociateConnectionAliasResult
  {
  public:
    AWS_WORKSPACES_API AssociateConnectionAliasResult() = default;
    AWS_WORKSPACES_API AssociateConnectionAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API AssociateConnectionAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies. </p>
     */
    inline const Aws::String& GetConnectionIdentifier() const { return m_connectionIdentifier; }
    template<typename ConnectionIdentifierT = Aws::String>
    void SetConnectionIdentifier(ConnectionIdentifierT&& value) { m_connectionIdentifierHasBeenSet = true; m_connectionIdentifier = std::forward<ConnectionIdentifierT>(value); }
    template<typename ConnectionIdentifierT = Aws::String>
    AssociateConnectionAliasResult& WithConnectionIdentifier(ConnectionIdentifierT&& value) { SetConnectionIdentifier(std::forward<ConnectionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateConnectionAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionIdentifier;
    bool m_connectionIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
