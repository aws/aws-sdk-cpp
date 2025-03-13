/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/BrowserExtension.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The container for browser extension configuration for an Amazon Q Business
   * web experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BrowserExtensionConfiguration">AWS
   * API Reference</a></p>
   */
  class BrowserExtensionConfiguration
  {
  public:
    AWS_QBUSINESS_API BrowserExtensionConfiguration() = default;
    AWS_QBUSINESS_API BrowserExtensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BrowserExtensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the browser extensions allowed for your Amazon Q web experience.</p>
     * <ul> <li> <p> <code>CHROME</code> — Enables the extension for Chromium-based
     * browsers (Google Chrome, Microsoft Edge, Opera, etc.).</p> </li> <li> <p>
     * <code>FIREFOX</code> — Enables the extension for Mozilla Firefox.</p> </li> <li>
     * <p> <code>CHROME</code> and <code>FIREFOX</code> — Enable the extension for
     * Chromium-based browsers and Mozilla Firefox.</p> </li> </ul>
     */
    inline const Aws::Vector<BrowserExtension>& GetEnabledBrowserExtensions() const { return m_enabledBrowserExtensions; }
    inline bool EnabledBrowserExtensionsHasBeenSet() const { return m_enabledBrowserExtensionsHasBeenSet; }
    template<typename EnabledBrowserExtensionsT = Aws::Vector<BrowserExtension>>
    void SetEnabledBrowserExtensions(EnabledBrowserExtensionsT&& value) { m_enabledBrowserExtensionsHasBeenSet = true; m_enabledBrowserExtensions = std::forward<EnabledBrowserExtensionsT>(value); }
    template<typename EnabledBrowserExtensionsT = Aws::Vector<BrowserExtension>>
    BrowserExtensionConfiguration& WithEnabledBrowserExtensions(EnabledBrowserExtensionsT&& value) { SetEnabledBrowserExtensions(std::forward<EnabledBrowserExtensionsT>(value)); return *this;}
    inline BrowserExtensionConfiguration& AddEnabledBrowserExtensions(BrowserExtension value) { m_enabledBrowserExtensionsHasBeenSet = true; m_enabledBrowserExtensions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<BrowserExtension> m_enabledBrowserExtensions;
    bool m_enabledBrowserExtensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
