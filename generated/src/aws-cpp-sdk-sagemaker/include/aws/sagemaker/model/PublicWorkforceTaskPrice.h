/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/USD.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker for each
   * task performed. </p> <p>Use one of the following prices for bounding box tasks.
   * Prices are in US dollars and should be based on the complexity of the task; the
   * longer it takes in your initial testing, the more you should offer.</p> <ul>
   * <li> <p>0.036</p> </li> <li> <p>0.048</p> </li> <li> <p>0.060</p> </li> <li>
   * <p>0.072</p> </li> <li> <p>0.120</p> </li> <li> <p>0.240</p> </li> <li>
   * <p>0.360</p> </li> <li> <p>0.480</p> </li> <li> <p>0.600</p> </li> <li>
   * <p>0.720</p> </li> <li> <p>0.840</p> </li> <li> <p>0.960</p> </li> <li>
   * <p>1.080</p> </li> <li> <p>1.200</p> </li> </ul> <p>Use one of the following
   * prices for image classification, text classification, and custom tasks. Prices
   * are in US dollars.</p> <ul> <li> <p>0.012</p> </li> <li> <p>0.024</p> </li> <li>
   * <p>0.036</p> </li> <li> <p>0.048</p> </li> <li> <p>0.060</p> </li> <li>
   * <p>0.072</p> </li> <li> <p>0.120</p> </li> <li> <p>0.240</p> </li> <li>
   * <p>0.360</p> </li> <li> <p>0.480</p> </li> <li> <p>0.600</p> </li> <li>
   * <p>0.720</p> </li> <li> <p>0.840</p> </li> <li> <p>0.960</p> </li> <li>
   * <p>1.080</p> </li> <li> <p>1.200</p> </li> </ul> <p>Use one of the following
   * prices for semantic segmentation tasks. Prices are in US dollars.</p> <ul> <li>
   * <p>0.840</p> </li> <li> <p>0.960</p> </li> <li> <p>1.080</p> </li> <li>
   * <p>1.200</p> </li> </ul> <p>Use one of the following prices for Textract
   * AnalyzeDocument Important Form Key Amazon Augmented AI review tasks. Prices are
   * in US dollars.</p> <ul> <li> <p>2.400 </p> </li> <li> <p>2.280 </p> </li> <li>
   * <p>2.160 </p> </li> <li> <p>2.040 </p> </li> <li> <p>1.920 </p> </li> <li>
   * <p>1.800 </p> </li> <li> <p>1.680 </p> </li> <li> <p>1.560 </p> </li> <li>
   * <p>1.440 </p> </li> <li> <p>1.320 </p> </li> <li> <p>1.200 </p> </li> <li>
   * <p>1.080 </p> </li> <li> <p>0.960 </p> </li> <li> <p>0.840 </p> </li> <li>
   * <p>0.720 </p> </li> <li> <p>0.600 </p> </li> <li> <p>0.480 </p> </li> <li>
   * <p>0.360 </p> </li> <li> <p>0.240 </p> </li> <li> <p>0.120 </p> </li> <li>
   * <p>0.072 </p> </li> <li> <p>0.060 </p> </li> <li> <p>0.048 </p> </li> <li>
   * <p>0.036 </p> </li> <li> <p>0.024 </p> </li> <li> <p>0.012 </p> </li> </ul>
   * <p>Use one of the following prices for Rekognition DetectModerationLabels Amazon
   * Augmented AI review tasks. Prices are in US dollars.</p> <ul> <li> <p>1.200 </p>
   * </li> <li> <p>1.080 </p> </li> <li> <p>0.960 </p> </li> <li> <p>0.840 </p> </li>
   * <li> <p>0.720 </p> </li> <li> <p>0.600 </p> </li> <li> <p>0.480 </p> </li> <li>
   * <p>0.360 </p> </li> <li> <p>0.240 </p> </li> <li> <p>0.120 </p> </li> <li>
   * <p>0.072 </p> </li> <li> <p>0.060 </p> </li> <li> <p>0.048 </p> </li> <li>
   * <p>0.036 </p> </li> <li> <p>0.024 </p> </li> <li> <p>0.012 </p> </li> </ul>
   * <p>Use one of the following prices for Amazon Augmented AI custom human review
   * tasks. Prices are in US dollars.</p> <ul> <li> <p>1.200 </p> </li> <li> <p>1.080
   * </p> </li> <li> <p>0.960 </p> </li> <li> <p>0.840 </p> </li> <li> <p>0.720 </p>
   * </li> <li> <p>0.600 </p> </li> <li> <p>0.480 </p> </li> <li> <p>0.360 </p> </li>
   * <li> <p>0.240 </p> </li> <li> <p>0.120 </p> </li> <li> <p>0.072 </p> </li> <li>
   * <p>0.060 </p> </li> <li> <p>0.048 </p> </li> <li> <p>0.036 </p> </li> <li>
   * <p>0.024 </p> </li> <li> <p>0.012 </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PublicWorkforceTaskPrice">AWS
   * API Reference</a></p>
   */
  class PublicWorkforceTaskPrice
  {
  public:
    AWS_SAGEMAKER_API PublicWorkforceTaskPrice();
    AWS_SAGEMAKER_API PublicWorkforceTaskPrice(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PublicWorkforceTaskPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline const USD& GetAmountInUsd() const{ return m_amountInUsd; }

    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline bool AmountInUsdHasBeenSet() const { return m_amountInUsdHasBeenSet; }

    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline void SetAmountInUsd(const USD& value) { m_amountInUsdHasBeenSet = true; m_amountInUsd = value; }

    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline void SetAmountInUsd(USD&& value) { m_amountInUsdHasBeenSet = true; m_amountInUsd = std::move(value); }

    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline PublicWorkforceTaskPrice& WithAmountInUsd(const USD& value) { SetAmountInUsd(value); return *this;}

    /**
     * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker in
     * United States dollars.</p>
     */
    inline PublicWorkforceTaskPrice& WithAmountInUsd(USD&& value) { SetAmountInUsd(std::move(value)); return *this;}

  private:

    USD m_amountInUsd;
    bool m_amountInUsdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
