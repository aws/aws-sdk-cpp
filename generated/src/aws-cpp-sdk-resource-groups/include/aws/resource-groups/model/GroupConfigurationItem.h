/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupConfigurationParameter.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>An item in a group configuration. A group service configuration can have one
   * or more items. For details about group service configuration syntax, see <a
   * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
   * configurations for resource groups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupConfigurationItem">AWS
   * API Reference</a></p>
   */
  class GroupConfigurationItem
  {
  public:
    AWS_RESOURCEGROUPS_API GroupConfigurationItem();
    AWS_RESOURCEGROUPS_API GroupConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Specifies the type of group configuration item. Each item must have a unique
     * value for <code>type</code>. For the list of types that you can specify for a
     * configuration item, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline const Aws::Vector<GroupConfigurationParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetParameters(const Aws::Vector<GroupConfigurationParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline void SetParameters(Aws::Vector<GroupConfigurationParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& WithParameters(const Aws::Vector<GroupConfigurationParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& WithParameters(Aws::Vector<GroupConfigurationParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& AddParameters(const GroupConfigurationParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A collection of parameters for this group configuration item. For the list of
     * parameters that you can use with each configuration item type, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html#about-slg-types">Supported
     * resource types and parameters</a>.</p>
     */
    inline GroupConfigurationItem& AddParameters(GroupConfigurationParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<GroupConfigurationParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
