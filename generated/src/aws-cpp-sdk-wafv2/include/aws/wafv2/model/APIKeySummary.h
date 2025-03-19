/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information for a single API key. </p> <p>API keys are required for the
   * integration of the CAPTCHA API in your JavaScript client applications. The API
   * lets you customize the placement and characteristics of the CAPTCHA puzzle for
   * your end users. For more information about the CAPTCHA JavaScript integration,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
   * client application integration</a> in the <i>WAF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/APIKeySummary">AWS
   * API Reference</a></p>
   */
  class APIKeySummary
  {
  public:
    AWS_WAFV2_API APIKeySummary() = default;
    AWS_WAFV2_API APIKeySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API APIKeySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const { return m_tokenDomains; }
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    void SetTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::forward<TokenDomainsT>(value); }
    template<typename TokenDomainsT = Aws::Vector<Aws::String>>
    APIKeySummary& WithTokenDomains(TokenDomainsT&& value) { SetTokenDomains(std::forward<TokenDomainsT>(value)); return *this;}
    template<typename TokenDomainsT = Aws::String>
    APIKeySummary& AddTokenDomains(TokenDomainsT&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.emplace_back(std::forward<TokenDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline const Aws::String& GetAPIKey() const { return m_aPIKey; }
    inline bool APIKeyHasBeenSet() const { return m_aPIKeyHasBeenSet; }
    template<typename APIKeyT = Aws::String>
    void SetAPIKey(APIKeyT&& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = std::forward<APIKeyT>(value); }
    template<typename APIKeyT = Aws::String>
    APIKeySummary& WithAPIKey(APIKeyT&& value) { SetAPIKey(std::forward<APIKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the key was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    APIKeySummary& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Internal value used by WAF to manage the key. </p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline APIKeySummary& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;

    Aws::String m_aPIKey;
    bool m_aPIKeyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
