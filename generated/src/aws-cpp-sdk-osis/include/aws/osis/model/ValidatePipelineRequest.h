/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class ValidatePipelineRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API ValidatePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidatePipeline"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pipeline configuration in YAML format. The command accepts the pipeline
     * configuration as a string or within a .yaml file. If you provide the
     * configuration as a string, each new line must be escaped with
     * <code>\n</code>.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const { return m_pipelineConfigurationBody; }
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }
    template<typename PipelineConfigurationBodyT = Aws::String>
    void SetPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::forward<PipelineConfigurationBodyT>(value); }
    template<typename PipelineConfigurationBodyT = Aws::String>
    ValidatePipelineRequest& WithPipelineConfigurationBody(PipelineConfigurationBodyT&& value) { SetPipelineConfigurationBody(std::forward<PipelineConfigurationBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
