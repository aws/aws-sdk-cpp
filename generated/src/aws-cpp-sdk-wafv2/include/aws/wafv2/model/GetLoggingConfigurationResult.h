/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
  class GetLoggingConfigurationResult
  {
  public:
    AWS_WAFV2_API GetLoggingConfigurationResult();
    AWS_WAFV2_API GetLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>LoggingConfiguration</a> for the specified web ACL.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The <a>LoggingConfiguration</a> for the specified web ACL.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>The <a>LoggingConfiguration</a> for the specified web ACL.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>The <a>LoggingConfiguration</a> for the specified web ACL.</p>
     */
    inline GetLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The <a>LoggingConfiguration</a> for the specified web ACL.</p>
     */
    inline GetLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
