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
    AWS_WAFV2_API RegexPatternSet();
    AWS_WAFV2_API RegexPatternSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RegexPatternSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the set. You cannot change the name after you create the set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RegexPatternSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegexPatternSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegexPatternSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RegexPatternSet& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RegexPatternSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RegexPatternSet& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline RegexPatternSet& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline RegexPatternSet& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline RegexPatternSet& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RegexPatternSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RegexPatternSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RegexPatternSet& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const{ return m_regularExpressionList; }
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }
    inline void SetRegularExpressionList(const Aws::Vector<Regex>& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = value; }
    inline void SetRegularExpressionList(Aws::Vector<Regex>&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::move(value); }
    inline RegexPatternSet& WithRegularExpressionList(const Aws::Vector<Regex>& value) { SetRegularExpressionList(value); return *this;}
    inline RegexPatternSet& WithRegularExpressionList(Aws::Vector<Regex>&& value) { SetRegularExpressionList(std::move(value)); return *this;}
    inline RegexPatternSet& AddRegularExpressionList(const Regex& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(value); return *this; }
    inline RegexPatternSet& AddRegularExpressionList(Regex&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(std::move(value)); return *this; }
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
