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
  class CreateConnectionAliasResult
  {
  public:
    AWS_WORKSPACES_API CreateConnectionAliasResult();
    AWS_WORKSPACES_API CreateConnectionAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateConnectionAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }
    inline void SetAliasId(const Aws::String& value) { m_aliasId = value; }
    inline void SetAliasId(Aws::String&& value) { m_aliasId = std::move(value); }
    inline void SetAliasId(const char* value) { m_aliasId.assign(value); }
    inline CreateConnectionAliasResult& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}
    inline CreateConnectionAliasResult& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}
    inline CreateConnectionAliasResult& WithAliasId(const char* value) { SetAliasId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConnectionAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConnectionAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConnectionAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
