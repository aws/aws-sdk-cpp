/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplatesResponse.h>
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
  class ListTemplatesResult
  {
  public:
    AWS_PINPOINT_API ListTemplatesResult();
    AWS_PINPOINT_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TemplatesResponse& GetTemplatesResponse() const{ return m_templatesResponse; }

    
    inline void SetTemplatesResponse(const TemplatesResponse& value) { m_templatesResponse = value; }

    
    inline void SetTemplatesResponse(TemplatesResponse&& value) { m_templatesResponse = std::move(value); }

    
    inline ListTemplatesResult& WithTemplatesResponse(const TemplatesResponse& value) { SetTemplatesResponse(value); return *this;}

    
    inline ListTemplatesResult& WithTemplatesResponse(TemplatesResponse&& value) { SetTemplatesResponse(std::move(value)); return *this;}

  private:

    TemplatesResponse m_templatesResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
