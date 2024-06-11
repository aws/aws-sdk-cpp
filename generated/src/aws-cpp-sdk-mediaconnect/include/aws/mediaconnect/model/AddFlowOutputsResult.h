/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Output.h>
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
namespace MediaConnect
{
namespace Model
{
  class AddFlowOutputsResult
  {
  public:
    AWS_MEDIACONNECT_API AddFlowOutputsResult();
    AWS_MEDIACONNECT_API AddFlowOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddFlowOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the flow that these outputs were added to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline AddFlowOutputsResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline AddFlowOutputsResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline AddFlowOutputsResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The details of the newly added outputs.
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputs = std::move(value); }
    inline AddFlowOutputsResult& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline AddFlowOutputsResult& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline AddFlowOutputsResult& AddOutputs(const Output& value) { m_outputs.push_back(value); return *this; }
    inline AddFlowOutputsResult& AddOutputs(Output&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddFlowOutputsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddFlowOutputsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddFlowOutputsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    Aws::Vector<Output> m_outputs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
