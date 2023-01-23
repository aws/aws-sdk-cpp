/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetworkPolicy.h>
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
  class DeleteCoreNetworkPolicyVersionResult
  {
  public:
    AWS_NETWORKMANAGER_API DeleteCoreNetworkPolicyVersionResult();
    AWS_NETWORKMANAGER_API DeleteCoreNetworkPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeleteCoreNetworkPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the deleted policy version. </p>
     */
    inline const CoreNetworkPolicy& GetCoreNetworkPolicy() const{ return m_coreNetworkPolicy; }

    /**
     * <p>Returns information about the deleted policy version. </p>
     */
    inline void SetCoreNetworkPolicy(const CoreNetworkPolicy& value) { m_coreNetworkPolicy = value; }

    /**
     * <p>Returns information about the deleted policy version. </p>
     */
    inline void SetCoreNetworkPolicy(CoreNetworkPolicy&& value) { m_coreNetworkPolicy = std::move(value); }

    /**
     * <p>Returns information about the deleted policy version. </p>
     */
    inline DeleteCoreNetworkPolicyVersionResult& WithCoreNetworkPolicy(const CoreNetworkPolicy& value) { SetCoreNetworkPolicy(value); return *this;}

    /**
     * <p>Returns information about the deleted policy version. </p>
     */
    inline DeleteCoreNetworkPolicyVersionResult& WithCoreNetworkPolicy(CoreNetworkPolicy&& value) { SetCoreNetworkPolicy(std::move(value)); return *this;}

  private:

    CoreNetworkPolicy m_coreNetworkPolicy;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
