/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/TemplateLocation.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class UpdateWorldTemplateRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API UpdateWorldTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorldTemplate"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template to update.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }
    inline UpdateWorldTemplateRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline UpdateWorldTemplateRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline UpdateWorldTemplateRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateWorldTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWorldTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWorldTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The world template body.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline UpdateWorldTemplateRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline UpdateWorldTemplateRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline UpdateWorldTemplateRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the world template.</p>
     */
    inline const TemplateLocation& GetTemplateLocation() const{ return m_templateLocation; }
    inline bool TemplateLocationHasBeenSet() const { return m_templateLocationHasBeenSet; }
    inline void SetTemplateLocation(const TemplateLocation& value) { m_templateLocationHasBeenSet = true; m_templateLocation = value; }
    inline void SetTemplateLocation(TemplateLocation&& value) { m_templateLocationHasBeenSet = true; m_templateLocation = std::move(value); }
    inline UpdateWorldTemplateRequest& WithTemplateLocation(const TemplateLocation& value) { SetTemplateLocation(value); return *this;}
    inline UpdateWorldTemplateRequest& WithTemplateLocation(TemplateLocation&& value) { SetTemplateLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    TemplateLocation m_templateLocation;
    bool m_templateLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
