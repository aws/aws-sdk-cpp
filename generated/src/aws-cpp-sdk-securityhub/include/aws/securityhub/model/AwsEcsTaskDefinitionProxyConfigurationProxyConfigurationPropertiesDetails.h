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
   * <p>A network configuration parameter to provide to the Container Network
   * Interface (CNI) plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionProxyConfigurationProxyConfigurationPropertiesDetails& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
