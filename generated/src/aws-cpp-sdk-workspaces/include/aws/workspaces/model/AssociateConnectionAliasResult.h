﻿/**
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
    AWS_WORKSPACES_API AssociateConnectionAliasResult();
    AWS_WORKSPACES_API AssociateConnectionAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API AssociateConnectionAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the connection alias association. You use the connection
     * identifier in the DNS TXT record when you're configuring your DNS routing
     * policies. </p>
     */
    inline const Aws::String& GetConnectionIdentifier() const{ return m_connectionIdentifier; }
    inline void SetConnectionIdentifier(const Aws::String& value) { m_connectionIdentifier = value; }
    inline void SetConnectionIdentifier(Aws::String&& value) { m_connectionIdentifier = std::move(value); }
    inline void SetConnectionIdentifier(const char* value) { m_connectionIdentifier.assign(value); }
    inline AssociateConnectionAliasResult& WithConnectionIdentifier(const Aws::String& value) { SetConnectionIdentifier(value); return *this;}
    inline AssociateConnectionAliasResult& WithConnectionIdentifier(Aws::String&& value) { SetConnectionIdentifier(std::move(value)); return *this;}
    inline AssociateConnectionAliasResult& WithConnectionIdentifier(const char* value) { SetConnectionIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateConnectionAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateConnectionAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateConnectionAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
