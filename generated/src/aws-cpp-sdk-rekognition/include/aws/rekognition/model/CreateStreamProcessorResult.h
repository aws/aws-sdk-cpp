﻿/**
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
    AWS_REKOGNITION_API CreateStreamProcessorResult();
    AWS_REKOGNITION_API CreateStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Number for the newly created stream processor.</p>
     */
    inline const Aws::String& GetStreamProcessorArn() const{ return m_streamProcessorArn; }
    inline void SetStreamProcessorArn(const Aws::String& value) { m_streamProcessorArn = value; }
    inline void SetStreamProcessorArn(Aws::String&& value) { m_streamProcessorArn = std::move(value); }
    inline void SetStreamProcessorArn(const char* value) { m_streamProcessorArn.assign(value); }
    inline CreateStreamProcessorResult& WithStreamProcessorArn(const Aws::String& value) { SetStreamProcessorArn(value); return *this;}
    inline CreateStreamProcessorResult& WithStreamProcessorArn(Aws::String&& value) { SetStreamProcessorArn(std::move(value)); return *this;}
    inline CreateStreamProcessorResult& WithStreamProcessorArn(const char* value) { SetStreamProcessorArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStreamProcessorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStreamProcessorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStreamProcessorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_streamProcessorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
