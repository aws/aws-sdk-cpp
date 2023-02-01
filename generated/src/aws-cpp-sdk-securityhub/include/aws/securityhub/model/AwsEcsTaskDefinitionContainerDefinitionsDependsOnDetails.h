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
   * <p>A dependency that is defined for container startup and
   * shutdown.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>The dependency condition of the dependent container. Indicates the required
     * status of the dependent container before the current container can start. Valid
     * values are as follows:</p> <ul> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>HEALTHY</code> </p> </li> <li> <p> <code>SUCCESS</code> </p> </li>
     * <li> <p> <code>START</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithCondition(const char* value) { SetCondition(value); return *this;}


    /**
     * <p>The name of the dependent container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the dependent container.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the dependent container.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the dependent container.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the dependent container.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the dependent container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the dependent container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the dependent container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& WithContainerName(const char* value) { SetContainerName(value); return *this;}

  private:

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
