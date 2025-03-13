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
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration() = default;
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldLinkContentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom text content (value, font configuration) for the table link
     * content configuration.</p>
     */
    inline const TableFieldCustomTextContent& GetCustomTextContent() const { return m_customTextContent; }
    inline bool CustomTextContentHasBeenSet() const { return m_customTextContentHasBeenSet; }
    template<typename CustomTextContentT = TableFieldCustomTextContent>
    void SetCustomTextContent(CustomTextContentT&& value) { m_customTextContentHasBeenSet = true; m_customTextContent = std::forward<CustomTextContentT>(value); }
    template<typename CustomTextContentT = TableFieldCustomTextContent>
    TableFieldLinkContentConfiguration& WithCustomTextContent(CustomTextContentT&& value) { SetCustomTextContent(std::forward<CustomTextContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom icon content for the table link content configuration.</p>
     */
    inline const TableFieldCustomIconContent& GetCustomIconContent() const { return m_customIconContent; }
    inline bool CustomIconContentHasBeenSet() const { return m_customIconContentHasBeenSet; }
    template<typename CustomIconContentT = TableFieldCustomIconContent>
    void SetCustomIconContent(CustomIconContentT&& value) { m_customIconContentHasBeenSet = true; m_customIconContent = std::forward<CustomIconContentT>(value); }
    template<typename CustomIconContentT = TableFieldCustomIconContent>
    TableFieldLinkContentConfiguration& WithCustomIconContent(CustomIconContentT&& value) { SetCustomIconContent(std::forward<CustomIconContentT>(value)); return *this;}
    ///@}
  private:

    TableFieldCustomTextContent m_customTextContent;
    bool m_customTextContentHasBeenSet = false;

    TableFieldCustomIconContent m_customIconContent;
    bool m_customIconContentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
