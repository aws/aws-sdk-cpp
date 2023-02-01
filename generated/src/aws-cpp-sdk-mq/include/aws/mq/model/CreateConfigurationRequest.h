/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Creates a new configuration for the specified configuration name. Amazon MQ
   * uses the default configuration (the engine type and version).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationRequest : public MQRequest
  {
  public:
    AWS_MQ_API CreateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguration"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::move(value); }

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline CreateConfigurationRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline CreateConfigurationRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline CreateConfigurationRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline CreateConfigurationRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline CreateConfigurationRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline CreateConfigurationRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Required. The broker engine's version. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline CreateConfigurationRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline CreateConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline CreateConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline CreateConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Create tags when creating the configuration.</p>
     */
    inline CreateConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AuthenticationStrategy m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
