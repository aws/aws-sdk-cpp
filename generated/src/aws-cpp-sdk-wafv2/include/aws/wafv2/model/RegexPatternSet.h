/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Regex.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Contains one or more regular expressions. </p> <p>WAF assigns an ARN to each
   * <code>RegexPatternSet</code> that you create. To use a set in a rule, you
   * provide the ARN to the <a>Rule</a> statement
   * <a>RegexPatternSetReferenceStatement</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RegexPatternSet">AWS
   * API Reference</a></p>
   */
  class RegexPatternSet
  {
  public:
    AWS_WAFV2_API RegexPatternSet() = default;
    AWS_WAFV2_API RegexPatternSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RegexPatternSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the set. You cannot change the name after you create the set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegexPatternSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RegexPatternSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RegexPatternSet& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegexPatternSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const { return m_regularExpressionList; }
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }
    template<typename RegularExpressionListT = Aws::Vector<Regex>>
    void SetRegularExpressionList(RegularExpressionListT&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::forward<RegularExpressionListT>(value); }
    template<typename RegularExpressionListT = Aws::Vector<Regex>>
    RegexPatternSet& WithRegularExpressionList(RegularExpressionListT&& value) { SetRegularExpressionList(std::forward<RegularExpressionListT>(value)); return *this;}
    template<typename RegularExpressionListT = Regex>
    RegexPatternSet& AddRegularExpressionList(RegularExpressionListT&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.emplace_back(std::forward<RegularExpressionListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Regex> m_regularExpressionList;
    bool m_regularExpressionListHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
