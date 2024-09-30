/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataIntegrationFlowTransformation.h>
#include <aws/supplychain/model/DataIntegrationFlowTarget.h>
#include <aws/core/utils/DateTime.h>
#include <aws/supplychain/model/DataIntegrationFlowSource.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The DataIntegrationFlow details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlow">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlow
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlow();
    AWS_SUPPLYCHAIN_API DataIntegrationFlow(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DataIntegrationFlow& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DataIntegrationFlow& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DataIntegrationFlow& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataIntegrationFlow& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataIntegrationFlow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataIntegrationFlow& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow source configurations.</p>
     */
    inline const Aws::Vector<DataIntegrationFlowSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<DataIntegrationFlowSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<DataIntegrationFlowSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline DataIntegrationFlow& WithSources(const Aws::Vector<DataIntegrationFlowSource>& value) { SetSources(value); return *this;}
    inline DataIntegrationFlow& WithSources(Aws::Vector<DataIntegrationFlowSource>&& value) { SetSources(std::move(value)); return *this;}
    inline DataIntegrationFlow& AddSources(const DataIntegrationFlowSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline DataIntegrationFlow& AddSources(DataIntegrationFlowSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow transformation configurations.</p>
     */
    inline const DataIntegrationFlowTransformation& GetTransformation() const{ return m_transformation; }
    inline bool TransformationHasBeenSet() const { return m_transformationHasBeenSet; }
    inline void SetTransformation(const DataIntegrationFlowTransformation& value) { m_transformationHasBeenSet = true; m_transformation = value; }
    inline void SetTransformation(DataIntegrationFlowTransformation&& value) { m_transformationHasBeenSet = true; m_transformation = std::move(value); }
    inline DataIntegrationFlow& WithTransformation(const DataIntegrationFlowTransformation& value) { SetTransformation(value); return *this;}
    inline DataIntegrationFlow& WithTransformation(DataIntegrationFlowTransformation&& value) { SetTransformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow target configuration.</p>
     */
    inline const DataIntegrationFlowTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const DataIntegrationFlowTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(DataIntegrationFlowTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline DataIntegrationFlow& WithTarget(const DataIntegrationFlowTarget& value) { SetTarget(value); return *this;}
    inline DataIntegrationFlow& WithTarget(DataIntegrationFlowTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow creation timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DataIntegrationFlow& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DataIntegrationFlow& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow last modified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline DataIntegrationFlow& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DataIntegrationFlow& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
