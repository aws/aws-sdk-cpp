/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Peering.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeletePeeringResult
  {
  public:
    AWS_NETWORKMANAGER_API DeletePeeringResult();
    AWS_NETWORKMANAGER_API DeletePeeringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeletePeeringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a deleted peering connection.</p>
     */
    inline const Peering& GetPeering() const{ return m_peering; }

    /**
     * <p>Information about a deleted peering connection.</p>
     */
    inline void SetPeering(const Peering& value) { m_peering = value; }

    /**
     * <p>Information about a deleted peering connection.</p>
     */
    inline void SetPeering(Peering&& value) { m_peering = std::move(value); }

    /**
     * <p>Information about a deleted peering connection.</p>
     */
    inline DeletePeeringResult& WithPeering(const Peering& value) { SetPeering(value); return *this;}

    /**
     * <p>Information about a deleted peering connection.</p>
     */
    inline DeletePeeringResult& WithPeering(Peering&& value) { SetPeering(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePeeringResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePeeringResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePeeringResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Peering m_peering;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
