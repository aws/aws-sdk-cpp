/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TextTranslationJobProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Translate
{
namespace Model
{
  class DescribeTextTranslationJobResult
  {
  public:
    AWS_TRANSLATE_API DescribeTextTranslationJobResult() = default;
    AWS_TRANSLATE_API DescribeTextTranslationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API DescribeTextTranslationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline const TextTranslationJobProperties& GetTextTranslationJobProperties() const { return m_textTranslationJobProperties; }
    template<typename TextTranslationJobPropertiesT = TextTranslationJobProperties>
    void SetTextTranslationJobProperties(TextTranslationJobPropertiesT&& value) { m_textTranslationJobPropertiesHasBeenSet = true; m_textTranslationJobProperties = std::forward<TextTranslationJobPropertiesT>(value); }
    template<typename TextTranslationJobPropertiesT = TextTranslationJobProperties>
    DescribeTextTranslationJobResult& WithTextTranslationJobProperties(TextTranslationJobPropertiesT&& value) { SetTextTranslationJobProperties(std::forward<TextTranslationJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTextTranslationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TextTranslationJobProperties m_textTranslationJobProperties;
    bool m_textTranslationJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
