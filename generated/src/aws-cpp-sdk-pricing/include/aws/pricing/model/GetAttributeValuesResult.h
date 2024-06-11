﻿/**
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
    AWS_PRICING_API GetAttributeValuesResult();
    AWS_PRICING_API GetAttributeValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetAttributeValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of values for an attribute. For example, <code>Throughput Optimized
     * HDD</code> and <code>Provisioned IOPS</code> are two available values for the
     * <code>AmazonEC2</code> <code>volumeType</code>.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetAttributeValues() const{ return m_attributeValues; }
    inline void SetAttributeValues(const Aws::Vector<AttributeValue>& value) { m_attributeValues = value; }
    inline void SetAttributeValues(Aws::Vector<AttributeValue>&& value) { m_attributeValues = std::move(value); }
    inline GetAttributeValuesResult& WithAttributeValues(const Aws::Vector<AttributeValue>& value) { SetAttributeValues(value); return *this;}
    inline GetAttributeValuesResult& WithAttributeValues(Aws::Vector<AttributeValue>&& value) { SetAttributeValues(std::move(value)); return *this;}
    inline GetAttributeValuesResult& AddAttributeValues(const AttributeValue& value) { m_attributeValues.push_back(value); return *this; }
    inline GetAttributeValuesResult& AddAttributeValues(AttributeValue&& value) { m_attributeValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAttributeValuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAttributeValuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAttributeValuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAttributeValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAttributeValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAttributeValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeValue> m_attributeValues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
