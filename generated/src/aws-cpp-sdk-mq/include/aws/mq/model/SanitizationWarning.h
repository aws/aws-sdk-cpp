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
    AWS_MQ_API SanitizationWarning() = default;
    AWS_MQ_API SanitizationWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API SanitizationWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the configuration attribute that has been sanitized.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    SanitizationWarning& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration element that has been sanitized.</p>
     */
    inline const Aws::String& GetElementName() const { return m_elementName; }
    inline bool ElementNameHasBeenSet() const { return m_elementNameHasBeenSet; }
    template<typename ElementNameT = Aws::String>
    void SetElementName(ElementNameT&& value) { m_elementNameHasBeenSet = true; m_elementName = std::forward<ElementNameT>(value); }
    template<typename ElementNameT = Aws::String>
    SanitizationWarning& WithElementName(ElementNameT&& value) { SetElementName(std::forward<ElementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for which the configuration elements or attributes were
     * sanitized.</p>
     */
    inline SanitizationWarningReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(SanitizationWarningReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline SanitizationWarning& WithReason(SanitizationWarningReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_elementName;
    bool m_elementNameHasBeenSet = false;

    SanitizationWarningReason m_reason{SanitizationWarningReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
