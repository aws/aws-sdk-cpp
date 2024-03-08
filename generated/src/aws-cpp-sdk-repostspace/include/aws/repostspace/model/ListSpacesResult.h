/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/SpaceData.h>
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
namespace repostspace
{
namespace Model
{
  class ListSpacesResult
  {
  public:
    AWS_REPOSTSPACE_API ListSpacesResult();
    AWS_REPOSTSPACE_API ListSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API ListSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline ListSpacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline ListSpacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you use when you request the next set of private re:Posts.</p>
     */
    inline ListSpacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline const Aws::Vector<SpaceData>& GetSpaces() const{ return m_spaces; }

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline void SetSpaces(const Aws::Vector<SpaceData>& value) { m_spaces = value; }

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline void SetSpaces(Aws::Vector<SpaceData>&& value) { m_spaces = std::move(value); }

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline ListSpacesResult& WithSpaces(const Aws::Vector<SpaceData>& value) { SetSpaces(value); return *this;}

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline ListSpacesResult& WithSpaces(Aws::Vector<SpaceData>&& value) { SetSpaces(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline ListSpacesResult& AddSpaces(const SpaceData& value) { m_spaces.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain some information about the private
     * re:Posts in the account.</p>
     */
    inline ListSpacesResult& AddSpaces(SpaceData&& value) { m_spaces.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSpacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSpacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSpacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SpaceData> m_spaces;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
