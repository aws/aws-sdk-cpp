/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioMembership.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListStudioMembersResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStudioMembersResult();
    AWS_NIMBLESTUDIO_API ListStudioMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStudioMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of admin members.</p>
     */
    inline const Aws::Vector<StudioMembership>& GetMembers() const{ return m_members; }

    /**
     * <p>A list of admin members.</p>
     */
    inline void SetMembers(const Aws::Vector<StudioMembership>& value) { m_members = value; }

    /**
     * <p>A list of admin members.</p>
     */
    inline void SetMembers(Aws::Vector<StudioMembership>&& value) { m_members = std::move(value); }

    /**
     * <p>A list of admin members.</p>
     */
    inline ListStudioMembersResult& WithMembers(const Aws::Vector<StudioMembership>& value) { SetMembers(value); return *this;}

    /**
     * <p>A list of admin members.</p>
     */
    inline ListStudioMembersResult& WithMembers(Aws::Vector<StudioMembership>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>A list of admin members.</p>
     */
    inline ListStudioMembersResult& AddMembers(const StudioMembership& value) { m_members.push_back(value); return *this; }

    /**
     * <p>A list of admin members.</p>
     */
    inline ListStudioMembersResult& AddMembers(StudioMembership&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StudioMembership> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
