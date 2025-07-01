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
   * in Amazon Q Business, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/metadata-boosting.html">Boosting
   * using document attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DateAttributeBoostingConfiguration">AWS
   * API Reference</a></p>
   */
  class DateAttributeBoostingConfiguration
  {
  public:
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration() = default;
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DateAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel value) { SetBoostingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline long long GetBoostingDurationInSeconds() const { return m_boostingDurationInSeconds; }
    inline bool BoostingDurationInSecondsHasBeenSet() const { return m_boostingDurationInSecondsHasBeenSet; }
    inline void SetBoostingDurationInSeconds(long long value) { m_boostingDurationInSecondsHasBeenSet = true; m_boostingDurationInSeconds = value; }
    inline DateAttributeBoostingConfiguration& WithBoostingDurationInSeconds(long long value) { SetBoostingDurationInSeconds(value); return *this;}
    ///@}
  private:

    DocumentAttributeBoostingLevel m_boostingLevel{DocumentAttributeBoostingLevel::NOT_SET};
    bool m_boostingLevelHasBeenSet = false;

    long long m_boostingDurationInSeconds{0};
    bool m_boostingDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
