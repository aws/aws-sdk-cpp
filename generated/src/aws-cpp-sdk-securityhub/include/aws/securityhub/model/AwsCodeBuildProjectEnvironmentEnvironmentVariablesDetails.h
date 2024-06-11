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
   * <p>Information about an environment variable that is available to builds for the
   * build project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the environment variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of environment variable.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the environment variable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
