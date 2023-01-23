/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/ConfigurationRevision.h>
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
  class CreateConfigurationResult
  {
  public:
    AWS_MQ_API CreateConfigurationResult();
    AWS_MQ_API CreateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API CreateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline CreateConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline CreateConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Required. The Amazon Resource Name (ARN) of the configuration.</p>
     */
    inline CreateConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline CreateConfigurationResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>Optional. The authentication strategy associated with the configuration. The
     * default is SIMPLE.</p>
     */
    inline CreateConfigurationResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


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
    inline CreateConfigurationResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>Required. The date and time of the configuration.</p>
     */
    inline CreateConfigurationResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


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
    inline CreateConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline CreateConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline CreateConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The latest revision of the configuration.</p>
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * <p>The latest revision of the configuration.</p>
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * <p>The latest revision of the configuration.</p>
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * <p>The latest revision of the configuration.</p>
     */
    inline CreateConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * <p>The latest revision of the configuration.</p>
     */
    inline CreateConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


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
    inline CreateConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline CreateConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Required. The name of the configuration. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 1-150 characters long.</p>
     */
    inline CreateConfigurationResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    AuthenticationStrategy m_authenticationStrategy;

    Aws::Utils::DateTime m_created;

    Aws::String m_id;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
