/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_PROTON_API ListServicesResult();
    AWS_PROTON_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next service in the array of
     * services, after the current requested list of services.</p>
     */
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServices() const{ return m_services; }

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline void SetServices(const Aws::Vector<ServiceSummary>& value) { m_services = value; }

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline void SetServices(Aws::Vector<ServiceSummary>&& value) { m_services = std::move(value); }

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline ListServicesResult& WithServices(const Aws::Vector<ServiceSummary>& value) { SetServices(value); return *this;}

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline ListServicesResult& WithServices(Aws::Vector<ServiceSummary>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline ListServicesResult& AddServices(const ServiceSummary& value) { m_services.push_back(value); return *this; }

    /**
     * <p>An array of services with summaries of detail data.</p>
     */
    inline ListServicesResult& AddServices(ServiceSummary&& value) { m_services.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceSummary> m_services;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
