/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ApplicationAttribute.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A list of <code>ApplicationAttribute</code>s that contains information about
   * the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ApplicationConfig">AWS
   * API Reference</a></p>
   */
  class ApplicationConfig
  {
  public:
    AWS_WAFV2_API ApplicationConfig() = default;
    AWS_WAFV2_API ApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the attribute name and a list of values for that attribute.</p>
     */
    inline const Aws::Vector<ApplicationAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<ApplicationAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<ApplicationAttribute>>
    ApplicationConfig& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = ApplicationAttribute>
    ApplicationConfig& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ApplicationAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
