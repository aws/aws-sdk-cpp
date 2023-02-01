/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetwork.h>
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
  class UpdateCoreNetworkResult
  {
  public:
    AWS_NETWORKMANAGER_API UpdateCoreNetworkResult();
    AWS_NETWORKMANAGER_API UpdateCoreNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API UpdateCoreNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about a core network update.</p>
     */
    inline const CoreNetwork& GetCoreNetwork() const{ return m_coreNetwork; }

    /**
     * <p>Returns information about a core network update.</p>
     */
    inline void SetCoreNetwork(const CoreNetwork& value) { m_coreNetwork = value; }

    /**
     * <p>Returns information about a core network update.</p>
     */
    inline void SetCoreNetwork(CoreNetwork&& value) { m_coreNetwork = std::move(value); }

    /**
     * <p>Returns information about a core network update.</p>
     */
    inline UpdateCoreNetworkResult& WithCoreNetwork(const CoreNetwork& value) { SetCoreNetwork(value); return *this;}

    /**
     * <p>Returns information about a core network update.</p>
     */
    inline UpdateCoreNetworkResult& WithCoreNetwork(CoreNetwork&& value) { SetCoreNetwork(std::move(value)); return *this;}

  private:

    CoreNetwork m_coreNetwork;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
