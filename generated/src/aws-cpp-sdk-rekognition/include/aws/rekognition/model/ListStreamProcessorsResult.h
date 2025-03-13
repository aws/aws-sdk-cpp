/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessor.h>
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
namespace Rekognition
{
namespace Model
{
  class ListStreamProcessorsResult
  {
  public:
    AWS_REKOGNITION_API ListStreamProcessorsResult() = default;
    AWS_REKOGNITION_API ListStreamProcessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListStreamProcessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamProcessorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline const Aws::Vector<StreamProcessor>& GetStreamProcessors() const { return m_streamProcessors; }
    template<typename StreamProcessorsT = Aws::Vector<StreamProcessor>>
    void SetStreamProcessors(StreamProcessorsT&& value) { m_streamProcessorsHasBeenSet = true; m_streamProcessors = std::forward<StreamProcessorsT>(value); }
    template<typename StreamProcessorsT = Aws::Vector<StreamProcessor>>
    ListStreamProcessorsResult& WithStreamProcessors(StreamProcessorsT&& value) { SetStreamProcessors(std::forward<StreamProcessorsT>(value)); return *this;}
    template<typename StreamProcessorsT = StreamProcessor>
    ListStreamProcessorsResult& AddStreamProcessors(StreamProcessorsT&& value) { m_streamProcessorsHasBeenSet = true; m_streamProcessors.emplace_back(std::forward<StreamProcessorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamProcessorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StreamProcessor> m_streamProcessors;
    bool m_streamProcessorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
