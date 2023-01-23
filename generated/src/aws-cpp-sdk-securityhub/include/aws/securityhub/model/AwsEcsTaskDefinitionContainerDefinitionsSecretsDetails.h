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
   * <p>A secret to pass to the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline const Aws::String& GetValueFrom() const{ return m_valueFrom; }

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline bool ValueFromHasBeenSet() const { return m_valueFromHasBeenSet; }

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline void SetValueFrom(const Aws::String& value) { m_valueFromHasBeenSet = true; m_valueFrom = value; }

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline void SetValueFrom(Aws::String&& value) { m_valueFromHasBeenSet = true; m_valueFrom = std::move(value); }

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline void SetValueFrom(const char* value) { m_valueFromHasBeenSet = true; m_valueFrom.assign(value); }

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithValueFrom(const Aws::String& value) { SetValueFrom(value); return *this;}

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithValueFrom(Aws::String&& value) { SetValueFrom(std::move(value)); return *this;}

    /**
     * <p>The secret to expose to the container. The value is either the full ARN of
     * the Secrets Manager secret or the full ARN of the parameter in the Systems
     * Manager Parameter Store.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& WithValueFrom(const char* value) { SetValueFrom(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_valueFrom;
    bool m_valueFromHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
