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
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment() = default;
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API EdgeDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKEREDGEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name and unique ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
    template<typename DeploymentNameT = Aws::String>
    void SetDeploymentName(DeploymentNameT&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::forward<DeploymentNameT>(value); }
    template<typename DeploymentNameT = Aws::String>
    EdgeDeployment& WithDeploymentName(DeploymentNameT&& value) { SetDeploymentName(std::forward<DeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the deployment.</p>
     */
    inline DeploymentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DeploymentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EdgeDeployment& WithType(DeploymentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to rollback to previous configuration if deployment
     * fails.</p>
     */
    inline FailureHandlingPolicy GetFailureHandlingPolicy() const { return m_failureHandlingPolicy; }
    inline bool FailureHandlingPolicyHasBeenSet() const { return m_failureHandlingPolicyHasBeenSet; }
    inline void SetFailureHandlingPolicy(FailureHandlingPolicy value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = value; }
    inline EdgeDeployment& WithFailureHandlingPolicy(FailureHandlingPolicy value) { SetFailureHandlingPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of Definition objects.</p>
     */
    inline const Aws::Vector<Definition>& GetDefinitions() const { return m_definitions; }
    inline bool DefinitionsHasBeenSet() const { return m_definitionsHasBeenSet; }
    template<typename DefinitionsT = Aws::Vector<Definition>>
    void SetDefinitions(DefinitionsT&& value) { m_definitionsHasBeenSet = true; m_definitions = std::forward<DefinitionsT>(value); }
    template<typename DefinitionsT = Aws::Vector<Definition>>
    EdgeDeployment& WithDefinitions(DefinitionsT&& value) { SetDefinitions(std::forward<DefinitionsT>(value)); return *this;}
    template<typename DefinitionsT = Definition>
    EdgeDeployment& AddDefinitions(DefinitionsT&& value) { m_definitionsHasBeenSet = true; m_definitions.emplace_back(std::forward<DefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    DeploymentType m_type{DeploymentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FailureHandlingPolicy m_failureHandlingPolicy{FailureHandlingPolicy::NOT_SET};
    bool m_failureHandlingPolicyHasBeenSet = false;

    Aws::Vector<Definition> m_definitions;
    bool m_definitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
