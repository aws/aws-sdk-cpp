﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowEngine.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/Accelerators.h>
#include <aws/omics/model/WorkflowParameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An engine for the workflow.</p>
     */
    inline const WorkflowEngine& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const WorkflowEngine& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(WorkflowEngine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline CreateWorkflowRequest& WithEngine(const WorkflowEngine& value) { SetEngine(value); return *this;}
    inline CreateWorkflowRequest& WithEngine(WorkflowEngine&& value) { SetEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ZIP archive for the workflow.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetDefinitionZip() const{ return m_definitionZip; }
    inline bool DefinitionZipHasBeenSet() const { return m_definitionZipHasBeenSet; }
    inline void SetDefinitionZip(const Aws::Utils::ByteBuffer& value) { m_definitionZipHasBeenSet = true; m_definitionZip = value; }
    inline void SetDefinitionZip(Aws::Utils::ByteBuffer&& value) { m_definitionZipHasBeenSet = true; m_definitionZip = std::move(value); }
    inline CreateWorkflowRequest& WithDefinitionZip(const Aws::Utils::ByteBuffer& value) { SetDefinitionZip(value); return *this;}
    inline CreateWorkflowRequest& WithDefinitionZip(Aws::Utils::ByteBuffer&& value) { SetDefinitionZip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of a definition for the workflow.</p>
     */
    inline const Aws::String& GetDefinitionUri() const{ return m_definitionUri; }
    inline bool DefinitionUriHasBeenSet() const { return m_definitionUriHasBeenSet; }
    inline void SetDefinitionUri(const Aws::String& value) { m_definitionUriHasBeenSet = true; m_definitionUri = value; }
    inline void SetDefinitionUri(Aws::String&& value) { m_definitionUriHasBeenSet = true; m_definitionUri = std::move(value); }
    inline void SetDefinitionUri(const char* value) { m_definitionUriHasBeenSet = true; m_definitionUri.assign(value); }
    inline CreateWorkflowRequest& WithDefinitionUri(const Aws::String& value) { SetDefinitionUri(value); return *this;}
    inline CreateWorkflowRequest& WithDefinitionUri(Aws::String&& value) { SetDefinitionUri(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithDefinitionUri(const char* value) { SetDefinitionUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the main definition file for the workflow.</p>
     */
    inline const Aws::String& GetMain() const{ return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    inline void SetMain(const Aws::String& value) { m_mainHasBeenSet = true; m_main = value; }
    inline void SetMain(Aws::String&& value) { m_mainHasBeenSet = true; m_main = std::move(value); }
    inline void SetMain(const char* value) { m_mainHasBeenSet = true; m_main.assign(value); }
    inline CreateWorkflowRequest& WithMain(const Aws::String& value) { SetMain(value); return *this;}
    inline CreateWorkflowRequest& WithMain(Aws::String&& value) { SetMain(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithMain(const char* value) { SetMain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter template for the workflow.</p>
     */
    inline const Aws::Map<Aws::String, WorkflowParameter>& GetParameterTemplate() const{ return m_parameterTemplate; }
    inline bool ParameterTemplateHasBeenSet() const { return m_parameterTemplateHasBeenSet; }
    inline void SetParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate = value; }
    inline void SetParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate = std::move(value); }
    inline CreateWorkflowRequest& WithParameterTemplate(const Aws::Map<Aws::String, WorkflowParameter>& value) { SetParameterTemplate(value); return *this;}
    inline CreateWorkflowRequest& WithParameterTemplate(Aws::Map<Aws::String, WorkflowParameter>&& value) { SetParameterTemplate(std::move(value)); return *this;}
    inline CreateWorkflowRequest& AddParameterTemplate(const Aws::String& key, const WorkflowParameter& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(key, value); return *this; }
    inline CreateWorkflowRequest& AddParameterTemplate(Aws::String&& key, const WorkflowParameter& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddParameterTemplate(const Aws::String& key, WorkflowParameter&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddParameterTemplate(Aws::String&& key, WorkflowParameter&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddParameterTemplate(const char* key, WorkflowParameter&& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddParameterTemplate(const char* key, const WorkflowParameter& value) { m_parameterTemplateHasBeenSet = true; m_parameterTemplate.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default storage capacity for the workflow runs, in gibibytes.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateWorkflowRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique ID for
     * each request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateWorkflowRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkflowRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computational accelerator specified to run the workflow.</p>
     */
    inline const Accelerators& GetAccelerators() const{ return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    inline void SetAccelerators(const Accelerators& value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }
    inline void SetAccelerators(Accelerators&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::move(value); }
    inline CreateWorkflowRequest& WithAccelerators(const Accelerators& value) { SetAccelerators(value); return *this;}
    inline CreateWorkflowRequest& WithAccelerators(Accelerators&& value) { SetAccelerators(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkflowEngine m_engine;
    bool m_engineHasBeenSet = false;

    Aws::Utils::ByteBuffer m_definitionZip;
    bool m_definitionZipHasBeenSet = false;

    Aws::String m_definitionUri;
    bool m_definitionUriHasBeenSet = false;

    Aws::String m_main;
    bool m_mainHasBeenSet = false;

    Aws::Map<Aws::String, WorkflowParameter> m_parameterTemplate;
    bool m_parameterTemplateHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Accelerators m_accelerators;
    bool m_acceleratorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
