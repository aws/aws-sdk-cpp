/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
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
namespace Schemas
{
namespace Model
{
  class StartDiscovererResult
  {
  public:
    AWS_SCHEMAS_API StartDiscovererResult();
    AWS_SCHEMAS_API StartDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API StartDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const Aws::String& value) { m_discovererId = value; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(Aws::String&& value) { m_discovererId = std::move(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const char* value) { m_discovererId.assign(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline StartDiscovererResult& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline StartDiscovererResult& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline StartDiscovererResult& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}


    /**
     * <p>The state of the discoverer.</p>
     */
    inline const DiscovererState& GetState() const{ return m_state; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(const DiscovererState& value) { m_state = value; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(DiscovererState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline StartDiscovererResult& WithState(const DiscovererState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the discoverer.</p>
     */
    inline StartDiscovererResult& WithState(DiscovererState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_discovererId;

    DiscovererState m_state;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
