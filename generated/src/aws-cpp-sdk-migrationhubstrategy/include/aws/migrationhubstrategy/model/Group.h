/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/GroupName.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> The object containing information about distinct imports or groups for
   * Strategy Recommendations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Group();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The key of the specific import group. </p>
     */
    inline const GroupName& GetName() const{ return m_name; }

    /**
     * <p> The key of the specific import group. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The key of the specific import group. </p>
     */
    inline void SetName(const GroupName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The key of the specific import group. </p>
     */
    inline void SetName(GroupName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The key of the specific import group. </p>
     */
    inline Group& WithName(const GroupName& value) { SetName(value); return *this;}

    /**
     * <p> The key of the specific import group. </p>
     */
    inline Group& WithName(GroupName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The value of the specific import group. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value of the specific import group. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value of the specific import group. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value of the specific import group. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value of the specific import group. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value of the specific import group. </p>
     */
    inline Group& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value of the specific import group. </p>
     */
    inline Group& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value of the specific import group. </p>
     */
    inline Group& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    GroupName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
