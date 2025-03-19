/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains the cross-origin resource sharing (CORS) configuration for the API.
   * CORS is only supported for HTTP APIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCorsConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsCorsConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsCorsConfiguration() = default;
    AWS_SECURITYHUB_API AwsCorsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCorsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowed origins for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowOrigins() const { return m_allowOrigins; }
    inline bool AllowOriginsHasBeenSet() const { return m_allowOriginsHasBeenSet; }
    template<typename AllowOriginsT = Aws::Vector<Aws::String>>
    void SetAllowOrigins(AllowOriginsT&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = std::forward<AllowOriginsT>(value); }
    template<typename AllowOriginsT = Aws::Vector<Aws::String>>
    AwsCorsConfiguration& WithAllowOrigins(AllowOriginsT&& value) { SetAllowOrigins(std::forward<AllowOriginsT>(value)); return *this;}
    template<typename AllowOriginsT = Aws::String>
    AwsCorsConfiguration& AddAllowOrigins(AllowOriginsT&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.emplace_back(std::forward<AllowOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the CORS request includes credentials.</p>
     */
    inline bool GetAllowCredentials() const { return m_allowCredentials; }
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }
    inline AwsCorsConfiguration& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exposed headers for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const { return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    void SetExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::forward<ExposeHeadersT>(value); }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    AwsCorsConfiguration& WithExposeHeaders(ExposeHeadersT&& value) { SetExposeHeaders(std::forward<ExposeHeadersT>(value)); return *this;}
    template<typename ExposeHeadersT = Aws::String>
    AwsCorsConfiguration& AddExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.emplace_back(std::forward<ExposeHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which the browser caches preflight request
     * results.</p>
     */
    inline int GetMaxAge() const { return m_maxAge; }
    inline bool MaxAgeHasBeenSet() const { return m_maxAgeHasBeenSet; }
    inline void SetMaxAge(int value) { m_maxAgeHasBeenSet = true; m_maxAge = value; }
    inline AwsCorsConfiguration& WithMaxAge(int value) { SetMaxAge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed methods for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowMethods() const { return m_allowMethods; }
    inline bool AllowMethodsHasBeenSet() const { return m_allowMethodsHasBeenSet; }
    template<typename AllowMethodsT = Aws::Vector<Aws::String>>
    void SetAllowMethods(AllowMethodsT&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = std::forward<AllowMethodsT>(value); }
    template<typename AllowMethodsT = Aws::Vector<Aws::String>>
    AwsCorsConfiguration& WithAllowMethods(AllowMethodsT&& value) { SetAllowMethods(std::forward<AllowMethodsT>(value)); return *this;}
    template<typename AllowMethodsT = Aws::String>
    AwsCorsConfiguration& AddAllowMethods(AllowMethodsT&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.emplace_back(std::forward<AllowMethodsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allowed headers for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowHeaders() const { return m_allowHeaders; }
    inline bool AllowHeadersHasBeenSet() const { return m_allowHeadersHasBeenSet; }
    template<typename AllowHeadersT = Aws::Vector<Aws::String>>
    void SetAllowHeaders(AllowHeadersT&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = std::forward<AllowHeadersT>(value); }
    template<typename AllowHeadersT = Aws::Vector<Aws::String>>
    AwsCorsConfiguration& WithAllowHeaders(AllowHeadersT&& value) { SetAllowHeaders(std::forward<AllowHeadersT>(value)); return *this;}
    template<typename AllowHeadersT = Aws::String>
    AwsCorsConfiguration& AddAllowHeaders(AllowHeadersT&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.emplace_back(std::forward<AllowHeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowOrigins;
    bool m_allowOriginsHasBeenSet = false;

    bool m_allowCredentials{false};
    bool m_allowCredentialsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;

    int m_maxAge{0};
    bool m_maxAgeHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowMethods;
    bool m_allowMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowHeaders;
    bool m_allowHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
