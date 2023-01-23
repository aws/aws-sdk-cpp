/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetTransitGatewayRegistrationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult();
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The transit gateway registrations.</p>
     */
    inline const Aws::Vector<TransitGatewayRegistration>& GetTransitGatewayRegistrations() const{ return m_transitGatewayRegistrations; }

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline void SetTransitGatewayRegistrations(const Aws::Vector<TransitGatewayRegistration>& value) { m_transitGatewayRegistrations = value; }

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline void SetTransitGatewayRegistrations(Aws::Vector<TransitGatewayRegistration>&& value) { m_transitGatewayRegistrations = std::move(value); }

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline GetTransitGatewayRegistrationsResult& WithTransitGatewayRegistrations(const Aws::Vector<TransitGatewayRegistration>& value) { SetTransitGatewayRegistrations(value); return *this;}

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline GetTransitGatewayRegistrationsResult& WithTransitGatewayRegistrations(Aws::Vector<TransitGatewayRegistration>&& value) { SetTransitGatewayRegistrations(std::move(value)); return *this;}

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline GetTransitGatewayRegistrationsResult& AddTransitGatewayRegistrations(const TransitGatewayRegistration& value) { m_transitGatewayRegistrations.push_back(value); return *this; }

    /**
     * <p>The transit gateway registrations.</p>
     */
    inline GetTransitGatewayRegistrationsResult& AddTransitGatewayRegistrations(TransitGatewayRegistration&& value) { m_transitGatewayRegistrations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TransitGatewayRegistration> m_transitGatewayRegistrations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
