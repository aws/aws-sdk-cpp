/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/JoinSource.h>
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
   * <p>The data structure used to specify the data to be used for inference in a
   * batch transform job and to associate the data that is relevant to the prediction
   * results in the output. The input filter provided allows you to exclude input
   * data that is not needed for inference in a batch transform job. The output
   * filter provided allows you to include input data relevant to interpreting the
   * predictions in the output from the job. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-data-processing.html">Associate
   * Prediction Results with their Corresponding Input Records</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataProcessing">AWS
   * API Reference</a></p>
   */
  class DataProcessing
  {
  public:
    AWS_SAGEMAKER_API DataProcessing() = default;
    AWS_SAGEMAKER_API DataProcessing(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataProcessing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-data-processing.html#data-processing-operators">JSONPath</a>
     * expression used to select a portion of the input data to pass to the algorithm.
     * Use the <code>InputFilter</code> parameter to exclude fields, such as an ID
     * column, from the input. If you want SageMaker to pass the entire input dataset
     * to the algorithm, accept the default value <code>$</code>.</p> <p>Examples:
     * <code>"$"</code>, <code>"$[1:]"</code>, <code>"$.features"</code> </p>
     */
    inline const Aws::String& GetInputFilter() const { return m_inputFilter; }
    inline bool InputFilterHasBeenSet() const { return m_inputFilterHasBeenSet; }
    template<typename InputFilterT = Aws::String>
    void SetInputFilter(InputFilterT&& value) { m_inputFilterHasBeenSet = true; m_inputFilter = std::forward<InputFilterT>(value); }
    template<typename InputFilterT = Aws::String>
    DataProcessing& WithInputFilter(InputFilterT&& value) { SetInputFilter(std::forward<InputFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-data-processing.html#data-processing-operators">JSONPath</a>
     * expression used to select a portion of the joined dataset to save in the output
     * file for a batch transform job. If you want SageMaker to store the entire input
     * dataset in the output file, leave the default value, <code>$</code>. If you
     * specify indexes that aren't within the dimension size of the joined dataset, you
     * get an error.</p> <p>Examples: <code>"$"</code>, <code>"$[0,5:]"</code>,
     * <code>"$['id','SageMakerOutput']"</code> </p>
     */
    inline const Aws::String& GetOutputFilter() const { return m_outputFilter; }
    inline bool OutputFilterHasBeenSet() const { return m_outputFilterHasBeenSet; }
    template<typename OutputFilterT = Aws::String>
    void SetOutputFilter(OutputFilterT&& value) { m_outputFilterHasBeenSet = true; m_outputFilter = std::forward<OutputFilterT>(value); }
    template<typename OutputFilterT = Aws::String>
    DataProcessing& WithOutputFilter(OutputFilterT&& value) { SetOutputFilter(std::forward<OutputFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the source of the data to join with the transformed data. The valid
     * values are <code>None</code> and <code>Input</code>. The default value is
     * <code>None</code>, which specifies not to join the input with the transformed
     * data. If you want the batch transform job to join the original input data with
     * the transformed data, set <code>JoinSource</code> to <code>Input</code>. You can
     * specify <code>OutputFilter</code> as an additional filter to select a portion of
     * the joined dataset and store it in the output file.</p> <p>For JSON or JSONLines
     * objects, such as a JSON array, SageMaker adds the transformed data to the input
     * JSON object in an attribute called <code>SageMakerOutput</code>. The joined
     * result for JSON must be a key-value pair object. If the input is not a key-value
     * pair object, SageMaker creates a new JSON file. In the new JSON file, and the
     * input data is stored under the <code>SageMakerInput</code> key and the results
     * are stored in <code>SageMakerOutput</code>.</p> <p>For CSV data, SageMaker takes
     * each row as a JSON array and joins the transformed data with the input by
     * appending each transformed row to the end of the input. The joined data has the
     * original input data followed by the transformed data and the output is a CSV
     * file.</p> <p>For information on how joining in applied, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform-data-processing.html#batch-transform-data-processing-workflow">Workflow
     * for Associating Inferences with Input Records</a>.</p>
     */
    inline JoinSource GetJoinSource() const { return m_joinSource; }
    inline bool JoinSourceHasBeenSet() const { return m_joinSourceHasBeenSet; }
    inline void SetJoinSource(JoinSource value) { m_joinSourceHasBeenSet = true; m_joinSource = value; }
    inline DataProcessing& WithJoinSource(JoinSource value) { SetJoinSource(value); return *this;}
    ///@}
  private:

    Aws::String m_inputFilter;
    bool m_inputFilterHasBeenSet = false;

    Aws::String m_outputFilter;
    bool m_outputFilterHasBeenSet = false;

    JoinSource m_joinSource{JoinSource::NOT_SET};
    bool m_joinSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
