/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing/model/AttributeValue.h>
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
namespace Pricing
{
namespace Model
{
  class GetAttributeValuesResult
  {
  public:
    AWS_PRICING_API GetAttributeValuesResult() = default;
    AWS_PRICING_API GetAttributeValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetAttributeValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetAttributeValues() const { return m_attributeValues; }
    template<typename AttributeValuesT = Aws::Vector<AttributeValue>>
    void SetAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::forward<AttributeValuesT>(value); }
    template<typename AttributeValuesT = Aws::Vector<AttributeValue>>
    GetAttributeValuesResult& WithAttributeValues(AttributeValuesT&& value) { SetAttributeValues(std::forward<AttributeValuesT>(value)); return *this;}
    template<typename AttributeValuesT = AttributeValue>
    GetAttributeValuesResult& AddAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.emplace_back(std::forward<AttributeValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAttributeValuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAttributeValuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeValue> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
