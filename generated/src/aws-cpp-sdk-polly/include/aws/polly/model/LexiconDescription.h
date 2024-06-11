/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LexiconAttributes.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Describes the content of the lexicon.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/LexiconDescription">AWS
   * API Reference</a></p>
   */
  class LexiconDescription
  {
  public:
    AWS_POLLY_API LexiconDescription();
    AWS_POLLY_API LexiconDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API LexiconDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the lexicon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LexiconDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LexiconDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LexiconDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides lexicon metadata.</p>
     */
    inline const LexiconAttributes& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const LexiconAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(LexiconAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline LexiconDescription& WithAttributes(const LexiconAttributes& value) { SetAttributes(value); return *this;}
    inline LexiconDescription& WithAttributes(LexiconAttributes&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LexiconAttributes m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
