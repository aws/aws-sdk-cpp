﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/Studio.h>
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
  class ListStudiosResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStudiosResult();
    AWS_NIMBLESTUDIO_API ListStudiosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStudiosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStudiosResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStudiosResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStudiosResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of studios.</p>
     */
    inline const Aws::Vector<Studio>& GetStudios() const{ return m_studios; }
    inline void SetStudios(const Aws::Vector<Studio>& value) { m_studios = value; }
    inline void SetStudios(Aws::Vector<Studio>&& value) { m_studios = std::move(value); }
    inline ListStudiosResult& WithStudios(const Aws::Vector<Studio>& value) { SetStudios(value); return *this;}
    inline ListStudiosResult& WithStudios(Aws::Vector<Studio>&& value) { SetStudios(std::move(value)); return *this;}
    inline ListStudiosResult& AddStudios(const Studio& value) { m_studios.push_back(value); return *this; }
    inline ListStudiosResult& AddStudios(Studio&& value) { m_studios.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStudiosResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStudiosResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStudiosResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Studio> m_studios;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
