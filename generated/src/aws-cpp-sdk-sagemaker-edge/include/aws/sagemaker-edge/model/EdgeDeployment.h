/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/DeploymentType.h>
#include <aws/sagemaker-edge/model/FailureHandlingPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-edge/model/Definition.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   * <p>Information about a deployment on an edge device that is registered with
   * SageMaker Edge Manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/EdgeDeployment">AWS
   * API Reference</a></p>
   */
  class EdgeDeployment
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment();
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline EdgeDeployment& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline EdgeDeployment& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline EdgeDeployment& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}


    /**
     * <p>The type of the deployment.</p>
     */
    inline const DeploymentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the deployment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the deployment.</p>
     */
    inline void SetType(const DeploymentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the deployment.</p>
     */
    inline void SetType(DeploymentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the deployment.</p>
     */
    inline EdgeDeployment& WithType(const DeploymentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the deployment.</p>
     */
    inline EdgeDeployment& WithType(DeploymentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline const FailureHandlingPolicy& GetFailureHandlingPolicy() const{ return m_failureHandlingPolicy; }

    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline bool FailureHandlingPolicyHasBeenSet() const { return m_failureHandlingPolicyHasBeenSet; }

    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline void SetFailureHandlingPolicy(const FailureHandlingPolicy& value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = value; }

    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline void SetFailureHandlingPolicy(FailureHandlingPolicy&& value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = std::move(value); }

    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline EdgeDeployment& WithFailureHandlingPolicy(const FailureHandlingPolicy& value) { SetFailureHandlingPolicy(value); return *this;}

    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline EdgeDeployment& WithFailureHandlingPolicy(FailureHandlingPolicy&& value) { SetFailureHandlingPolicy(std::move(value)); return *this;}


    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline const Aws::Vector<Definition>& GetDefinitions() const{ return m_definitions; }

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline bool DefinitionsHasBeenSet() const { return m_definitionsHasBeenSet; }

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline void SetDefinitions(const Aws::Vector<Definition>& value) { m_definitionsHasBeenSet = true; m_definitions = value; }

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline void SetDefinitions(Aws::Vector<Definition>&& value) { m_definitionsHasBeenSet = true; m_definitions = std::move(value); }

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline EdgeDeployment& WithDefinitions(const Aws::Vector<Definition>& value) { SetDefinitions(value); return *this;}

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline EdgeDeployment& WithDefinitions(Aws::Vector<Definition>&& value) { SetDefinitions(std::move(value)); return *this;}

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline EdgeDeployment& AddDefinitions(const Definition& value) { m_definitionsHasBeenSet = true; m_definitions.push_back(value); return *this; }

    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline EdgeDeployment& AddDefinitions(Definition&& value) { m_definitionsHasBeenSet = true; m_definitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    DeploymentType m_type;
    bool m_typeHasBeenSet = false;

    FailureHandlingPolicy m_failureHandlingPolicy;
    bool m_failureHandlingPolicyHasBeenSet = false;

    Aws::Vector<Definition> m_definitions;
    bool m_definitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
