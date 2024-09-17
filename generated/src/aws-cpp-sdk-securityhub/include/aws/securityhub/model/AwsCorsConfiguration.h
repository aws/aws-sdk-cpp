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
    AWS_SECURITYHUB_API AwsCorsConfiguration();
    AWS_SECURITYHUB_API AwsCorsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCorsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowed origins for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowOrigins() const{ return m_allowOrigins; }
    inline bool AllowOriginsHasBeenSet() const { return m_allowOriginsHasBeenSet; }
    inline void SetAllowOrigins(const Aws::Vector<Aws::String>& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = value; }
    inline void SetAllowOrigins(Aws::Vector<Aws::String>&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = std::move(value); }
    inline AwsCorsConfiguration& WithAllowOrigins(const Aws::Vector<Aws::String>& value) { SetAllowOrigins(value); return *this;}
    inline AwsCorsConfiguration& WithAllowOrigins(Aws::Vector<Aws::String>&& value) { SetAllowOrigins(std::move(value)); return *this;}
    inline AwsCorsConfiguration& AddAllowOrigins(const Aws::String& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }
    inline AwsCorsConfiguration& AddAllowOrigins(Aws::String&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(std::move(value)); return *this; }
    inline AwsCorsConfiguration& AddAllowOrigins(const char* value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the CORS request includes credentials.</p>
     */
    inline bool GetAllowCredentials() const{ return m_allowCredentials; }
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }
    inline AwsCorsConfiguration& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exposed headers for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const{ return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    inline void SetExposeHeaders(const Aws::Vector<Aws::String>& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = value; }
    inline void SetExposeHeaders(Aws::Vector<Aws::String>&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::move(value); }
    inline AwsCorsConfiguration& WithExposeHeaders(const Aws::Vector<Aws::String>& value) { SetExposeHeaders(value); return *this;}
    inline AwsCorsConfiguration& WithExposeHeaders(Aws::Vector<Aws::String>&& value) { SetExposeHeaders(std::move(value)); return *this;}
    inline AwsCorsConfiguration& AddExposeHeaders(const Aws::String& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }
    inline AwsCorsConfiguration& AddExposeHeaders(Aws::String&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(std::move(value)); return *this; }
    inline AwsCorsConfiguration& AddExposeHeaders(const char* value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which the browser caches preflight request
     * results.</p>
     */
    inline int GetMaxAge() const{ return m_maxAge; }
    inline bool MaxAgeHasBeenSet() const { return m_maxAgeHasBeenSet; }
    inline void SetMaxAge(int value) { m_maxAgeHasBeenSet = true; m_maxAge = value; }
    inline AwsCorsConfiguration& WithMaxAge(int value) { SetMaxAge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed methods for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowMethods() const{ return m_allowMethods; }
    inline bool AllowMethodsHasBeenSet() const { return m_allowMethodsHasBeenSet; }
    inline void SetAllowMethods(const Aws::Vector<Aws::String>& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = value; }
    inline void SetAllowMethods(Aws::Vector<Aws::String>&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = std::move(value); }
    inline AwsCorsConfiguration& WithAllowMethods(const Aws::Vector<Aws::String>& value) { SetAllowMethods(value); return *this;}
    inline AwsCorsConfiguration& WithAllowMethods(Aws::Vector<Aws::String>&& value) { SetAllowMethods(std::move(value)); return *this;}
    inline AwsCorsConfiguration& AddAllowMethods(const Aws::String& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }
    inline AwsCorsConfiguration& AddAllowMethods(Aws::String&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(std::move(value)); return *this; }
    inline AwsCorsConfiguration& AddAllowMethods(const char* value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allowed headers for CORS requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowHeaders() const{ return m_allowHeaders; }
    inline bool AllowHeadersHasBeenSet() const { return m_allowHeadersHasBeenSet; }
    inline void SetAllowHeaders(const Aws::Vector<Aws::String>& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = value; }
    inline void SetAllowHeaders(Aws::Vector<Aws::String>&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = std::move(value); }
    inline AwsCorsConfiguration& WithAllowHeaders(const Aws::Vector<Aws::String>& value) { SetAllowHeaders(value); return *this;}
    inline AwsCorsConfiguration& WithAllowHeaders(Aws::Vector<Aws::String>&& value) { SetAllowHeaders(std::move(value)); return *this;}
    inline AwsCorsConfiguration& AddAllowHeaders(const Aws::String& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }
    inline AwsCorsConfiguration& AddAllowHeaders(Aws::String&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(std::move(value)); return *this; }
    inline AwsCorsConfiguration& AddAllowHeaders(const char* value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowOrigins;
    bool m_allowOriginsHasBeenSet = false;

    bool m_allowCredentials;
    bool m_allowCredentialsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;

    int m_maxAge;
    bool m_maxAgeHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowMethods;
    bool m_allowMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowHeaders;
    bool m_allowHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
