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
  class DeleteWorldTemplateRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DeleteWorldTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorldTemplate"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline DeleteWorldTemplateRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline DeleteWorldTemplateRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template you want to delete.</p>
     */
    inline DeleteWorldTemplateRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}

  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
