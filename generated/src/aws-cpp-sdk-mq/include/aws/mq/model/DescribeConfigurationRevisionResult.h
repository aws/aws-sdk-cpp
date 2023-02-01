/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MQ
{
namespace Model
{
  class DescribeConfigurationRevisionResult
  {
  public:
    AWS_MQ_API DescribeConfigurationRevisionResult();
    AWS_MQ_API DescribeConfigurationRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeConfigurationRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline void SetData(const Aws::String& value) { m_data = value; }

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline void SetData(Aws::String&& value) { m_data = std::move(value); }

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline void SetData(const char* value) { m_data.assign(value); }

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>Required. The base64-encoded XML configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the configuration.</p>
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configurationId;

    Aws::Utils::DateTime m_created;

    Aws::String m_data;

    Aws::String m_description;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
