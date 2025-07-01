/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAttributeBoostingLevel.h>
#include <aws/qbusiness/model/NumberAttributeBoostingType.h>
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
   * <p>Provides information on boosting <code>NUMBER</code> type document
   * attributes.</p> <p>In the current boosting implementation, boosting focuses
   * primarily on <code>DATE</code> attributes for recency and <code>STRING</code>
   * attributes for source prioritization. <code>NUMBER</code> attributes can serve
   * as additional boosting factors when needed, but are not supported when using
   * <code>NativeIndexConfiguration</code> version 2.</p> <p>For more information on
   * how boosting document attributes work in Amazon Q Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/NumberAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class NumberAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API NumberAttributeBoostingConfiguration() = default;
    AWS_QBUSINESS_API NumberAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API NumberAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the priority of boosted document attributes in relation to other
     * boosted attributes. This parameter determines how strongly the attribute
     * influences document ranking in search results. <code>NUMBER</code> attributes
     * can serve as additional boosting factors when needed, but are not supported when
     * using <code>NativeIndexConfiguration</code> version 2.</p>
     */
    inline DocumentAttributeBoostingLevel GetBoostingLevel() const { return m_boostingLevel; }
    inline bool BoostingLevelHasBeenSet() const { return m_boostingLevelHasBeenSet; }
    inline void SetBoostingLevel(DocumentAttributeBoostingLevel value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = value; }
    inline NumberAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel value) { SetBoostingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether higher or lower numeric values should be prioritized when
     * boosting. Valid values are ASCENDING (higher numbers are more important) and
     * DESCENDING (lower numbers are more important).</p>
     */
    inline NumberAttributeBoostingType GetBoostingType() const { return m_boostingType; }
    inline bool BoostingTypeHasBeenSet() const { return m_boostingTypeHasBeenSet; }
    inline void SetBoostingType(NumberAttributeBoostingType value) { m_boostingTypeHasBeenSet = true; m_boostingType = value; }
    inline NumberAttributeBoostingConfiguration& WithBoostingType(NumberAttributeBoostingType value) { SetBoostingType(value); return *this;}
    ///@}
  private:

    DocumentAttributeBoostingLevel m_boostingLevel{DocumentAttributeBoostingLevel::NOT_SET};
    bool m_boostingLevelHasBeenSet = false;

    NumberAttributeBoostingType m_boostingType{NumberAttributeBoostingType::NOT_SET};
    bool m_boostingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
