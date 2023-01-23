/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TextTranslationJobProperties.h>
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
    AWS_TRANSLATE_API DescribeTextTranslationJobResult();
    AWS_TRANSLATE_API DescribeTextTranslationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API DescribeTextTranslationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline const TextTranslationJobProperties& GetTextTranslationJobProperties() const{ return m_textTranslationJobProperties; }

    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline void SetTextTranslationJobProperties(const TextTranslationJobProperties& value) { m_textTranslationJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline void SetTextTranslationJobProperties(TextTranslationJobProperties&& value) { m_textTranslationJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline DescribeTextTranslationJobResult& WithTextTranslationJobProperties(const TextTranslationJobProperties& value) { SetTextTranslationJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with an asynchronous batch
     * translation job.</p>
     */
    inline DescribeTextTranslationJobResult& WithTextTranslationJobProperties(TextTranslationJobProperties&& value) { SetTextTranslationJobProperties(std::move(value)); return *this;}

  private:

    TextTranslationJobProperties m_textTranslationJobProperties;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
