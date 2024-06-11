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
   * <p>A namespaced kernel parameter to set in the container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespaced kernel parameter for which to set a value.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
