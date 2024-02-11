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
    AWS_SECURITYLAKE_API CustomLogSourceResource();
    AWS_SECURITYLAKE_API CustomLogSourceResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline const CustomLogSourceAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline void SetAttributes(const CustomLogSourceAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline void SetAttributes(CustomLogSourceAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline CustomLogSourceResource& WithAttributes(const CustomLogSourceAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes of a third-party custom source.</p>
     */
    inline CustomLogSourceResource& WithAttributes(CustomLogSourceAttributes&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline const CustomLogSourceProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline void SetProvider(const CustomLogSourceProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline void SetProvider(CustomLogSourceProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline CustomLogSourceResource& WithProvider(const CustomLogSourceProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The details of the log provider for a third-party custom source.</p>
     */
    inline CustomLogSourceResource& WithProvider(CustomLogSourceProvider&& value) { SetProvider(std::move(value)); return *this;}


    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The name for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>The version for a third-party custom source. This must be a Regionally unique
     * value.</p>
     */
    inline CustomLogSourceResource& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

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
