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
    AWS_SUPPLYCHAIN_API UpdateDataIntegrationFlowRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateDataIntegrationFlowRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DataIntegrationFlow to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDataIntegrationFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new source configurations for the DataIntegrationFlow.</p>
     */
    inline const Aws::Vector<DataIntegrationFlowSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<DataIntegrationFlowSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<DataIntegrationFlowSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline UpdateDataIntegrationFlowRequest& WithSources(const Aws::Vector<DataIntegrationFlowSource>& value) { SetSources(value); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithSources(Aws::Vector<DataIntegrationFlowSource>&& value) { SetSources(std::move(value)); return *this;}
    inline UpdateDataIntegrationFlowRequest& AddSources(const DataIntegrationFlowSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline UpdateDataIntegrationFlowRequest& AddSources(DataIntegrationFlowSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new transformation configurations for the DataIntegrationFlow.</p>
     */
    inline const DataIntegrationFlowTransformation& GetTransformation() const{ return m_transformation; }
    inline bool TransformationHasBeenSet() const { return m_transformationHasBeenSet; }
    inline void SetTransformation(const DataIntegrationFlowTransformation& value) { m_transformationHasBeenSet = true; m_transformation = value; }
    inline void SetTransformation(DataIntegrationFlowTransformation&& value) { m_transformationHasBeenSet = true; m_transformation = std::move(value); }
    inline UpdateDataIntegrationFlowRequest& WithTransformation(const DataIntegrationFlowTransformation& value) { SetTransformation(value); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithTransformation(DataIntegrationFlowTransformation&& value) { SetTransformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new target configurations for the DataIntegrationFlow.</p>
     */
    inline const DataIntegrationFlowTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const DataIntegrationFlowTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(DataIntegrationFlowTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline UpdateDataIntegrationFlowRequest& WithTarget(const DataIntegrationFlowTarget& value) { SetTarget(value); return *this;}
    inline UpdateDataIntegrationFlowRequest& WithTarget(DataIntegrationFlowTarget&& value) { SetTarget(std::move(value)); return *this;}
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
