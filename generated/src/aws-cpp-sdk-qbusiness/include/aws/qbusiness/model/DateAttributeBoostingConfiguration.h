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
   * <p>Provides information on boosting <code>DATE</code> type document
   * attributes.</p> <p>For more information on how boosting document attributes work
   * in Amazon Q, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DateAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class DateAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration();
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline long long GetBoostingDurationInSeconds() const{ return m_boostingDurationInSeconds; }

    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline bool BoostingDurationInSecondsHasBeenSet() const { return m_boostingDurationInSecondsHasBeenSet; }

    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline void SetBoostingDurationInSeconds(long long value) { m_boostingDurationInSecondsHasBeenSet = true; m_boostingDurationInSeconds = value; }

    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline DateAttributeBoostingConfiguration& WithBoostingDurationInSeconds(long long value) { SetBoostingDurationInSeconds(value); return *this;}


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
    inline DateAttributeBoostingConfiguration& WithBoostingLevel(const DocumentAttributeBoostingLevel& value) { SetBoostingLevel(value); return *this;}

    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline DateAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel&& value) { SetBoostingLevel(std::move(value)); return *this;}

  private:

    long long m_boostingDurationInSeconds;
    bool m_boostingDurationInSecondsHasBeenSet = false;

    DocumentAttributeBoostingLevel m_boostingLevel;
    bool m_boostingLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
