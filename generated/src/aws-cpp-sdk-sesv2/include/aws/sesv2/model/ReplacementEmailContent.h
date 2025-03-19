/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/ReplacementTemplate.h>
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
   * <p>The <code>ReplaceEmailContent</code> object to be used for a specific
   * <code>BulkEmailEntry</code>. The <code>ReplacementTemplate</code> can be
   * specified within this object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ReplacementEmailContent">AWS
   * API Reference</a></p>
   */
  class ReplacementEmailContent
  {
  public:
    AWS_SESV2_API ReplacementEmailContent() = default;
    AWS_SESV2_API ReplacementEmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReplacementEmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ReplacementTemplate</code> associated with
     * <code>ReplacementEmailContent</code>.</p>
     */
    inline const ReplacementTemplate& GetReplacementTemplate() const { return m_replacementTemplate; }
    inline bool ReplacementTemplateHasBeenSet() const { return m_replacementTemplateHasBeenSet; }
    template<typename ReplacementTemplateT = ReplacementTemplate>
    void SetReplacementTemplate(ReplacementTemplateT&& value) { m_replacementTemplateHasBeenSet = true; m_replacementTemplate = std::forward<ReplacementTemplateT>(value); }
    template<typename ReplacementTemplateT = ReplacementTemplate>
    ReplacementEmailContent& WithReplacementTemplate(ReplacementTemplateT&& value) { SetReplacementTemplate(std::forward<ReplacementTemplateT>(value)); return *this;}
    ///@}
  private:

    ReplacementTemplate m_replacementTemplate;
    bool m_replacementTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
