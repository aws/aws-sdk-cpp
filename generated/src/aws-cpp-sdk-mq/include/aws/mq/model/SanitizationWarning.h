/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/SanitizationWarningReason.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about the XML element or attribute that was sanitized in
   * the configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/SanitizationWarning">AWS
   * API Reference</a></p>
   */
  class SanitizationWarning
  {
  public:
    AWS_MQ_API SanitizationWarning();
    AWS_MQ_API SanitizationWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API SanitizationWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline SanitizationWarning& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline SanitizationWarning& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the XML attribute that has been sanitized.</p>
     */
    inline SanitizationWarning& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline const Aws::String& GetElementName() const{ return m_elementName; }

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline bool ElementNameHasBeenSet() const { return m_elementNameHasBeenSet; }

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline void SetElementName(const Aws::String& value) { m_elementNameHasBeenSet = true; m_elementName = value; }

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline void SetElementName(Aws::String&& value) { m_elementNameHasBeenSet = true; m_elementName = std::move(value); }

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline void SetElementName(const char* value) { m_elementNameHasBeenSet = true; m_elementName.assign(value); }

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline SanitizationWarning& WithElementName(const Aws::String& value) { SetElementName(value); return *this;}

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline SanitizationWarning& WithElementName(Aws::String&& value) { SetElementName(std::move(value)); return *this;}

    /**
     * <p>The name of the XML element that has been sanitized.</p>
     */
    inline SanitizationWarning& WithElementName(const char* value) { SetElementName(value); return *this;}


    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline const SanitizationWarningReason& GetReason() const{ return m_reason; }

    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline void SetReason(const SanitizationWarningReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline void SetReason(SanitizationWarningReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline SanitizationWarning& WithReason(const SanitizationWarningReason& value) { SetReason(value); return *this;}

    /**
     * <p>Required. The reason for which the XML elements or attributes were
     * sanitized.</p>
     */
    inline SanitizationWarning& WithReason(SanitizationWarningReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_elementName;
    bool m_elementNameHasBeenSet = false;

    SanitizationWarningReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
