/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/DocumentAttributeBoostingLevel.h>
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
   * <p>For more information on how boosting document attributes work in Amazon Q,
   * see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StringAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class StringAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration();
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API StringAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline const Aws::Map<Aws::String, StringAttributeValueBoostingLevel>& GetAttributeValueBoosting() const{ return m_attributeValueBoosting; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline bool AttributeValueBoostingHasBeenSet() const { return m_attributeValueBoostingHasBeenSet; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline void SetAttributeValueBoosting(const Aws::Map<Aws::String, StringAttributeValueBoostingLevel>& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting = value; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline void SetAttributeValueBoosting(Aws::Map<Aws::String, StringAttributeValueBoostingLevel>&& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting = std::move(value); }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& WithAttributeValueBoosting(const Aws::Map<Aws::String, StringAttributeValueBoostingLevel>& value) { SetAttributeValueBoosting(value); return *this;}

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& WithAttributeValueBoosting(Aws::Map<Aws::String, StringAttributeValueBoostingLevel>&& value) { SetAttributeValueBoosting(std::move(value)); return *this;}

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(const Aws::String& key, const StringAttributeValueBoostingLevel& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(key, value); return *this; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(Aws::String&& key, const StringAttributeValueBoostingLevel& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(const Aws::String& key, StringAttributeValueBoostingLevel&& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(Aws::String&& key, StringAttributeValueBoostingLevel&& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(const char* key, StringAttributeValueBoostingLevel&& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies specific values of a <code>STRING</code> type document attribute
     * being boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& AddAttributeValueBoosting(const char* key, const StringAttributeValueBoostingLevel& value) { m_attributeValueBoostingHasBeenSet = true; m_attributeValueBoosting.emplace(key, value); return *this; }


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
    inline StringAttributeBoostingConfiguration& WithBoostingLevel(const DocumentAttributeBoostingLevel& value) { SetBoostingLevel(value); return *this;}

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline StringAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel&& value) { SetBoostingLevel(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, StringAttributeValueBoostingLevel> m_attributeValueBoosting;
    bool m_attributeValueBoostingHasBeenSet = false;

    DocumentAttributeBoostingLevel m_boostingLevel;
    bool m_boostingLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
