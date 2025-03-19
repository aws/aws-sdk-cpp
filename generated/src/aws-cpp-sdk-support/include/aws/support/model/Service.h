/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Category.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>Information about an Amazon Web Services service returned by the
   * <a>DescribeServices</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Service">AWS API
   * Reference</a></p>
   */
  class Service
  {
  public:
    AWS_SUPPORT_API Service() = default;
    AWS_SUPPORT_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for an Amazon Web Services service returned by the
     * <a>DescribeServices</a> response. The <code>name</code> element contains the
     * corresponding friendly name.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    Service& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name for an Amazon Web Services service. The <code>code</code>
     * element contains the corresponding code.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Service& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to Amazon Web Services Support when you call
     * <a>CreateCase</a>.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    Service& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Category>
    Service& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
