/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataIntegrationFlowTransformation.h>
#include <aws/supplychain/model/DataIntegrationFlowTarget.h>
#include <aws/supplychain/model/DataIntegrationFlowSource.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for UpdateDataIntegrationFlow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateDataIntegrationFlowRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDataIntegrationFlowRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API UpdateDataIntegrationFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataIntegrationFlow"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateDataIntegrationFlowRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DataIntegrationFlow to be updated.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataIntegrationFlowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new source configurations for the DataIntegrationFlow.</p>
     */
    inline const Aws::Vector<DataIntegrationFlowSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<DataIntegrationFlowSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<DataIntegrationFlowSource>>
    UpdateDataIntegrationFlowRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = DataIntegrationFlowSource>
    UpdateDataIntegrationFlowRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new transformation configurations for the DataIntegrationFlow.</p>
     */
    inline const DataIntegrationFlowTransformation& GetTransformation() const { return m_transformation; }
    inline bool TransformationHasBeenSet() const { return m_transformationHasBeenSet; }
    template<typename TransformationT = DataIntegrationFlowTransformation>
    void SetTransformation(TransformationT&& value) { m_transformationHasBeenSet = true; m_transformation = std::forward<TransformationT>(value); }
    template<typename TransformationT = DataIntegrationFlowTransformation>
    UpdateDataIntegrationFlowRequest& WithTransformation(TransformationT&& value) { SetTransformation(std::forward<TransformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new target configurations for the DataIntegrationFlow.</p>
     */
    inline const DataIntegrationFlowTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = DataIntegrationFlowTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = DataIntegrationFlowTarget>
    UpdateDataIntegrationFlowRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DataIntegrationFlowSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    DataIntegrationFlowTransformation m_transformation;
    bool m_transformationHasBeenSet = false;

    DataIntegrationFlowTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
