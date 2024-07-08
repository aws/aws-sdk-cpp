/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/CardOutputSource.h>
#include <aws/qapps/model/AttributeFilter.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The input shape for defining a query card in an Amazon Q App.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/QQueryCardInput">AWS
   * API Reference</a></p>
   */
  class QQueryCardInput
  {
  public:
    AWS_QAPPS_API QQueryCardInput();
    AWS_QAPPS_API QQueryCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QQueryCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the query card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline QQueryCardInput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline QQueryCardInput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline QQueryCardInput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the query card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QQueryCardInput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QQueryCardInput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QQueryCardInput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QQueryCardInput& WithType(const CardType& value) { SetType(value); return *this;}
    inline QQueryCardInput& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or instructions displayed for the query card.</p>
     */
    inline const Aws::String& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const Aws::String& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(Aws::String&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline void SetPrompt(const char* value) { m_promptHasBeenSet = true; m_prompt.assign(value); }
    inline QQueryCardInput& WithPrompt(const Aws::String& value) { SetPrompt(value); return *this;}
    inline QQueryCardInput& WithPrompt(Aws::String&& value) { SetPrompt(std::move(value)); return *this;}
    inline QQueryCardInput& WithPrompt(const char* value) { SetPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source or type of output to generate for the query card.</p>
     */
    inline const CardOutputSource& GetOutputSource() const{ return m_outputSource; }
    inline bool OutputSourceHasBeenSet() const { return m_outputSourceHasBeenSet; }
    inline void SetOutputSource(const CardOutputSource& value) { m_outputSourceHasBeenSet = true; m_outputSource = value; }
    inline void SetOutputSource(CardOutputSource&& value) { m_outputSourceHasBeenSet = true; m_outputSource = std::move(value); }
    inline QQueryCardInput& WithOutputSource(const CardOutputSource& value) { SetOutputSource(value); return *this;}
    inline QQueryCardInput& WithOutputSource(CardOutputSource&& value) { SetOutputSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turns on filtering of responses based on document attributes or metadata
     * fields.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }
    inline QQueryCardInput& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}
    inline QQueryCardInput& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;

    CardOutputSource m_outputSource;
    bool m_outputSourceHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
