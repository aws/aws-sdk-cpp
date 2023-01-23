/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object, structure, or sub-structure of an analysis, template, or
   * dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_QUICKSIGHT_API Entity();
    AWS_QUICKSIGHT_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline Entity& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline Entity& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The hierarchical path of the entity within the analysis, template, or
     * dashboard definition tree.</p>
     */
    inline Entity& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
