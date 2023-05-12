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
    AWS_SUPPORT_API DescribeSupportedLanguagesResult();
    AWS_SUPPORT_API DescribeSupportedLanguagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeSupportedLanguagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline const Aws::Vector<SupportedLanguage>& GetSupportedLanguages() const{ return m_supportedLanguages; }

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline void SetSupportedLanguages(const Aws::Vector<SupportedLanguage>& value) { m_supportedLanguages = value; }

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline void SetSupportedLanguages(Aws::Vector<SupportedLanguage>&& value) { m_supportedLanguages = std::move(value); }

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline DescribeSupportedLanguagesResult& WithSupportedLanguages(const Aws::Vector<SupportedLanguage>& value) { SetSupportedLanguages(value); return *this;}

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline DescribeSupportedLanguagesResult& WithSupportedLanguages(Aws::Vector<SupportedLanguage>&& value) { SetSupportedLanguages(std::move(value)); return *this;}

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline DescribeSupportedLanguagesResult& AddSupportedLanguages(const SupportedLanguage& value) { m_supportedLanguages.push_back(value); return *this; }

    /**
     * <p> A JSON-formatted array that contains the available ISO 639-1 language codes.
     * </p>
     */
    inline DescribeSupportedLanguagesResult& AddSupportedLanguages(SupportedLanguage&& value) { m_supportedLanguages.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSupportedLanguagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSupportedLanguagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSupportedLanguagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SupportedLanguage> m_supportedLanguages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
