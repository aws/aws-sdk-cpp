/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/SupportedLanguage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{
  class DescribeSupportedLanguagesResult
  {
  public:
    AWS_SUPPORT_API DescribeSupportedLanguagesResult() = default;
    AWS_SUPPORT_API DescribeSupportedLanguagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeSupportedLanguagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline const Aws::Vector<SupportedLanguage>& GetSupportedLanguages() const { return m_supportedLanguages; }
    template<typename SupportedLanguagesT = Aws::Vector<SupportedLanguage>>
    void SetSupportedLanguages(SupportedLanguagesT&& value) { m_supportedLanguagesHasBeenSet = true; m_supportedLanguages = std::forward<SupportedLanguagesT>(value); }
    template<typename SupportedLanguagesT = Aws::Vector<SupportedLanguage>>
    DescribeSupportedLanguagesResult& WithSupportedLanguages(SupportedLanguagesT&& value) { SetSupportedLanguages(std::forward<SupportedLanguagesT>(value)); return *this;}
    template<typename SupportedLanguagesT = SupportedLanguage>
    DescribeSupportedLanguagesResult& AddSupportedLanguages(SupportedLanguagesT&& value) { m_supportedLanguagesHasBeenSet = true; m_supportedLanguages.emplace_back(std::forward<SupportedLanguagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSupportedLanguagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SupportedLanguage> m_supportedLanguages;
    bool m_supportedLanguagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
