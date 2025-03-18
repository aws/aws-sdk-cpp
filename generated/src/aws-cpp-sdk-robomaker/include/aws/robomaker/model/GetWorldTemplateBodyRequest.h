/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class GetWorldTemplateBodyRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API GetWorldTemplateBodyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorldTemplateBody"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    GetWorldTemplateBodyRequest& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world generator job.</p>
     */
    inline const Aws::String& GetGenerationJob() const { return m_generationJob; }
    inline bool GenerationJobHasBeenSet() const { return m_generationJobHasBeenSet; }
    template<typename GenerationJobT = Aws::String>
    void SetGenerationJob(GenerationJobT&& value) { m_generationJobHasBeenSet = true; m_generationJob = std::forward<GenerationJobT>(value); }
    template<typename GenerationJobT = Aws::String>
    GetWorldTemplateBodyRequest& WithGenerationJob(GenerationJobT&& value) { SetGenerationJob(std::forward<GenerationJobT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::String m_generationJob;
    bool m_generationJobHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
