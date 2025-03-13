/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Basic information about the plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PluginProperties">AWS
   * API Reference</a></p>
   */
  class PluginProperties
  {
  public:
    AWS_OPENSEARCHSERVICE_API PluginProperties() = default;
    AWS_OPENSEARCHSERVICE_API PluginProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PluginProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PluginProperties& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the plugin.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PluginProperties& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the plugin.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PluginProperties& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the class to load.</p>
     */
    inline const Aws::String& GetClassName() const { return m_className; }
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
    template<typename ClassNameT = Aws::String>
    void SetClassName(ClassNameT&& value) { m_classNameHasBeenSet = true; m_className = std::forward<ClassNameT>(value); }
    template<typename ClassNameT = Aws::String>
    PluginProperties& WithClassName(ClassNameT&& value) { SetClassName(std::forward<ClassNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uncompressed size of the plugin.</p>
     */
    inline long long GetUncompressedSizeInBytes() const { return m_uncompressedSizeInBytes; }
    inline bool UncompressedSizeInBytesHasBeenSet() const { return m_uncompressedSizeInBytesHasBeenSet; }
    inline void SetUncompressedSizeInBytes(long long value) { m_uncompressedSizeInBytesHasBeenSet = true; m_uncompressedSizeInBytes = value; }
    inline PluginProperties& WithUncompressedSizeInBytes(long long value) { SetUncompressedSizeInBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    long long m_uncompressedSizeInBytes{0};
    bool m_uncompressedSizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
