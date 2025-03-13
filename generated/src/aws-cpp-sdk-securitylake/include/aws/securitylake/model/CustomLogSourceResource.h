/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/CustomLogSourceAttributes.h>
#include <aws/securitylake/model/CustomLogSourceProvider.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Amazon Security Lake can collect logs and events from third-party custom
   * sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceResource">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceResource
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceResource() = default;
    AWS_SECURITYLAKE_API CustomLogSourceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline const CustomLogSourceAttributes& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = CustomLogSourceAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = CustomLogSourceAttributes>
    CustomLogSourceResource& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline const CustomLogSourceProvider& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = CustomLogSourceProvider>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = CustomLogSourceProvider>
    CustomLogSourceResource& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    CustomLogSourceResource& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CustomLogSourceResource& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}
  private:

    CustomLogSourceAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    CustomLogSourceProvider m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
