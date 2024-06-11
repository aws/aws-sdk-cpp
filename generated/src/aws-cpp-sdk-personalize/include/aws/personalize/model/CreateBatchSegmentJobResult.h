﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateBatchSegmentJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult();
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the batch segment job.</p>
     */
    inline const Aws::String& GetBatchSegmentJobArn() const{ return m_batchSegmentJobArn; }
    inline void SetBatchSegmentJobArn(const Aws::String& value) { m_batchSegmentJobArn = value; }
    inline void SetBatchSegmentJobArn(Aws::String&& value) { m_batchSegmentJobArn = std::move(value); }
    inline void SetBatchSegmentJobArn(const char* value) { m_batchSegmentJobArn.assign(value); }
    inline CreateBatchSegmentJobResult& WithBatchSegmentJobArn(const Aws::String& value) { SetBatchSegmentJobArn(value); return *this;}
    inline CreateBatchSegmentJobResult& WithBatchSegmentJobArn(Aws::String&& value) { SetBatchSegmentJobArn(std::move(value)); return *this;}
    inline CreateBatchSegmentJobResult& WithBatchSegmentJobArn(const char* value) { SetBatchSegmentJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBatchSegmentJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBatchSegmentJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBatchSegmentJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_batchSegmentJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
