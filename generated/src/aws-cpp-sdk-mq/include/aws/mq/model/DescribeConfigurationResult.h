/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/ConfigurationRevision.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribeConfigurationResult
  {
  public:
    AWS_MQ_API DescribeConfigurationResult();
    AWS_MQ_API DescribeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Required. The ARN of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline DescribeConfigurationResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline DescribeConfigurationResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline DescribeConfigurationResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline DescribeConfigurationResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Required. The description of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline DescribeConfigurationResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline DescribeConfigurationResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeConfigurationResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeConfigurationResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see, <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeConfigurationResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Required. The latest revision of the configuration.</p>
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * <p>Required. The latest revision of the configuration.</p>
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * <p>Required. The latest revision of the configuration.</p>
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * <p>Required. The latest revision of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * <p>Required. The latest revision of the configuration.</p>
     */
    inline DescribeConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline DescribeConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline DescribeConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline DescribeConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags associated with this configuration.</p>
     */
    inline DescribeConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    AuthenticationStrategy m_authenticationStrategy;

    Aws::Utils::DateTime m_created;

    Aws::String m_description;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_id;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
