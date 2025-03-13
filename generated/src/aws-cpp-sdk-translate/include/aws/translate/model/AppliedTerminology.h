/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/Term.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The custom terminology applied to the input text by Amazon Translate for the
   * translated text response. This is optional in the response and will only be
   * present if you specified terminology input in the request. Currently, only one
   * terminology can be applied per TranslateText request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/AppliedTerminology">AWS
   * API Reference</a></p>
   */
  class AppliedTerminology
  {
  public:
    AWS_TRANSLATE_API AppliedTerminology() = default;
    AWS_TRANSLATE_API AppliedTerminology(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API AppliedTerminology& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppliedTerminology& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline const Aws::Vector<Term>& GetTerms() const { return m_terms; }
    inline bool TermsHasBeenSet() const { return m_termsHasBeenSet; }
    template<typename TermsT = Aws::Vector<Term>>
    void SetTerms(TermsT&& value) { m_termsHasBeenSet = true; m_terms = std::forward<TermsT>(value); }
    template<typename TermsT = Aws::Vector<Term>>
    AppliedTerminology& WithTerms(TermsT&& value) { SetTerms(std::forward<TermsT>(value)); return *this;}
    template<typename TermsT = Term>
    AppliedTerminology& AddTerms(TermsT&& value) { m_termsHasBeenSet = true; m_terms.emplace_back(std::forward<TermsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Term> m_terms;
    bool m_termsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
