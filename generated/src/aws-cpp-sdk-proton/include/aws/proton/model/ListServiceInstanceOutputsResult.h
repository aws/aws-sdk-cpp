﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Output.h>
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
  class ListServiceInstanceOutputsResult
  {
  public:
    AWS_PROTON_API ListServiceInstanceOutputsResult();
    AWS_PROTON_API ListServiceInstanceOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceInstanceOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the current requested list of outputs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceInstanceOutputsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceInstanceOutputsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceInstanceOutputsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of service instance Infrastructure as Code (IaC) outputs.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputs = std::move(value); }
    inline ListServiceInstanceOutputsResult& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline ListServiceInstanceOutputsResult& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline ListServiceInstanceOutputsResult& AddOutputs(const Output& value) { m_outputs.push_back(value); return *this; }
    inline ListServiceInstanceOutputsResult& AddOutputs(Output&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceInstanceOutputsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceInstanceOutputsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceInstanceOutputsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Output> m_outputs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
