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
   * <p>Returns information about the configuration element or attribute that was
   * sanitized in the configuration.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The name of the configuration attribute that has been sanitized.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline SanitizationWarning& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline SanitizationWarning& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline SanitizationWarning& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration element that has been sanitized.</p>
     */
    inline const Aws::String& GetElementName() const{ return m_elementName; }
    inline bool ElementNameHasBeenSet() const { return m_elementNameHasBeenSet; }
    inline void SetElementName(const Aws::String& value) { m_elementNameHasBeenSet = true; m_elementName = value; }
    inline void SetElementName(Aws::String&& value) { m_elementNameHasBeenSet = true; m_elementName = std::move(value); }
    inline void SetElementName(const char* value) { m_elementNameHasBeenSet = true; m_elementName.assign(value); }
    inline SanitizationWarning& WithElementName(const Aws::String& value) { SetElementName(value); return *this;}
    inline SanitizationWarning& WithElementName(Aws::String&& value) { SetElementName(std::move(value)); return *this;}
    inline SanitizationWarning& WithElementName(const char* value) { SetElementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for which the configuration elements or attributes were
     * sanitized.</p>
     */
    inline const SanitizationWarningReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const SanitizationWarningReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(SanitizationWarningReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline SanitizationWarning& WithReason(const SanitizationWarningReason& value) { SetReason(value); return *this;}
    inline SanitizationWarning& WithReason(SanitizationWarningReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}
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
