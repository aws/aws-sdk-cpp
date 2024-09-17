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
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration();
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DateAttributeBoostingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how much a document attribute is boosted.</p>
     */
    inline const DocumentAttributeBoostingLevel& GetBoostingLevel() const{ return m_boostingLevel; }
    inline bool BoostingLevelHasBeenSet() const { return m_boostingLevelHasBeenSet; }
    inline void SetBoostingLevel(const DocumentAttributeBoostingLevel& value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = value; }
    inline void SetBoostingLevel(DocumentAttributeBoostingLevel&& value) { m_boostingLevelHasBeenSet = true; m_boostingLevel = std::move(value); }
    inline DateAttributeBoostingConfiguration& WithBoostingLevel(const DocumentAttributeBoostingLevel& value) { SetBoostingLevel(value); return *this;}
    inline DateAttributeBoostingConfiguration& WithBoostingLevel(DocumentAttributeBoostingLevel&& value) { SetBoostingLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration, in seconds, of a boost applies to a <code>DATE</code>
     * type document attribute.</p>
     */
    inline long long GetBoostingDurationInSeconds() const{ return m_boostingDurationInSeconds; }
    inline bool BoostingDurationInSecondsHasBeenSet() const { return m_boostingDurationInSecondsHasBeenSet; }
    inline void SetBoostingDurationInSeconds(long long value) { m_boostingDurationInSecondsHasBeenSet = true; m_boostingDurationInSeconds = value; }
    inline DateAttributeBoostingConfiguration& WithBoostingDurationInSeconds(long long value) { SetBoostingDurationInSeconds(value); return *this;}
    ///@}
  private:

    DocumentAttributeBoostingLevel m_boostingLevel;
    bool m_boostingLevelHasBeenSet = false;

    long long m_boostingDurationInSeconds;
    bool m_boostingDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
