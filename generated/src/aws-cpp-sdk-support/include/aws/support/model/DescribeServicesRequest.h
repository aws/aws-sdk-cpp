/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeServicesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeServicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServices"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceCodeList() const { return m_serviceCodeList; }
    inline bool ServiceCodeListHasBeenSet() const { return m_serviceCodeListHasBeenSet; }
    template<typename ServiceCodeListT = Aws::Vector<Aws::String>>
    void SetServiceCodeList(ServiceCodeListT&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList = std::forward<ServiceCodeListT>(value); }
    template<typename ServiceCodeListT = Aws::Vector<Aws::String>>
    DescribeServicesRequest& WithServiceCodeList(ServiceCodeListT&& value) { SetServiceCodeList(std::forward<ServiceCodeListT>(value)); return *this;}
    template<typename ServiceCodeListT = Aws::String>
    DescribeServicesRequest& AddServiceCodeList(ServiceCodeListT&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.emplace_back(std::forward<ServiceCodeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    DescribeServicesRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceCodeList;
    bool m_serviceCodeListHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
