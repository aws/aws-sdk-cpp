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
  class DescribeWorldTemplateRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorldTemplate"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to
     * describe.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    DescribeWorldTemplateRequest& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
