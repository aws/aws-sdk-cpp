/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class CreateStreamProcessorResult
  {
  public:
    AWS_REKOGNITION_API CreateStreamProcessorResult() = default;
    AWS_REKOGNITION_API CreateStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Number for the newly created stream processor.</p>
     */
    inline const Aws::String& GetStreamProcessorArn() const { return m_streamProcessorArn; }
    template<typename StreamProcessorArnT = Aws::String>
    void SetStreamProcessorArn(StreamProcessorArnT&& value) { m_streamProcessorArnHasBeenSet = true; m_streamProcessorArn = std::forward<StreamProcessorArnT>(value); }
    template<typename StreamProcessorArnT = Aws::String>
    CreateStreamProcessorResult& WithStreamProcessorArn(StreamProcessorArnT&& value) { SetStreamProcessorArn(std::forward<StreamProcessorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStreamProcessorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamProcessorArn;
    bool m_streamProcessorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
