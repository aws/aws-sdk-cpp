/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/qbusiness/model/PluginTypeCategory.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Summary metadata information for a Amazon Q Business plugin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PluginTypeMetadataSummary">AWS
   * API Reference</a></p>
   */
  class PluginTypeMetadataSummary
  {
  public:
    AWS_QBUSINESS_API PluginTypeMetadataSummary();
    AWS_QBUSINESS_API PluginTypeMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PluginTypeMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the plugin.</p>
     */
    inline const PluginType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PluginType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PluginType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PluginTypeMetadataSummary& WithType(const PluginType& value) { SetType(value); return *this;}
    inline PluginTypeMetadataSummary& WithType(PluginType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the plugin type.</p>
     */
    inline const PluginTypeCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const PluginTypeCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(PluginTypeCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline PluginTypeMetadataSummary& WithCategory(const PluginTypeCategory& value) { SetCategory(value); return *this;}
    inline PluginTypeMetadataSummary& WithCategory(PluginTypeCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description assigned by Amazon Q Business to a plugin. You can't modify
     * this value.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PluginTypeMetadataSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PluginTypeMetadataSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PluginTypeMetadataSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    PluginType m_type;
    bool m_typeHasBeenSet = false;

    PluginTypeCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
