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
  class CreateConnectClientAddInResult
  {
  public:
    AWS_WORKSPACES_API CreateConnectClientAddInResult();
    AWS_WORKSPACES_API CreateConnectClientAddInResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateConnectClientAddInResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The client add-in identifier.</p>
     */
    inline const Aws::String& GetAddInId() const{ return m_addInId; }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(const Aws::String& value) { m_addInId = value; }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(Aws::String&& value) { m_addInId = std::move(value); }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(const char* value) { m_addInId.assign(value); }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline CreateConnectClientAddInResult& WithAddInId(const Aws::String& value) { SetAddInId(value); return *this;}

    /**
     * <p>The client add-in identifier.</p>
     */
    inline CreateConnectClientAddInResult& WithAddInId(Aws::String&& value) { SetAddInId(std::move(value)); return *this;}

    /**
     * <p>The client add-in identifier.</p>
     */
    inline CreateConnectClientAddInResult& WithAddInId(const char* value) { SetAddInId(value); return *this;}

  private:

    Aws::String m_addInId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
