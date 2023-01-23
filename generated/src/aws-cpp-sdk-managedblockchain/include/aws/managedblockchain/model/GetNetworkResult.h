/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Network.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class GetNetworkResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API GetNetworkResult();
    AWS_MANAGEDBLOCKCHAIN_API GetNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API GetNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline const Network& GetNetwork() const{ return m_network; }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline void SetNetwork(const Network& value) { m_network = value; }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline void SetNetwork(Network&& value) { m_network = std::move(value); }

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline GetNetworkResult& WithNetwork(const Network& value) { SetNetwork(value); return *this;}

    /**
     * <p>An object containing network configuration parameters.</p>
     */
    inline GetNetworkResult& WithNetwork(Network&& value) { SetNetwork(std::move(value)); return *this;}

  private:

    Network m_network;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
