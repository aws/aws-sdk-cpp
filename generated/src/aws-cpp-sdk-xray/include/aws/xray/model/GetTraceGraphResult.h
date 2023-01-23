/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/Service.h>
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
namespace XRay
{
namespace Model
{
  class GetTraceGraphResult
  {
  public:
    AWS_XRAY_API GetTraceGraphResult();
    AWS_XRAY_API GetTraceGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetTraceGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline GetTraceGraphResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline GetTraceGraphResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline GetTraceGraphResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }

    /**
     * <p>The services that have processed one of the specified requests.</p>
     */
    inline GetTraceGraphResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline GetTraceGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetTraceGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetTraceGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Service> m_services;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
