﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAliasesResult
  {
  public:
    AWS_SAGEMAKER_API ListAliasesResult();
    AWS_SAGEMAKER_API ListAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of SageMaker AI image version aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSageMakerImageVersionAliases() const{ return m_sageMakerImageVersionAliases; }
    inline void SetSageMakerImageVersionAliases(const Aws::Vector<Aws::String>& value) { m_sageMakerImageVersionAliases = value; }
    inline void SetSageMakerImageVersionAliases(Aws::Vector<Aws::String>&& value) { m_sageMakerImageVersionAliases = std::move(value); }
    inline ListAliasesResult& WithSageMakerImageVersionAliases(const Aws::Vector<Aws::String>& value) { SetSageMakerImageVersionAliases(value); return *this;}
    inline ListAliasesResult& WithSageMakerImageVersionAliases(Aws::Vector<Aws::String>&& value) { SetSageMakerImageVersionAliases(std::move(value)); return *this;}
    inline ListAliasesResult& AddSageMakerImageVersionAliases(const Aws::String& value) { m_sageMakerImageVersionAliases.push_back(value); return *this; }
    inline ListAliasesResult& AddSageMakerImageVersionAliases(Aws::String&& value) { m_sageMakerImageVersionAliases.push_back(std::move(value)); return *this; }
    inline ListAliasesResult& AddSageMakerImageVersionAliases(const char* value) { m_sageMakerImageVersionAliases.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sageMakerImageVersionAliases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
