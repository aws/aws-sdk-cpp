/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateVersionsResponse.h>
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

  private:

    TemplateVersionsResponse m_templateVersionsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
