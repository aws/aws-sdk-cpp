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
  class CreateConnectionAliasResult
  {
  public:
    AWS_WORKSPACES_API CreateConnectionAliasResult();
    AWS_WORKSPACES_API CreateConnectionAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateConnectionAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasId = value; }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasId = std::move(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasId.assign(value); }

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline CreateConnectionAliasResult& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline CreateConnectionAliasResult& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connection alias.</p>
     */
    inline CreateConnectionAliasResult& WithAliasId(const char* value) { SetAliasId(value); return *this;}

  private:

    Aws::String m_aliasId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
