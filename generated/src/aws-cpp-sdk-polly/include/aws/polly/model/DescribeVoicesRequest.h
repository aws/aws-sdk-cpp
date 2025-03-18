/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Polly
{
namespace Model
{

  /**
   */
  class DescribeVoicesRequest : public PollyRequest
  {
  public:
    AWS_POLLY_API DescribeVoicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVoices"; }

    AWS_POLLY_API Aws::String SerializePayload() const override;

    AWS_POLLY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies the engine (<code>standard</code>, <code>neural</code>,
     * <code>long-form</code> or <code>generative</code>) used by Amazon Polly when
     * processing input text for speech synthesis. </p>
     */
    inline Engine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(Engine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline DescribeVoicesRequest& WithEngine(Engine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline DescribeVoicesRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value indicating whether to return any bilingual voices that use the
     * specified language as an additional language. For instance, if you request all
     * languages that use US English (es-US), and there is an Italian voice that speaks
     * both Italian (it-IT) and US English, that voice will be included if you specify
     * <code>yes</code> but not if you specify <code>no</code>.</p>
     */
    inline bool GetIncludeAdditionalLanguageCodes() const { return m_includeAdditionalLanguageCodes; }
    inline bool IncludeAdditionalLanguageCodesHasBeenSet() const { return m_includeAdditionalLanguageCodesHasBeenSet; }
    inline void SetIncludeAdditionalLanguageCodes(bool value) { m_includeAdditionalLanguageCodesHasBeenSet = true; m_includeAdditionalLanguageCodes = value; }
    inline DescribeVoicesRequest& WithIncludeAdditionalLanguageCodes(bool value) { SetIncludeAdditionalLanguageCodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVoicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Engine m_engine{Engine::NOT_SET};
    bool m_engineHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    bool m_includeAdditionalLanguageCodes{false};
    bool m_includeAdditionalLanguageCodesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
