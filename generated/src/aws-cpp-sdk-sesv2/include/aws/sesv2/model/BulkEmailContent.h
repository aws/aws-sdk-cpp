/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Template.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains the body of the message. You can specify a template
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BulkEmailContent">AWS
   * API Reference</a></p>
   */
  class BulkEmailContent
  {
  public:
    AWS_SESV2_API BulkEmailContent() = default;
    AWS_SESV2_API BulkEmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BulkEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template to use for the bulk email message.</p>
     */
    inline const Template& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Template>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Template>
    BulkEmailContent& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

    Template m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
