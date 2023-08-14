/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareDetails.h>
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
namespace Omics
{
namespace Model
{
  class ListSharesResult
  {
  public:
    AWS_OMICS_API ListSharesResult();
    AWS_OMICS_API ListSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The shares available and their meta details. </p>
     */
    inline const Aws::Vector<ShareDetails>& GetShares() const{ return m_shares; }

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline void SetShares(const Aws::Vector<ShareDetails>& value) { m_shares = value; }

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline void SetShares(Aws::Vector<ShareDetails>&& value) { m_shares = std::move(value); }

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline ListSharesResult& WithShares(const Aws::Vector<ShareDetails>& value) { SetShares(value); return *this;}

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline ListSharesResult& WithShares(Aws::Vector<ShareDetails>&& value) { SetShares(std::move(value)); return *this;}

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline ListSharesResult& AddShares(const ShareDetails& value) { m_shares.push_back(value); return *this; }

    /**
     * <p> The shares available and their meta details. </p>
     */
    inline ListSharesResult& AddShares(ShareDetails&& value) { m_shares.push_back(std::move(value)); return *this; }


    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline ListSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline ListSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline ListSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ShareDetails> m_shares;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
