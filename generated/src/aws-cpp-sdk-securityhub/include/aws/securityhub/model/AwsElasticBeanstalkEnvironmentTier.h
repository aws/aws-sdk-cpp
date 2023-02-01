/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the tier of the environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticBeanstalkEnvironmentTier">AWS
   * API Reference</a></p>
   */
  class AwsElasticBeanstalkEnvironmentTier
  {
  public:
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentTier();
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentTier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentTier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The version of the environment tier.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the environment tier.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the environment tier.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the environment tier.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the environment tier.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the environment tier.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the environment tier.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the environment tier.</p>
     */
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
