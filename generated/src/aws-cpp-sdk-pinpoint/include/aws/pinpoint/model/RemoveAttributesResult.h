/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AttributesResource.h>
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
  class RemoveAttributesResult
  {
  public:
    AWS_PINPOINT_API RemoveAttributesResult();
    AWS_PINPOINT_API RemoveAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API RemoveAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AttributesResource& GetAttributesResource() const{ return m_attributesResource; }

    
    inline void SetAttributesResource(const AttributesResource& value) { m_attributesResource = value; }

    
    inline void SetAttributesResource(AttributesResource&& value) { m_attributesResource = std::move(value); }

    
    inline RemoveAttributesResult& WithAttributesResource(const AttributesResource& value) { SetAttributesResource(value); return *this;}

    
    inline RemoveAttributesResult& WithAttributesResource(AttributesResource&& value) { SetAttributesResource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RemoveAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RemoveAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RemoveAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AttributesResource m_attributesResource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
