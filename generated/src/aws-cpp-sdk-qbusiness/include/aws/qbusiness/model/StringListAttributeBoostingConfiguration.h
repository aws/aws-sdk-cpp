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
   * attributes.</p>  <p>For <code>STRING</code> and <code>STRING_LIST</code>
   * type document attributes to be used for boosting on the console and the API,
   * they must be enabled for search using the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeConfiguration.html">DocumentAttributeConfiguration</a>
   * object of the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_UpdateIndex.html">UpdateIndex</a>
   * API. If you haven't enabled searching on these attributes, you can't boost
   * attributes of these data types on either the console or the API.</p> 
   * <p>For more information on how boosting document attributes work in Amazon Q,
   * see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StringListAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class StringListAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration();
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API StringListAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline const DocumentAttributeBoostingLevel& GetBoostingLevel() const{ return m_boostingLevel; }

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline bool BoostingLevelHasBeenSet() const { return m_boostingLevelHasBeenSet; }

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline void SetBoostingLevel(const DocumentAttributeBoostingLevel& value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = value; }

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline void SetBoostingLevel(DocumentAttributeBoostingLevel&& value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = std::move(value); }

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline StringListAttributeBoostingConfiguration& WithBoostingLevel(const DocumentAttributeBoostingLevel& value) { SetBoostingLevel(value); return *this;}

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline StringListAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel&& value) { SetBoostingLevel(std::move(value)); return *this;}

  private:

    DocumentAttributeBoostingLevel m_boostingLevel;
    bool m_boostingLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
