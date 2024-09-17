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
    AWS_WELLARCHITECTED_API AdditionalResources();
    AWS_WELLARCHITECTED_API AdditionalResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API AdditionalResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of additional resource for a custom lens.</p>
     */
    inline const AdditionalResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AdditionalResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AdditionalResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AdditionalResources& WithType(const AdditionalResourceType& value) { SetType(value); return *this;}
    inline AdditionalResources& WithType(AdditionalResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URLs for additional resources, either helpful resources or improvement
     * plans, for a custom lens. Up to five additional URLs can be specified.</p>
     */
    inline const Aws::Vector<ChoiceContent>& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Vector<ChoiceContent>& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Vector<ChoiceContent>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline AdditionalResources& WithContent(const Aws::Vector<ChoiceContent>& value) { SetContent(value); return *this;}
    inline AdditionalResources& WithContent(Aws::Vector<ChoiceContent>&& value) { SetContent(std::move(value)); return *this;}
    inline AdditionalResources& AddContent(const ChoiceContent& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }
    inline AdditionalResources& AddContent(ChoiceContent&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AdditionalResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<ChoiceContent> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
