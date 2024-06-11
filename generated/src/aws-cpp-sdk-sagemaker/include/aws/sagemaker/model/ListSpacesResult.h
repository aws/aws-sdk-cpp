﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SpaceDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListSpacesResult
  {
  public:
    AWS_SAGEMAKER_API ListSpacesResult();
    AWS_SAGEMAKER_API ListSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of spaces.</p>
     */
    inline const Aws::Vector<SpaceDetails>& GetSpaces() const{ return m_spaces; }
    inline void SetSpaces(const Aws::Vector<SpaceDetails>& value) { m_spaces = value; }
    inline void SetSpaces(Aws::Vector<SpaceDetails>&& value) { m_spaces = std::move(value); }
    inline ListSpacesResult& WithSpaces(const Aws::Vector<SpaceDetails>& value) { SetSpaces(value); return *this;}
    inline ListSpacesResult& WithSpaces(Aws::Vector<SpaceDetails>&& value) { SetSpaces(std::move(value)); return *this;}
    inline ListSpacesResult& AddSpaces(const SpaceDetails& value) { m_spaces.push_back(value); return *this; }
    inline ListSpacesResult& AddSpaces(SpaceDetails&& value) { m_spaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSpacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSpacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSpacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSpacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSpacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSpacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SpaceDetails> m_spaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
