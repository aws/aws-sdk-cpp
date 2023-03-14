/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateVersionsResponse.h>
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
  class ListTemplateVersionsResult
  {
  public:
    AWS_PINPOINT_API ListTemplateVersionsResult();
    AWS_PINPOINT_API ListTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TemplateVersionsResponse& GetTemplateVersionsResponse() const{ return m_templateVersionsResponse; }

    
    inline void SetTemplateVersionsResponse(const TemplateVersionsResponse& value) { m_templateVersionsResponse = value; }

    
    inline void SetTemplateVersionsResponse(TemplateVersionsResponse&& value) { m_templateVersionsResponse = std::move(value); }

    
    inline ListTemplateVersionsResult& WithTemplateVersionsResponse(const TemplateVersionsResponse& value) { SetTemplateVersionsResponse(value); return *this;}

    
    inline ListTemplateVersionsResult& WithTemplateVersionsResponse(TemplateVersionsResponse&& value) { SetTemplateVersionsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTemplateVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTemplateVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTemplateVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TemplateVersionsResponse m_templateVersionsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
