/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnchorOption.h>
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
   * <p>The date configuration of the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnchorDateConfiguration">AWS
   * API Reference</a></p>
   */
  class AnchorDateConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnchorDateConfiguration();
    AWS_QUICKSIGHT_API AnchorDateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnchorDateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline const AnchorOption& GetAnchorOption() const{ return m_anchorOption; }

    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline bool AnchorOptionHasBeenSet() const { return m_anchorOptionHasBeenSet; }

    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline void SetAnchorOption(const AnchorOption& value) { m_anchorOptionHasBeenSet = true; m_anchorOption = value; }

    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline void SetAnchorOption(AnchorOption&& value) { m_anchorOptionHasBeenSet = true; m_anchorOption = std::move(value); }

    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline AnchorDateConfiguration& WithAnchorOption(const AnchorOption& value) { SetAnchorOption(value); return *this;}

    /**
     * <p>The options for the date configuration. Choose one of the options below:</p>
     * <ul> <li> <p> <code>NOW</code> </p> </li> </ul>
     */
    inline AnchorDateConfiguration& WithAnchorOption(AnchorOption&& value) { SetAnchorOption(std::move(value)); return *this;}


    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline AnchorDateConfiguration& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline AnchorDateConfiguration& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter that is used for the anchor date configuration.</p>
     */
    inline AnchorDateConfiguration& WithParameterName(const char* value) { SetParameterName(value); return *this;}

  private:

    AnchorOption m_anchorOption;
    bool m_anchorOptionHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
