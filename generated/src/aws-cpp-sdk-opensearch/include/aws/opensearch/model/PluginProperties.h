﻿/**
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
    AWS_OPENSEARCHSERVICE_API PluginProperties();
    AWS_OPENSEARCHSERVICE_API PluginProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PluginProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PluginProperties& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PluginProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PluginProperties& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the plugin.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PluginProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PluginProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PluginProperties& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the plugin.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline PluginProperties& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PluginProperties& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PluginProperties& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the class to load.</p>
     */
    inline const Aws::String& GetClassName() const{ return m_className; }
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
    inline void SetClassName(const Aws::String& value) { m_classNameHasBeenSet = true; m_className = value; }
    inline void SetClassName(Aws::String&& value) { m_classNameHasBeenSet = true; m_className = std::move(value); }
    inline void SetClassName(const char* value) { m_classNameHasBeenSet = true; m_className.assign(value); }
    inline PluginProperties& WithClassName(const Aws::String& value) { SetClassName(value); return *this;}
    inline PluginProperties& WithClassName(Aws::String&& value) { SetClassName(std::move(value)); return *this;}
    inline PluginProperties& WithClassName(const char* value) { SetClassName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uncompressed size of the plugin.</p>
     */
    inline long long GetUncompressedSizeInBytes() const{ return m_uncompressedSizeInBytes; }
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

    long long m_uncompressedSizeInBytes;
    bool m_uncompressedSizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
