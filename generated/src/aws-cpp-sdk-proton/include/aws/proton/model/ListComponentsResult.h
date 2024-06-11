﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/ComponentSummary.h>
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
  class ListComponentsResult
  {
  public:
    AWS_PROTON_API ListComponentsResult();
    AWS_PROTON_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of components with summary data.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponents() const{ return m_components; }
    inline void SetComponents(const Aws::Vector<ComponentSummary>& value) { m_components = value; }
    inline void SetComponents(Aws::Vector<ComponentSummary>&& value) { m_components = std::move(value); }
    inline ListComponentsResult& WithComponents(const Aws::Vector<ComponentSummary>& value) { SetComponents(value); return *this;}
    inline ListComponentsResult& WithComponents(Aws::Vector<ComponentSummary>&& value) { SetComponents(std::move(value)); return *this;}
    inline ListComponentsResult& AddComponents(const ComponentSummary& value) { m_components.push_back(value); return *this; }
    inline ListComponentsResult& AddComponents(ComponentSummary&& value) { m_components.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates the location of the next component in the array of
     * components, after the current requested list of components.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComponentSummary> m_components;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
