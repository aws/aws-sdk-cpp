/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentData.h>
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
  class UpdateContentResult
  {
  public:
    AWS_QCONNECT_API UpdateContentResult();
    AWS_QCONNECT_API UpdateContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content.</p>
     */
    inline const ContentData& GetContent() const{ return m_content; }

    /**
     * <p>The content.</p>
     */
    inline void SetContent(const ContentData& value) { m_content = value; }

    /**
     * <p>The content.</p>
     */
    inline void SetContent(ContentData&& value) { m_content = std::move(value); }

    /**
     * <p>The content.</p>
     */
    inline UpdateContentResult& WithContent(const ContentData& value) { SetContent(value); return *this;}

    /**
     * <p>The content.</p>
     */
    inline UpdateContentResult& WithContent(ContentData&& value) { SetContent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContentData m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
