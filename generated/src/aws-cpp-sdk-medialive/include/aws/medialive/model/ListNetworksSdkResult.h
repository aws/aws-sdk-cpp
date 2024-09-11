/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/DescribeNetworkSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListNetworksResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNetworksResponse">AWS
   * API Reference</a></p>
   */
  class ListNetworksSdkResult
  {
  public:
    AWS_MEDIALIVE_API ListNetworksSdkResult();
    AWS_MEDIALIVE_API ListNetworksSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListNetworksSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * An array of networks that you have created.
     */
    inline const Aws::Vector<DescribeNetworkSummary>& GetNetworks() const{ return m_networks; }
    inline void SetNetworks(const Aws::Vector<DescribeNetworkSummary>& value) { m_networks = value; }
    inline void SetNetworks(Aws::Vector<DescribeNetworkSummary>&& value) { m_networks = std::move(value); }
    inline ListNetworksSdkResult& WithNetworks(const Aws::Vector<DescribeNetworkSummary>& value) { SetNetworks(value); return *this;}
    inline ListNetworksSdkResult& WithNetworks(Aws::Vector<DescribeNetworkSummary>&& value) { SetNetworks(std::move(value)); return *this;}
    inline ListNetworksSdkResult& AddNetworks(const DescribeNetworkSummary& value) { m_networks.push_back(value); return *this; }
    inline ListNetworksSdkResult& AddNetworks(DescribeNetworkSummary&& value) { m_networks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next ListNetworks request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNetworksSdkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNetworksSdkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNetworksSdkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNetworksSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNetworksSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNetworksSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeNetworkSummary> m_networks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
