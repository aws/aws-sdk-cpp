﻿/**
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


    ///@{
    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}
    inline DescribeConfigurationRevisionResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}
    inline DescribeConfigurationRevisionResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }
    inline DescribeConfigurationRevisionResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline DescribeConfigurationRevisionResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon MQ for ActiveMQ: the base64-encoded XML configuration. Amazon MQ for
     * RabbitMQ: base64-encoded Cuttlefish.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }
    inline void SetData(const Aws::String& value) { m_data = value; }
    inline void SetData(Aws::String&& value) { m_data = std::move(value); }
    inline void SetData(const char* value) { m_data.assign(value); }
    inline DescribeConfigurationRevisionResult& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline DescribeConfigurationRevisionResult& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline DescribeConfigurationRevisionResult& WithData(const char* value) { SetData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeConfigurationRevisionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeConfigurationRevisionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeConfigurationRevisionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConfigurationRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConfigurationRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConfigurationRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;

    Aws::Utils::DateTime m_created;

    Aws::String m_data;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
