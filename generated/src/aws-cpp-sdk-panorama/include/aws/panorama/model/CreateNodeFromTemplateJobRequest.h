/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/TemplateType.h>
#include <aws/panorama/model/JobResourceTags.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class CreateNodeFromTemplateJobRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API CreateNodeFromTemplateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNodeFromTemplateJob"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Tags for the job.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const { return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    CreateNodeFromTemplateJobRequest& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = JobResourceTags>
    CreateNodeFromTemplateJobRequest& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the node.</p>
     */
    inline const Aws::String& GetNodeDescription() const { return m_nodeDescription; }
    inline bool NodeDescriptionHasBeenSet() const { return m_nodeDescriptionHasBeenSet; }
    template<typename NodeDescriptionT = Aws::String>
    void SetNodeDescription(NodeDescriptionT&& value) { m_nodeDescriptionHasBeenSet = true; m_nodeDescription = std::forward<NodeDescriptionT>(value); }
    template<typename NodeDescriptionT = Aws::String>
    CreateNodeFromTemplateJobRequest& WithNodeDescription(NodeDescriptionT&& value) { SetNodeDescription(std::forward<NodeDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the node.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    CreateNodeFromTemplateJobRequest& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output package name for the node.</p>
     */
    inline const Aws::String& GetOutputPackageName() const { return m_outputPackageName; }
    inline bool OutputPackageNameHasBeenSet() const { return m_outputPackageNameHasBeenSet; }
    template<typename OutputPackageNameT = Aws::String>
    void SetOutputPackageName(OutputPackageNameT&& value) { m_outputPackageNameHasBeenSet = true; m_outputPackageName = std::forward<OutputPackageNameT>(value); }
    template<typename OutputPackageNameT = Aws::String>
    CreateNodeFromTemplateJobRequest& WithOutputPackageName(OutputPackageNameT&& value) { SetOutputPackageName(std::forward<OutputPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output package version for the node.</p>
     */
    inline const Aws::String& GetOutputPackageVersion() const { return m_outputPackageVersion; }
    inline bool OutputPackageVersionHasBeenSet() const { return m_outputPackageVersionHasBeenSet; }
    template<typename OutputPackageVersionT = Aws::String>
    void SetOutputPackageVersion(OutputPackageVersionT&& value) { m_outputPackageVersionHasBeenSet = true; m_outputPackageVersion = std::forward<OutputPackageVersionT>(value); }
    template<typename OutputPackageVersionT = Aws::String>
    CreateNodeFromTemplateJobRequest& WithOutputPackageVersion(OutputPackageVersionT&& value) { SetOutputPackageVersion(std::forward<OutputPackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template parameters for the node.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const { return m_templateParameters; }
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTemplateParameters(TemplateParametersT&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::forward<TemplateParametersT>(value); }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateNodeFromTemplateJobRequest& WithTemplateParameters(TemplateParametersT&& value) { SetTemplateParameters(std::forward<TemplateParametersT>(value)); return *this;}
    template<typename TemplateParametersKeyT = Aws::String, typename TemplateParametersValueT = Aws::String>
    CreateNodeFromTemplateJobRequest& AddTemplateParameters(TemplateParametersKeyT&& key, TemplateParametersValueT&& value) {
      m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::forward<TemplateParametersKeyT>(key), std::forward<TemplateParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of node.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline CreateNodeFromTemplateJobRequest& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobResourceTags> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    Aws::String m_nodeDescription;
    bool m_nodeDescriptionHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_outputPackageName;
    bool m_outputPackageNameHasBeenSet = false;

    Aws::String m_outputPackageVersion;
    bool m_outputPackageVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_templateParameters;
    bool m_templateParametersHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
