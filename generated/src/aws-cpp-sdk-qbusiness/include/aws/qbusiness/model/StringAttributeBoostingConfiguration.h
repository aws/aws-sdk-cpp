/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAttributeBoostingLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/StringAttributeValueBoostingLevel.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information on boosting <code>STRING</code> type document
   * attributes.</p>  <p>For <code>STRING</code> and <code>STRING_LIST</code>
   * type document attributes to be used for boosting on the console and the API,
   * they must be enabled for search using the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeConfiguration.html">DocumentAttributeConfiguration</a>
   * object of the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_UpdateIndex.html">UpdateIndex</a>
   * API. If you haven't enabled searching on these attributes, you can't boost
   * attributes of these data types on either the console or the API.</p> 
   * <p>For more information on how boosting document attributes work in Amazon Q
   * Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StringAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class StringAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration() = default;
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the priority tier ranking of boosting applied to document
     * attributes. For version 2, this parameter indicates the relative ranking between
     * boosted fields (ONE being highest priority, TWO being second highest, etc.) and
     * determines the order in which attributes influence document ranking in search
     * results. For version 1, this parameter specifies the boosting intensity. For
     * version 2, boosting intensity (VERY HIGH, HIGH, MEDIUM, LOW, NONE) are not
     * supported. Note that in version 2, you are not allowed to boost on only one
     * field and make this value TWO.</p>
     */
    inline DocumentAttributeBoostingLevel GetBoostingLevel() const { return m_boostingLevel; }
    inline bool BoostingLevelHasBeenSet() const { return m_boostingLevelHasBeenSet; }
    inline void SetBoostingLevel(DocumentAttributeBoostingLevel value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = value; }
    inline StringAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel value) { SetBoostingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted. When using <code>NativeIndexConfiguration</code> version 2, you
     * can specify up to five values in order of priority.</p>
     */
    inline const Aws::Map<Aws::String, StringAttributeValueBoostingLevel>& GetAttributeValueBoosting() const { return m_attributeValueBoosting; }
    inline bool AttributeValueBoostingHasBeenSet() const { return m_attributeValueBoostingHasBeenSet; }
    template<typename AttributeValueBoostingT = Aws::Map<Aws::String, StringAttributeValueBoostingLevel>>
    void SetAttributeValueBoosting(AttributeValueBoostingT&& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting = std::forward<AttributeValueBoostingT>(value); }
    template<typename AttributeValueBoostingT = Aws::Map<Aws::String, StringAttributeValueBoostingLevel>>
    StringAttributeBoostingConfiguration& WithAttributeValueBoosting(AttributeValueBoostingT&& value) { SetAttributeValueBoosting(std::forward<AttributeValueBoostingT>(value)); return *this;}
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(Aws::String key, StringAttributeValueBoostingLevel value) {
      m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(key, value); return *this;
    }
    ///@}
  private:

    DocumentAttributeBoostingLevel m_boostingLevel{DocumentAttributeBoostingLevel::NOT_SET};
    bool m_boostingLevelHasBeenSet = false;

    Aws::Map<Aws::String, StringAttributeValueBoostingLevel> m_attributeValueBoosting;
    bool m_attributeValueBoostingHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
