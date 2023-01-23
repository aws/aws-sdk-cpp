/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DimensionValueSource.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the dimension configuration to use when you send email
   * events to Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CloudWatchDimensionConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchDimensionConfiguration
  {
  public:
    AWS_SESV2_API CloudWatchDimensionConfiguration();
    AWS_SESV2_API CloudWatchDimensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API CloudWatchDimensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name has to meet the following criteria:</p> <ul> <li> <p>It can
     * only contain ASCII letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes
     * (-).</p> </li> <li> <p>It can contain no more than 256 characters.</p> </li>
     * </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline const DimensionValueSource& GetDimensionValueSource() const{ return m_dimensionValueSource; }

    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline bool DimensionValueSourceHasBeenSet() const { return m_dimensionValueSourceHasBeenSet; }

    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline void SetDimensionValueSource(const DimensionValueSource& value) { m_dimensionValueSourceHasBeenSet = true; m_dimensionValueSource = value; }

    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline void SetDimensionValueSource(DimensionValueSource&& value) { m_dimensionValueSourceHasBeenSet = true; m_dimensionValueSource = std::move(value); }

    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionValueSource(const DimensionValueSource& value) { SetDimensionValueSource(value); return *this;}

    /**
     * <p>The location where the Amazon SES API v2 finds the value of a dimension to
     * publish to Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code> or <code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. To use your own email headers, choose
     * <code>emailHeader</code>. To use link tags, choose <code>linkTags</code>.</p>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionValueSource(DimensionValueSource&& value) { SetDimensionValueSource(std::move(value)); return *this;}


    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDimensionValue() const{ return m_defaultDimensionValue; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline bool DefaultDimensionValueHasBeenSet() const { return m_defaultDimensionValueHasBeenSet; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(const Aws::String& value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue = value; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(Aws::String&& value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue = std::move(value); }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(const char* value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue.assign(value); }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(const Aws::String& value) { SetDefaultDimensionValue(value); return *this;}

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(Aws::String&& value) { SetDefaultDimensionValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you don't provide the value of the dimension when you send an email. This value
     * has to meet the following criteria:</p> <ul> <li> <p>Can only contain ASCII
     * letters (a–z, A–Z), numbers (0–9), underscores (_), or dashes (-), at signs (@),
     * and periods (.).</p> </li> <li> <p>It can contain no more than 256
     * characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(const char* value) { SetDefaultDimensionValue(value); return *this;}

  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    DimensionValueSource m_dimensionValueSource;
    bool m_dimensionValueSourceHasBeenSet = false;

    Aws::String m_defaultDimensionValue;
    bool m_defaultDimensionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
