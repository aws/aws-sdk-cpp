/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableFieldLinkConfiguration.h>
#include <aws/quicksight/model/TableFieldImageConfiguration.h>
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
   * <p>The URL configuration for a table field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldURLConfiguration">AWS
   * API Reference</a></p>
   */
  class TableFieldURLConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableFieldURLConfiguration();
    AWS_QUICKSIGHT_API TableFieldURLConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldURLConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline const TableFieldLinkConfiguration& GetLinkConfiguration() const{ return m_linkConfiguration; }

    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline bool LinkConfigurationHasBeenSet() const { return m_linkConfigurationHasBeenSet; }

    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline void SetLinkConfiguration(const TableFieldLinkConfiguration& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = value; }

    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline void SetLinkConfiguration(TableFieldLinkConfiguration&& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = std::move(value); }

    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline TableFieldURLConfiguration& WithLinkConfiguration(const TableFieldLinkConfiguration& value) { SetLinkConfiguration(value); return *this;}

    /**
     * <p>The link configuration of a table field URL.</p>
     */
    inline TableFieldURLConfiguration& WithLinkConfiguration(TableFieldLinkConfiguration&& value) { SetLinkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline const TableFieldImageConfiguration& GetImageConfiguration() const{ return m_imageConfiguration; }

    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }

    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline void SetImageConfiguration(const TableFieldImageConfiguration& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }

    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline void SetImageConfiguration(TableFieldImageConfiguration&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }

    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline TableFieldURLConfiguration& WithImageConfiguration(const TableFieldImageConfiguration& value) { SetImageConfiguration(value); return *this;}

    /**
     * <p>The image configuration of a table field URL.</p>
     */
    inline TableFieldURLConfiguration& WithImageConfiguration(TableFieldImageConfiguration&& value) { SetImageConfiguration(std::move(value)); return *this;}

  private:

    TableFieldLinkConfiguration m_linkConfiguration;
    bool m_linkConfigurationHasBeenSet = false;

    TableFieldImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
