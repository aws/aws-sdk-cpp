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
    AWS_TRANSLATE_API AppliedTerminology();
    AWS_TRANSLATE_API AppliedTerminology(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API AppliedTerminology& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline AppliedTerminology& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline AppliedTerminology& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom terminology applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline AppliedTerminology& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline const Aws::Vector<Term>& GetTerms() const{ return m_terms; }

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline bool TermsHasBeenSet() const { return m_termsHasBeenSet; }

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline void SetTerms(const Aws::Vector<Term>& value) { m_termsHasBeenSet = true; m_terms = value; }

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline void SetTerms(Aws::Vector<Term>&& value) { m_termsHasBeenSet = true; m_terms = std::move(value); }

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline AppliedTerminology& WithTerms(const Aws::Vector<Term>& value) { SetTerms(value); return *this;}

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline AppliedTerminology& WithTerms(Aws::Vector<Term>&& value) { SetTerms(std::move(value)); return *this;}

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline AppliedTerminology& AddTerms(const Term& value) { m_termsHasBeenSet = true; m_terms.push_back(value); return *this; }

    /**
     * <p>The specific terms of the custom terminology applied to the input text by
     * Amazon Translate for the translated text response. A maximum of 250 terms will
     * be returned, and the specific terms applied will be the first 250 terms in the
     * source text. </p>
     */
    inline AppliedTerminology& AddTerms(Term&& value) { m_termsHasBeenSet = true; m_terms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Term> m_terms;
    bool m_termsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
