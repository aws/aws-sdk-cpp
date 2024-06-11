﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/RepositorySyncDefinition.h>
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
namespace Proton
{
namespace Model
{
  class ListRepositorySyncDefinitionsResult
  {
  public:
    AWS_PROTON_API ListRepositorySyncDefinitionsResult();
    AWS_PROTON_API ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListRepositorySyncDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the current requested list of
     * repository sync definitions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRepositorySyncDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRepositorySyncDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRepositorySyncDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of repository sync definitions.</p>
     */
    inline const Aws::Vector<RepositorySyncDefinition>& GetSyncDefinitions() const{ return m_syncDefinitions; }
    inline void SetSyncDefinitions(const Aws::Vector<RepositorySyncDefinition>& value) { m_syncDefinitions = value; }
    inline void SetSyncDefinitions(Aws::Vector<RepositorySyncDefinition>&& value) { m_syncDefinitions = std::move(value); }
    inline ListRepositorySyncDefinitionsResult& WithSyncDefinitions(const Aws::Vector<RepositorySyncDefinition>& value) { SetSyncDefinitions(value); return *this;}
    inline ListRepositorySyncDefinitionsResult& WithSyncDefinitions(Aws::Vector<RepositorySyncDefinition>&& value) { SetSyncDefinitions(std::move(value)); return *this;}
    inline ListRepositorySyncDefinitionsResult& AddSyncDefinitions(const RepositorySyncDefinition& value) { m_syncDefinitions.push_back(value); return *this; }
    inline ListRepositorySyncDefinitionsResult& AddSyncDefinitions(RepositorySyncDefinition&& value) { m_syncDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRepositorySyncDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRepositorySyncDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRepositorySyncDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RepositorySyncDefinition> m_syncDefinitions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
