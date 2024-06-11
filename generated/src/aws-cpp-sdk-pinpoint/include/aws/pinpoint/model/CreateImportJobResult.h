﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ImportJobResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class CreateImportJobResult
  {
  public:
    AWS_PINPOINT_API CreateImportJobResult();
    AWS_PINPOINT_API CreateImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ImportJobResponse& GetImportJobResponse() const{ return m_importJobResponse; }
    inline void SetImportJobResponse(const ImportJobResponse& value) { m_importJobResponse = value; }
    inline void SetImportJobResponse(ImportJobResponse&& value) { m_importJobResponse = std::move(value); }
    inline CreateImportJobResult& WithImportJobResponse(const ImportJobResponse& value) { SetImportJobResponse(value); return *this;}
    inline CreateImportJobResult& WithImportJobResponse(ImportJobResponse&& value) { SetImportJobResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ImportJobResponse m_importJobResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
