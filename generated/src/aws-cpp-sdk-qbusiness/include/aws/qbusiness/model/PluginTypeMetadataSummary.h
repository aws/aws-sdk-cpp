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
    AWS_QBUSINESS_API PluginTypeMetadataSummary() = default;
    AWS_QBUSINESS_API PluginTypeMetadataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PluginTypeMetadataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the plugin.</p>
     */
    inline PluginType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PluginType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PluginTypeMetadataSummary& WithType(PluginType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the plugin type.</p>
     */
    inline PluginTypeCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(PluginTypeCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline PluginTypeMetadataSummary& WithCategory(PluginTypeCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description assigned by Amazon Q Business to a plugin. You can't modify
     * this value.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PluginTypeMetadataSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    PluginType m_type{PluginType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PluginTypeCategory m_category{PluginTypeCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
