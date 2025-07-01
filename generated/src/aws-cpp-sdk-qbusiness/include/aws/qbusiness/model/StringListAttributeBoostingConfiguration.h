/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAttributeBoostingLevel.h>
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
   * <p>Provides information on boosting <code>STRING_LIST</code> type document
   * attributes.</p> <p>In the current boosting implementation, boosting focuses
   * primarily on <code>DATE</code> attributes for recency and <code>STRING</code>
   * attributes for source prioritization. <code>STRING_LIST</code> attributes can
   * serve as additional boosting factors when needed, but are not supported when
   * using <code>NativeIndexConfiguration</code> version 2.</p>  <p>For
   * <code>STRING</code> and <code>STRING_LIST</code> type document attributes to be
   * used for boosting on the console and the API, they must be enabled for search
   * using the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeConfiguration.html">DocumentAttributeConfiguration</a>
   * object of the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_UpdateIndex.html">UpdateIndex</a>
   * API. If you haven't enabled searching on these attributes, you can't boost
   * attributes of these data types on either the console or the API.</p> 
   * <p>For more information on how boosting document attributes work in Amazon Q
   * Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StringListAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class StringListAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration() = default;
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the priority of boosted document attributes in relation to other
     * boosted attributes. This parameter determines how strongly the attribute
     * influences document ranking in search results. <code>STRING_LIST</code>
     * attributes can serve as additional boosting factors when needed, but are not
     * supported when using <code>NativeIndexConfiguration</code> version 2.</p>
     */
    inline DocumentAttributeBoostingLevel GetBoostingLevel() const { return m_boostingLevel; }
    inline bool BoostingLevelHasBeenSet() const { return m_boostingLevelHasBeenSet; }
    inline void SetBoostingLevel(DocumentAttributeBoostingLevel value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = value; }
    inline StringListAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel value) { SetBoostingLevel(value); return *this;}
    ///@}
  private:

    DocumentAttributeBoostingLevel m_boostingLevel{DocumentAttributeBoostingLevel::NOT_SET};
    bool m_boostingLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
