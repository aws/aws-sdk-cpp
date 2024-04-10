/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for SendDataIntegrationEvent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/SendDataIntegrationEventResponse">AWS
   * API Reference</a></p>
   */
  class SendDataIntegrationEventResult
  {
  public:
    AWS_SUPPLYCHAIN_API SendDataIntegrationEventResult();
    AWS_SUPPLYCHAIN_API SendDataIntegrationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API SendDataIntegrationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique event identifier.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The unique event identifier.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventId = value; }

    /**
     * <p>The unique event identifier.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventId = std::move(value); }

    /**
     * <p>The unique event identifier.</p>
     */
    inline void SetEventId(const char* value) { m_eventId.assign(value); }

    /**
     * <p>The unique event identifier.</p>
     */
    inline SendDataIntegrationEventResult& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The unique event identifier.</p>
     */
    inline SendDataIntegrationEventResult& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The unique event identifier.</p>
     */
    inline SendDataIntegrationEventResult& WithEventId(const char* value) { SetEventId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SendDataIntegrationEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SendDataIntegrationEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SendDataIntegrationEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
