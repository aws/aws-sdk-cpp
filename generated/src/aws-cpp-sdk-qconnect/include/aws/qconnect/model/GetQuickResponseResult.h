/**
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
  class GetQuickResponseResult
  {
  public:
    AWS_QCONNECT_API GetQuickResponseResult();
    AWS_QCONNECT_API GetQuickResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetQuickResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The quick response.</p>
     */
    inline const QuickResponseData& GetQuickResponse() const{ return m_quickResponse; }

    /**
     * <p>The quick response.</p>
     */
    inline void SetQuickResponse(const QuickResponseData& value) { m_quickResponse = value; }

    /**
     * <p>The quick response.</p>
     */
    inline void SetQuickResponse(QuickResponseData&& value) { m_quickResponse = std::move(value); }

    /**
     * <p>The quick response.</p>
     */
    inline GetQuickResponseResult& WithQuickResponse(const QuickResponseData& value) { SetQuickResponse(value); return *this;}

    /**
     * <p>The quick response.</p>
     */
    inline GetQuickResponseResult& WithQuickResponse(QuickResponseData&& value) { SetQuickResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQuickResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQuickResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQuickResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QuickResponseData m_quickResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
