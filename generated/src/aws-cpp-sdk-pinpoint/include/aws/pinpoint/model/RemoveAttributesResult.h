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
    AWS_PINPOINT_API RemoveAttributesResult() = default;
    AWS_PINPOINT_API RemoveAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API RemoveAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AttributesResource& GetAttributesResource() const { return m_attributesResource; }
    template<typename AttributesResourceT = AttributesResource>
    void SetAttributesResource(AttributesResourceT&& value) { m_attributesResourceHasBeenSet = true; m_attributesResource = std::forward<AttributesResourceT>(value); }
    template<typename AttributesResourceT = AttributesResource>
    RemoveAttributesResult& WithAttributesResource(AttributesResourceT&& value) { SetAttributesResource(std::forward<AttributesResourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RemoveAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AttributesResource m_attributesResource;
    bool m_attributesResourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
