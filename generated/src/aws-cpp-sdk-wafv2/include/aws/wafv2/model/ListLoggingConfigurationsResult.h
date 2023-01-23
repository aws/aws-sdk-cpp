/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/LoggingConfiguration.h>
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
namespace WAFV2
{
namespace Model
{
  class ListLoggingConfigurationsResult
  {
  public:
    AWS_WAFV2_API ListLoggingConfigurationsResult();
    AWS_WAFV2_API ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<LoggingConfiguration>& GetLoggingConfigurations() const{ return m_loggingConfigurations; }

    /**
     * <p/>
     */
    inline void SetLoggingConfigurations(const Aws::Vector<LoggingConfiguration>& value) { m_loggingConfigurations = value; }

    /**
     * <p/>
     */
    inline void SetLoggingConfigurations(Aws::Vector<LoggingConfiguration>&& value) { m_loggingConfigurations = std::move(value); }

    /**
     * <p/>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(const Aws::Vector<LoggingConfiguration>& value) { SetLoggingConfigurations(value); return *this;}

    /**
     * <p/>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(Aws::Vector<LoggingConfiguration>&& value) { SetLoggingConfigurations(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(const LoggingConfiguration& value) { m_loggingConfigurations.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfiguration&& value) { m_loggingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<LoggingConfiguration> m_loggingConfigurations;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
