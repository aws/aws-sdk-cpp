﻿/**
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


    ///@{
    /**
     * <p>The name of the environment tier. Valid values are <code>WebServer</code> or
     * <code>Worker</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsElasticBeanstalkEnvironmentTier& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of environment tier. Valid values are <code>Standard</code> or
     * <code>SQS/HTTP</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsElasticBeanstalkEnvironmentTier& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the environment tier.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentTier& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
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
