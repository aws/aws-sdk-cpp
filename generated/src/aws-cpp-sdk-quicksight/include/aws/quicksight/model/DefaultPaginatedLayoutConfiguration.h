/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultSectionBasedLayoutConfiguration.h>
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
   * <p>The options that determine the default settings for a paginated layout
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultPaginatedLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultPaginatedLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultPaginatedLayoutConfiguration();
    AWS_QUICKSIGHT_API DefaultPaginatedLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultPaginatedLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline const DefaultSectionBasedLayoutConfiguration& GetSectionBased() const{ return m_sectionBased; }

    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline bool SectionBasedHasBeenSet() const { return m_sectionBasedHasBeenSet; }

    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline void SetSectionBased(const DefaultSectionBasedLayoutConfiguration& value) { m_sectionBasedHasBeenSet = true; m_sectionBased = value; }

    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline void SetSectionBased(DefaultSectionBasedLayoutConfiguration&& value) { m_sectionBasedHasBeenSet = true; m_sectionBased = std::move(value); }

    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline DefaultPaginatedLayoutConfiguration& WithSectionBased(const DefaultSectionBasedLayoutConfiguration& value) { SetSectionBased(value); return *this;}

    /**
     * <p>The options that determine the default settings for a section-based layout
     * configuration.</p>
     */
    inline DefaultPaginatedLayoutConfiguration& WithSectionBased(DefaultSectionBasedLayoutConfiguration&& value) { SetSectionBased(std::move(value)); return *this;}

  private:

    DefaultSectionBasedLayoutConfiguration m_sectionBased;
    bool m_sectionBasedHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
