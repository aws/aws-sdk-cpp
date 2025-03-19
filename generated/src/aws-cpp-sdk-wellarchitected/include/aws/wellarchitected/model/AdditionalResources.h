/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/AdditionalResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ChoiceContent.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The choice level additional resources for a custom lens.</p> <p>This field
   * does not apply to Amazon Web Services official lenses.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AdditionalResources">AWS
   * API Reference</a></p>
   */
  class AdditionalResources
  {
  public:
    AWS_WELLARCHITECTED_API AdditionalResources() = default;
    AWS_WELLARCHITECTED_API AdditionalResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AdditionalResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of additional resource for a custom lens.</p>
     */
    inline AdditionalResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AdditionalResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AdditionalResources& WithType(AdditionalResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URLs for additional resources, either helpful resources or improvement
     * plans, for a custom lens. Up to five additional URLs can be specified.</p>
     */
    inline const Aws::Vector<ChoiceContent>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<ChoiceContent>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<ChoiceContent>>
    AdditionalResources& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = ChoiceContent>
    AdditionalResources& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}
  private:

    AdditionalResourceType m_type{AdditionalResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<ChoiceContent> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
