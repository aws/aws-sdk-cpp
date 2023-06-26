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
    AWS_WAFV2_API APIKeySummary();
    AWS_WAFV2_API APIKeySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API APIKeySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const{ return m_tokenDomains; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline void SetTokenDomains(const Aws::Vector<Aws::String>& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = value; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline void SetTokenDomains(Aws::Vector<Aws::String>&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::move(value); }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline APIKeySummary& WithTokenDomains(const Aws::Vector<Aws::String>& value) { SetTokenDomains(value); return *this;}

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline APIKeySummary& WithTokenDomains(Aws::Vector<Aws::String>&& value) { SetTokenDomains(std::move(value)); return *this;}

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline APIKeySummary& AddTokenDomains(const Aws::String& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline APIKeySummary& AddTokenDomains(Aws::String&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline APIKeySummary& AddTokenDomains(const char* value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }


    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline const Aws::String& GetAPIKey() const{ return m_aPIKey; }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline bool APIKeyHasBeenSet() const { return m_aPIKeyHasBeenSet; }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(const Aws::String& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = value; }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(Aws::String&& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = std::move(value); }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(const char* value) { m_aPIKeyHasBeenSet = true; m_aPIKey.assign(value); }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline APIKeySummary& WithAPIKey(const Aws::String& value) { SetAPIKey(value); return *this;}

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline APIKeySummary& WithAPIKey(Aws::String&& value) { SetAPIKey(std::move(value)); return *this;}

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline APIKeySummary& WithAPIKey(const char* value) { SetAPIKey(value); return *this;}


    /**
     * <p>The date and time that the key was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline APIKeySummary& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline APIKeySummary& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>Internal value used by WAF to manage the key. </p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>Internal value used by WAF to manage the key. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Internal value used by WAF to manage the key. </p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Internal value used by WAF to manage the key. </p>
     */
    inline APIKeySummary& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;

    Aws::String m_aPIKey;
    bool m_aPIKeyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
