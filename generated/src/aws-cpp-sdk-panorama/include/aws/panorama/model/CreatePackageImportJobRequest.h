/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/PackageImportJobInputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageImportJobType.h>
#include <aws/panorama/model/PackageImportJobOutputConfig.h>
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
  class CreatePackageImportJobRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API CreatePackageImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackageImportJob"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A client token for the package import job.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreatePackageImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePackageImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePackageImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input config for the package import job.</p>
     */
    inline const PackageImportJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    inline void SetInputConfig(const PackageImportJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }
    inline void SetInputConfig(PackageImportJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }
    inline CreatePackageImportJobRequest& WithInputConfig(const PackageImportJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline CreatePackageImportJobRequest& WithInputConfig(PackageImportJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the package import job.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }
    inline CreatePackageImportJobRequest& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}
    inline CreatePackageImportJobRequest& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}
    inline CreatePackageImportJobRequest& AddJobTags(const JobResourceTags& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(value); return *this; }
    inline CreatePackageImportJobRequest& AddJobTags(JobResourceTags&& value) { m_jobTagsHasBeenSet = true; m_jobTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A job type for the package import job.</p>
     */
    inline const PackageImportJobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const PackageImportJobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(PackageImportJobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline CreatePackageImportJobRequest& WithJobType(const PackageImportJobType& value) { SetJobType(value); return *this;}
    inline CreatePackageImportJobRequest& WithJobType(PackageImportJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An output config for the package import job.</p>
     */
    inline const PackageImportJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const PackageImportJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(PackageImportJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreatePackageImportJobRequest& WithOutputConfig(const PackageImportJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreatePackageImportJobRequest& WithOutputConfig(PackageImportJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    PackageImportJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    Aws::Vector<JobResourceTags> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    PackageImportJobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    PackageImportJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
