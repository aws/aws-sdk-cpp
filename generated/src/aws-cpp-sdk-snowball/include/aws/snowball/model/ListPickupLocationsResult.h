/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/Address.h>
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
namespace Snowball
{
namespace Model
{
  class ListPickupLocationsResult
  {
  public:
    AWS_SNOWBALL_API ListPickupLocationsResult();
    AWS_SNOWBALL_API ListPickupLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListPickupLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addresses = value; }

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addresses = std::move(value); }

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline ListPickupLocationsResult& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline ListPickupLocationsResult& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline ListPickupLocationsResult& AddAddresses(const Address& value) { m_addresses.push_back(value); return *this; }

    /**
     * <p>Information about the address of pickup locations.</p>
     */
    inline ListPickupLocationsResult& AddAddresses(Address&& value) { m_addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline ListPickupLocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline ListPickupLocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of <code>ListPickupLocationsResult</code> objects, you have the option of
     * specifying <code>NextToken</code> as the starting point for your returned
     * list.</p>
     */
    inline ListPickupLocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPickupLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPickupLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPickupLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Address> m_addresses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
