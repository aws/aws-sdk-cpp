/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Offering.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListOfferingsResult
  {
  public:
    AWS_MEDIACONNECT_API ListOfferingsResult();
    AWS_MEDIACONNECT_API ListOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline ListOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline ListOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline ListOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline const Aws::Vector<Offering>& GetOfferings() const{ return m_offerings; }

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline void SetOfferings(const Aws::Vector<Offering>& value) { m_offerings = value; }

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline void SetOfferings(Aws::Vector<Offering>&& value) { m_offerings = std::move(value); }

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline ListOfferingsResult& WithOfferings(const Aws::Vector<Offering>& value) { SetOfferings(value); return *this;}

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline ListOfferingsResult& WithOfferings(Aws::Vector<Offering>&& value) { SetOfferings(std::move(value)); return *this;}

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline ListOfferingsResult& AddOfferings(const Offering& value) { m_offerings.push_back(value); return *this; }

    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline ListOfferingsResult& AddOfferings(Offering&& value) { m_offerings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Offering> m_offerings;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
