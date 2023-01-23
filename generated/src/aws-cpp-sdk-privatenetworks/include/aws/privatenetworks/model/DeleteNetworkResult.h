/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/Network.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class DeleteNetworkResult
  {
  public:
    AWS_PRIVATENETWORKS_API DeleteNetworkResult();
    AWS_PRIVATENETWORKS_API DeleteNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API DeleteNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network.</p>
     */
    inline const Network& GetNetwork() const{ return m_network; }

    /**
     * <p>Information about the network.</p>
     */
    inline void SetNetwork(const Network& value) { m_network = value; }

    /**
     * <p>Information about the network.</p>
     */
    inline void SetNetwork(Network&& value) { m_network = std::move(value); }

    /**
     * <p>Information about the network.</p>
     */
    inline DeleteNetworkResult& WithNetwork(const Network& value) { SetNetwork(value); return *this;}

    /**
     * <p>Information about the network.</p>
     */
    inline DeleteNetworkResult& WithNetwork(Network&& value) { SetNetwork(std::move(value)); return *this;}

  private:

    Network m_network;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
