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
    AWS_PANORAMA_API CreateNodeFromTemplateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNodeFromTemplateJob"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    /**
     * <p>Tags for the job.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>Tags for the job.</p>
     */
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }

    /**
     * <p>Tags for the job.</p>
     */
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }

    /**
     * <p>Tags for the job.</p>
     */
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }

    /**
     * <p>Tags for the job.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}

    /**
     * <p>Tags for the job.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the job.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddJobTags(const JobResourceTags& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }

    /**
     * <p>Tags for the job.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddJobTags(JobResourceTags&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the node.</p>
     */
    inline const Aws::String& GetNodeDescription() const{ return m_nodeDescription; }

    /**
     * <p>A description for the node.</p>
     */
    inline bool NodeDescriptionHasBeenSet() const { return m_nodeDescriptionHasBeenSet; }

    /**
     * <p>A description for the node.</p>
     */
    inline void SetNodeDescription(const Aws::String& value) { m_nodeDescriptionHasBeenSet = true; m_nodeDescription = value; }

    /**
     * <p>A description for the node.</p>
     */
    inline void SetNodeDescription(Aws::String&& value) { m_nodeDescriptionHasBeenSet = true; m_nodeDescription = std::move(value); }

    /**
     * <p>A description for the node.</p>
     */
    inline void SetNodeDescription(const char* value) { m_nodeDescriptionHasBeenSet = true; m_nodeDescription.assign(value); }

    /**
     * <p>A description for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeDescription(const Aws::String& value) { SetNodeDescription(value); return *this;}

    /**
     * <p>A description for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeDescription(Aws::String&& value) { SetNodeDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeDescription(const char* value) { SetNodeDescription(value); return *this;}


    /**
     * <p>A name for the node.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>A name for the node.</p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>A name for the node.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>A name for the node.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>A name for the node.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>A name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>A name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>A name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>An output package name for the node.</p>
     */
    inline const Aws::String& GetOutputPackageName() const{ return m_outputPackageName; }

    /**
     * <p>An output package name for the node.</p>
     */
    inline bool OutputPackageNameHasBeenSet() const { return m_outputPackageNameHasBeenSet; }

    /**
     * <p>An output package name for the node.</p>
     */
    inline void SetOutputPackageName(const Aws::String& value) { m_outputPackageNameHasBeenSet = true; m_outputPackageName = value; }

    /**
     * <p>An output package name for the node.</p>
     */
    inline void SetOutputPackageName(Aws::String&& value) { m_outputPackageNameHasBeenSet = true; m_outputPackageName = std::move(value); }

    /**
     * <p>An output package name for the node.</p>
     */
    inline void SetOutputPackageName(const char* value) { m_outputPackageNameHasBeenSet = true; m_outputPackageName.assign(value); }

    /**
     * <p>An output package name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageName(const Aws::String& value) { SetOutputPackageName(value); return *this;}

    /**
     * <p>An output package name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageName(Aws::String&& value) { SetOutputPackageName(std::move(value)); return *this;}

    /**
     * <p>An output package name for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageName(const char* value) { SetOutputPackageName(value); return *this;}


    /**
     * <p>An output package version for the node.</p>
     */
    inline const Aws::String& GetOutputPackageVersion() const{ return m_outputPackageVersion; }

    /**
     * <p>An output package version for the node.</p>
     */
    inline bool OutputPackageVersionHasBeenSet() const { return m_outputPackageVersionHasBeenSet; }

    /**
     * <p>An output package version for the node.</p>
     */
    inline void SetOutputPackageVersion(const Aws::String& value) { m_outputPackageVersionHasBeenSet = true; m_outputPackageVersion = value; }

    /**
     * <p>An output package version for the node.</p>
     */
    inline void SetOutputPackageVersion(Aws::String&& value) { m_outputPackageVersionHasBeenSet = true; m_outputPackageVersion = std::move(value); }

    /**
     * <p>An output package version for the node.</p>
     */
    inline void SetOutputPackageVersion(const char* value) { m_outputPackageVersionHasBeenSet = true; m_outputPackageVersion.assign(value); }

    /**
     * <p>An output package version for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageVersion(const Aws::String& value) { SetOutputPackageVersion(value); return *this;}

    /**
     * <p>An output package version for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageVersion(Aws::String&& value) { SetOutputPackageVersion(std::move(value)); return *this;}

    /**
     * <p>An output package version for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithOutputPackageVersion(const char* value) { SetOutputPackageVersion(value); return *this;}


    /**
     * <p>Template parameters for the node.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const{ return m_templateParameters; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline void SetTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_templateParametersHasBeenSet = true; m_templateParameters = value; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline void SetTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::move(value); }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTemplateParameters(value); return *this;}

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTemplateParameters(std::move(value)); return *this;}

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(const Aws::String& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(Aws::String&& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(const Aws::String& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(Aws::String&& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(const char* key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(Aws::String&& key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Template parameters for the node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& AddTemplateParameters(const char* key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }


    /**
     * <p>The type of node.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of node.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of node.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of node.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of node.</p>
     */
    inline CreateNodeFromTemplateJobRequest& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}

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

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
