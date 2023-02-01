/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableFieldCustomTextContent.h>
#include <aws/quicksight/model/TableFieldCustomIconContent.h>
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
   * <p>The URL content (text, icon) for the table link configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldLinkContentConfiguration">AWS
   * API Reference</a></p>
   */
  class TableFieldLinkContentConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration();
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline const TableFieldCustomTextContent& GetCustomTextContent() const{ return m_customTextContent; }

    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline bool CustomTextContentHasBeenSet() const { return m_customTextContentHasBeenSet; }

    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline void SetCustomTextContent(const TableFieldCustomTextContent& value) { m_customTextContentHasBeenSet = true; m_customTextContent = value; }

    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline void SetCustomTextContent(TableFieldCustomTextContent&& value) { m_customTextContentHasBeenSet = true; m_customTextContent = std::move(value); }

    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline TableFieldLinkContentConfiguration& WithCustomTextContent(const TableFieldCustomTextContent& value) { SetCustomTextContent(value); return *this;}

    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline TableFieldLinkContentConfiguration& WithCustomTextContent(TableFieldCustomTextContent&& value) { SetCustomTextContent(std::move(value)); return *this;}


    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline const TableFieldCustomIconContent& GetCustomIconContent() const{ return m_customIconContent; }

    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline bool CustomIconContentHasBeenSet() const { return m_customIconContentHasBeenSet; }

    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline void SetCustomIconContent(const TableFieldCustomIconContent& value) { m_customIconContentHasBeenSet = true; m_customIconContent = value; }

    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline void SetCustomIconContent(TableFieldCustomIconContent&& value) { m_customIconContentHasBeenSet = true; m_customIconContent = std::move(value); }

    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline TableFieldLinkContentConfiguration& WithCustomIconContent(const TableFieldCustomIconContent& value) { SetCustomIconContent(value); return *this;}

    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline TableFieldLinkContentConfiguration& WithCustomIconContent(TableFieldCustomIconContent&& value) { SetCustomIconContent(std::move(value)); return *this;}

  private:

    TableFieldCustomTextContent m_customTextContent;
    bool m_customTextContentHasBeenSet = false;

    TableFieldCustomIconContent m_customIconContent;
    bool m_customIconContentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
