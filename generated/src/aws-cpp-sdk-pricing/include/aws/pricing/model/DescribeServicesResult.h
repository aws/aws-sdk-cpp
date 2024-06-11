/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing/model/Service.h>
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
  class DescribeServicesResult
  {
  public:
    AWS_PRICING_API DescribeServicesResult();
    AWS_PRICING_API DescribeServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API DescribeServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }
    inline DescribeServicesResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}
    inline DescribeServicesResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}
    inline DescribeServicesResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }
    inline DescribeServicesResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format version of the response. For example, <code>aws_v1</code>.</p>
     */
    inline const Aws::String& GetFormatVersion() const{ return m_formatVersion; }
    inline void SetFormatVersion(const Aws::String& value) { m_formatVersion = value; }
    inline void SetFormatVersion(Aws::String&& value) { m_formatVersion = std::move(value); }
    inline void SetFormatVersion(const char* value) { m_formatVersion.assign(value); }
    inline DescribeServicesResult& WithFormatVersion(const Aws::String& value) { SetFormatVersion(value); return *this;}
    inline DescribeServicesResult& WithFormatVersion(Aws::String&& value) { SetFormatVersion(std::move(value)); return *this;}
    inline DescribeServicesResult& WithFormatVersion(const char* value) { SetFormatVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Service> m_services;

    Aws::String m_formatVersion;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
