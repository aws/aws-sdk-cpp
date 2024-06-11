﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QuickResponseData.h>
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
namespace QConnect
{
namespace Model
{
  class CreateQuickResponseResult
  {
  public:
    AWS_QCONNECT_API CreateQuickResponseResult();
    AWS_QCONNECT_API CreateQuickResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateQuickResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The quick response.</p>
     */
    inline const QuickResponseData& GetQuickResponse() const{ return m_quickResponse; }
    inline void SetQuickResponse(const QuickResponseData& value) { m_quickResponse = value; }
    inline void SetQuickResponse(QuickResponseData&& value) { m_quickResponse = std::move(value); }
    inline CreateQuickResponseResult& WithQuickResponse(const QuickResponseData& value) { SetQuickResponse(value); return *this;}
    inline CreateQuickResponseResult& WithQuickResponse(QuickResponseData&& value) { SetQuickResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateQuickResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateQuickResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateQuickResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QuickResponseData m_quickResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
